#include <iostream>
using namespace std;

// Enumeration for the book list
enum enBook_list
{
    The_Great_Gatsby = 1,
    Pride_and_Prejudice = 2,
    Sapiens = 3,
    The_Alchemist = 4,
    Atomic_Habits = 5
};

// Structure to hold rental time information
struct stTime_Of_Rent
{
    int Number_Of_Weeks; 
    int Number_Of_Days;  
};

// Structure to hold rental cost information
struct stCost_of_Time
{
    float Cost_of_Weeks; 
    float Cost_Of_Days; 
    float Total;         
};

// Function to print the list of available books
void Print_Table_Books_List()
{
    cout << "***************************" << endl;
    cout << "\t " << "Books List" << "\t  " << endl;
    cout << "***************************\n";
    cout << " 1-The Great Gatsby\n 2-Pride and Prejudice\n 3-Sapiens\n 4-The Alchemist\n 5-Atomic Habits\n";
    cout << "___________________________" << endl;
}

// Function to read a positive number within a specified range
int Read_Positive_Number(string Message, int From, int To)
{
    int Number;
    do
    {
        cout << Message << endl; 
        cin >> Number;           
    } while (Number < From || Number > To); 
    return Number; 
}

// Function to print the name of the chosen book
void Print_Book_Chosen(int Number)
{
    // Display the chosen book based on the input number
    if (Number == enBook_list::The_Great_Gatsby)
    {
        cout << "Now you chosen book: The Great Gatsby" << endl;
    }
    else if (Number == enBook_list::Pride_and_Prejudice)
    {
        cout << "Now you chosen book: Pride and Prejudice" << endl;
    }
    else if (Number == enBook_list::Sapiens)
    {
        cout << "Now you chosen book: Sapiens" << endl;
    }
    else if (Number == enBook_list::The_Alchemist)
    {
        cout << "Now you chosen book: The Alchemist" << endl;
    }
    else if (Number == enBook_list::Atomic_Habits)
    {
        cout << "Now you chosen book: Atomic Habits" << endl;
    }
}

// Function to read rental time from the user
stTime_Of_Rent Read_Time_Of_Rent()
{
    stTime_Of_Rent Time_Of_Rent;
    Time_Of_Rent.Number_Of_Weeks = Read_Positive_Number("How many weeks do you want to rent the book?\n*Note: The maximum allowed period for renting book is 8 Weeks.\n*Note: If you do not want to rent the book for a weekly period, enter the number 0", 0, 8);
    Time_Of_Rent.Number_Of_Days = Read_Positive_Number("How many Days do you want to rent the book?\n*Note: The maximum allowed period for renting book is 15 days.", 1, 15);
    return Time_Of_Rent;
}

// Function to calculate the rental cost based on weeks and days
stCost_of_Time Calculate_Cost_Of_Time(stTime_Of_Rent Time_Of_Rent)
{
    stCost_of_Time Cost_Of_Time;
    Cost_Of_Time.Cost_of_Weeks = Time_Of_Rent.Number_Of_Weeks * 3.12; 
    Cost_Of_Time.Cost_Of_Days = Time_Of_Rent.Number_Of_Days * 1.55;   
    Cost_Of_Time.Total = Cost_Of_Time.Cost_of_Weeks + Cost_Of_Time.Cost_Of_Days; 
    return Cost_Of_Time; 
}

// Function to print the cost breakdown
void Print_Cost(stCost_of_Time Cost_Of_Time, stTime_Of_Rent Time_Of_Rent)
{
    cout << "Cost of " << Time_Of_Rent.Number_Of_Weeks << " Weeks is: " << Cost_Of_Time.Cost_of_Weeks << "$" << endl; 
    cout << "Cost of " << Time_Of_Rent.Number_Of_Days << " Days is: " << Cost_Of_Time.Cost_Of_Days << "$" << endl; 
    cout << "Total of Cost is: " << Cost_Of_Time.Total << "$" << endl; 
}

// Function to ask the user if they want to accept the rental
string Ask_User_Accept_Or_No()
{
    string Answer;
    do
    {
        cout << "Do You Want Accept?\n(Enter 'Yes' or 'No'):" << endl; 
        cin >> Answer; 
    } while (Answer != "Yes" && Answer != "No"); 
    return Answer; 
}

// Function to print the final result of the rental process
void Print_Final_Result(string Answer, int Number, stTime_Of_Rent Time_Of_Rent, stCost_of_Time Cost_Of_Time)
{
    if (Answer == "Yes") // If user accepted the rental
    {
        cout << "Congratulations, the rental process was completed successfully." << endl;
        cout << "*Remember: You rented the book ";

        // Display the rented book based on the input number
        if (Number == enBook_list::The_Great_Gatsby)
        {
            cout << "The Great Gatsby";
        }
        else if (Number == enBook_list::Pride_and_Prejudice)
        {
            cout << "Pride and Prejudice";
        }
        else if (Number == enBook_list::Sapiens)
        {
            cout << "Sapiens";
        }
        else if (Number == enBook_list::The_Alchemist)
        {
            cout << "The Alchemist";
        }
        else if (Number == enBook_list::Atomic_Habits)
        {
            cout << "Atomic Habits";
        }

        // Print the rental details
        cout << " for " << Time_Of_Rent.Number_Of_Weeks << " Weeks and " << Time_Of_Rent.Number_Of_Days << " Days ";
        cout << ",Cost of " << Time_Of_Rent.Number_Of_Weeks << " Weeks is: " << Cost_Of_Time.Cost_of_Weeks << "$ ";
        cout << "and Cost of " << Time_Of_Rent.Number_Of_Days << " Days is: " << Cost_Of_Time.Cost_Of_Days << "$ ";
        cout << ",Total of Cost is: " << Cost_Of_Time.Total << "$" << endl;
    }
    else if (Answer == "No") // If user declined the rental
    {
        cout << "Ok, Have a good day :)" << endl; // Print goodbye message
    }
}

int main()
{
    Print_Table_Books_List(); 
    int Read_Number = Read_Positive_Number("Choose number Book From list: ", 1, 5);
    Print_Book_Chosen(Read_Number); 
    stTime_Of_Rent Read_Time = Read_Time_Of_Rent();
    stCost_of_Time Calculate_Cost = Calculate_Cost_Of_Time(Read_Time);
    Print_Cost(Calculate_Cost, Read_Time);
    string Answer = Ask_User_Accept_Or_No();
    Print_Final_Result(Answer, Read_Number, Read_Time, Calculate_Cost);

    return 0;
}