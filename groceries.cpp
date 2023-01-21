#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <iomanip>
using namespace std;

class Groceries 
{
public:
    string capitalLetter(string item, int letterNumber)
    {
        /*
        Capitilize a letter or all letters in a string
        */
        for (int i = 0; i <= letterNumber; i++) 
        {
            item[i] = toupper(item[i]);
        }
        
        return item;
    }

    float addCart(vector<float> price) 
    {
        /*
        Take a vector and add up the total of all numbers within the 
        vector.
        */
        float totalPrice;
        totalPrice = accumulate(price.begin(), price.end(), 0.00);
        cout << totalPrice << " before tax.";
        
        return 0;
    }
};


int main() 
{
    // Call the Groceries class and assign it to the g variable
    Groceries g;
    // Create the veriables that we will be using for this program
    string item, location, answer, finished;
    float price;
    
    // Create the three vectors that will be storing our information
    vector<string> itemList;
    vector<float> priceList;
    vector<string> locationList;


    // Ask for user input and assign the input to the variable answer
    cout << "Would you like to add something to your grocery list? \n";
    cin >> answer;
    answer = g.capitalLetter(answer,answer.length());

    /* 
    Start a loop that will allow the user add as many things to 
    their cart as they want
    */
    while (answer == "YES") 
    {
        /* 
        Get user input and format the input by calling Grocery class 
        functions so output looks nice 
        */
        cout << "What item would you like to add? \n";
        cin >> item;
        item = g.capitalLetter(item, 0);

        itemList.push_back(item);

        cout << "What is the price of the item? \n";
        cout << fixed;
        cout << setprecision(2);
        cin >> price;

        priceList.push_back(price);

        cout << "Where will you buy this item? \n";
        cin >> location;
        location = g.capitalLetter(location, 0);

        locationList.push_back(location);

        // Give user opurtunity to exit loop
        cout << "Would you like to add something else to your grocery list? \n";
        cin >> answer;
        answer = g.capitalLetter(answer, answer.length());
        
        // If user inputs anything other than yes or no they can correct themselves here
        if (answer != "YES" && answer != "NO") 
        {
            cout << "Invalid input\n";
            cout << "Would you like to add something to your grocery list? (yes/no) \n";
            cin >> answer;
            answer = g.capitalLetter(answer,answer.length());
        }
    }
    
    // User now has opportunity to look at grocery list
    cout << "Would you like to look at your grocery list? \n";
    cin >> finished;
    finished = g.capitalLetter(finished, finished.length());
    cout << "\n";

    if (finished == "YES") 
    {
        cout << "Here is your grocery list: \n";
        
        for (int i = 0; i < itemList.size(); i++) 
        {
            cout << "You have " << itemList.at(i) << " at $" << priceList.at(i) << " bought at " << locationList.at(i) << ".\n";
            
        }
        
        // Display total price of grocery list
        cout << "Your total price is $";
        g.addCart(priceList);
        
    }
    return 0;
}