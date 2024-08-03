#include <iostream> 
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

double
addNum (double a, double b)
{
  return a + b;
}

double
subNum (double a, double b)
{
  return a - b;
}

double
mulNum (double a, double b)
{
  return a * b;
}

double
diviNum (double a, double b)
{
  return a / b;
}

void
calculator ()
{
  double op1, op2;
  char option;
  double result;
  cout << "What To do\n (+,-,*,/)" << endl;
  cin >> option;
  cout << "Enter Numbers" << endl;
  cin >> op1 >> op2;



  switch (option)
    {
      {
    case '+':
	result = addNum (op1, op2);
	break;
    case '-':
	result = subNum (op1, op2);
	break;
    case '*':
	result = mulNum (op1, op2);
	break;
    case '/':
	result = diviNum (op1, op2);
	break;
    default:
	cout << "Invalid operator" << endl;
      }

    }
  cout << "Result = " << result << endl;
}


// Finance Portion


double calculateTotal (double salary, double amount)
{
  return salary + amount;
}
double remainingBudget(double salary, double amount)
{
    return salary - amount;
}

double zakatAmout(double salary)
{
    int zakat = (2.5/100) * salary;
    return zakat;
}
void
Finance ()
{
  double salary;
  double total = 0;
  int financeChoice;
  bool opFinance = true;

  cout << " You Chose Finance\n\n\n" << endl;
  cout << "Enter your Salary" << endl;
  cin >> salary;

  while (opFinance != false)
    {
      cout << " Do You Want to: " << endl;
      cout << " 1. Add Income +" << endl;
      cout << " 2. Remove Expenses -" << endl;
      cout << " 3. Zakat" << endl;
      cout << " 0. To Exit Finances" << endl;
      cout << " Enter Your Choices 0-3" << endl;
      cin >> financeChoice;
      cout << "\n" << endl;
      if (financeChoice == 1)
    	{
	  double addFinance;
	  cout << "How much more money get you get this month?"<<endl;
	  cin >> addFinance;
	  total = calculateTotal (salary, addFinance);
	  cout << "Your Total for this month is: " << total << " Whoo!\n\n\n\n" <<endl;
  	}
  	else if(financeChoice == 2)
  	{
  	    double Expenses;
  	    cout<<"Enter Total Expenses This Month\n";
  	    cin>>Expenses;
  	    total = remainingBudget(salary,Expenses);
  	    cout<<"Your Total Remaining Budget This Month Is: "<<total<<endl;
  	}
  	else if(financeChoice == 3)
  	{
  	    double Zakat = zakatAmout(salary);
  	    cout<<"\nThe Amount Of Zakat You Have To Pay From Your Salary Is: "<<Zakat<<endl;
  	}
      else if (financeChoice == 0)
	{
	  opFinance = false;
	}
	else
	{
	    cout<<"Invalid Choice"<<endl;    
	}
	
    }

}



//////////// Weather Portion//////////

const int NUM_DAYS = 7; // means the value cannot change 

// 1. getting data for weather
void getWeatherData(int temperatures[], int numDays)
{ // numDays can be chnged later
    cout << "Enter the temperatures for the next " << numDays << " days:" << endl;
    for (int i = 0; i < numDays; i++)
    {
        cout << "Day " << (i + 1) << ": ";
        cin >> temperatures[i];
    }
}

// 2. calculating average of the temperature
double calculateAverage(int temperatures[], int numDays) // parameters
{
    int sum = 0;
    for (int i = 0; i < numDays; i++)
    {
        sum += temperatures[i]; // sum = sum+temperature[i]
    }
    return (double)sum / numDays; // in this we used type casting, it returns double value
}

// 3. calculating maximum temperature
int findMaxTemperature(int temperatures[], int numDays)
{
    int maxTemp = temperatures[0];
    for (int i = 1; i < numDays; i++)
    {
        if (temperatures[i] > maxTemp)
        {
            maxTemp = temperatures[i];
        }
    }
    return maxTemp; /*
    the code scans through the array and keeps track of the highest temperature
    encountered, providing the maximum temperature value as the result.*/
}

// 4. calculating minimum temperature
int findMinTemperature(int temperatures[], int numDays)
{
    int minTemp = temperatures[0];
    for (int i = 1; i < numDays; i++)
    {
        if (temperatures[i] < minTemp)
        {
            minTemp = temperatures[i];
        }
    }
    return minTemp;
}

void weatherApp()
{
    int temperatures[NUM_DAYS];

    getWeatherData(temperatures, NUM_DAYS);

    double average = calculateAverage(temperatures, NUM_DAYS);
    int maxTemp = findMaxTemperature(temperatures, NUM_DAYS);
    int minTemp = findMinTemperature(temperatures, NUM_DAYS);

    cout << "Average temperature: " << average << endl;
    cout << "Maximum temperature: " << maxTemp << endl;
    cout << "Minimum temperature: " << minTemp << endl;
}
///////////////////BOOK KEEPING/////////////////////
struct Books
{
    char title[50];
    char author[50];
    int bookID;
};
// funtion that will display the Contacts details
void displayBooks(struct Books b1, struct Books b2)
{
    cout << "Book 1: " << endl;
    cout << "Title: " << b1.title << endl;
    cout << "auhor: " << b1.author << endl;
    cout << "Book ID: " << b1.bookID << endl;
    cout << endl;

    cout << "Book 2: " << endl;
    cout << "Title: " << b2.title << endl;
    cout << "address: " << b2.author << endl;
    cout << "Book ID: " << b2.bookID << endl;
    cout << endl;
}

void bookApp()
{
    struct Books b1, b2;

    // contact1 specifications
    cout << "Enter the book name: ";
    cin >> b1.title;
    cout << "Enter the author: ";
    cin >> b1.author;
    cout << "Enter the book id: ";
    cin >> b1.bookID;

    // contact2 specifications
    cout << "Enter the book name: ";
    cin >> b2.title;
    cout << "Enter the author name: ";
    cin >> b2.author;
    cout << "Enter the book id: ";
    cin >> b2.bookID;

    // display contact1 and contact2
    displayBooks(b1, b2);
}

// Note Taking starts here

void addNote()
{ // ofstream used to write notes
    ofstream file("notes.txt", ios::app);
    // ofstream file;//file created
    // file.open("notes.txt");//opened the file and named it as notes

    if (!file)
    {
        cout << "Unable to open file for writing." << endl;
        return; // if the file doesn't exit it will give this message
    }
    // if the file exists it will move to this part below:
    string note;
    cout << "Enter your note (press Enter to finish): ";
    getline(cin, note);
    file << note << endl; // in this line we are writing the notes
    file.close();         // the file is closed here
    cout << "Note added successfully." << endl;
    cout << endl;
}

void viewNotes()
{                               // ifstream used to view notes
    ifstream file("notes.txt"); // ifstream used to read the notes file

    if (!file)
    {
        cout << "No notes found." << endl;
        return; // same process as above
    }

    string line;       // variable named line is declared locally within this function
    int noteCount = 0; // this variable is intialized to 0 that will count the lines we enter

    while (getline(file, line))
    {                         // getline functions takes 2 arguments "file" & "line" line that holds the content
        cout << line << endl; // lines that has been written
        noteCount++;          // will count the lines. each note consists of one line
    }

    file.close();
    cout << "Total notes: " << noteCount << endl;
}

void noteApp()
{
    int choice;

    while (true)
    { // this loop will run until the condition is true. if the choice is false it will run again
        cout << "       *NOTE TAKING*       " << endl;
        cout << "1. Add Note" << endl;
        cout << "2. View Notes" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:           // writing notes
            cin.ignore(); // ignore additional lines
            addNote();    // calling the above addNote fuction to perform
            break;
        case 2:          // viewing notes
            viewNotes(); // callin the fuction
            break;
        case 3:
            cout << "Exiting the program."<<endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
        cout << endl;
    }
}

// Contacts manager starts here

struct Contacts
{
    char address[50]; // memberfunction
    char email[50];   // memberfunction
    char name[50];    // memberfunction
    int phoneNumber;  // memberfunction
};

void displayContacts(struct Contacts contact1, struct Contacts contact2)
{
    cout << "Contact 1: " << endl;
    cout << "Name: " << contact1.name << endl;
    cout << "Address: " << contact1.address << endl;
    cout << "Phone Number: " << contact1.phoneNumber << endl;
    cout << "Email: " << contact1.email << endl;
    cout << endl;

    cout << "Contact 2: " << endl;
    cout << "Name: " << contact2.name << endl;
    cout << "Address: " << contact2.address << endl;
    cout << "Phone Number: " << contact2.phoneNumber << endl;
    cout << "Email: " << contact2.email << endl;
    cout << endl;
}

void gettingContacts1(struct Contacts contact1)
{
    // contact1 specifications
    cout << "Enter the name: ";
    cin >> contact1.name;
    cout << "Enter the address: ";
    cin >> contact1.address;
    cout << "Enter the phone number: ";
    cin >> contact1.phoneNumber;
    cout << "Enter the email: ";
    cin >> contact1.email;

    cout << endl;
}

void gettingContacts2(struct Contacts contact2)
{
    // contact2 specifications
    cout << "Enter the name: ";
    cin >> contact2.name;
    cout << "Enter the Address: ";
    cin >> contact2.address;
    cout << "Enter the PhoneNumber: ";
    cin >> contact2.phoneNumber;
    cout << "Enter the email: ";
    cin >> contact2.email;
}

void contactApp()
{
    struct Contacts contact1, contact2;

    // entering values
    gettingContacts1(contact1);
    gettingContacts2(contact2);
    // display contact1 and contact2
    displayContacts(contact1, contact2);
}
int
main ()
{
  string name;
  int choice;

  cout << "Enter Name Please" << endl;
  cin >> name;

  while (true)
    {
      cout << "Hello " << name << " How Can I Help You Today" << endl;

      cout <<
	"\n\n\t\t\t1. Calculator\t\t\t\t\t\t2. Finance\n\n\t\t\t3. Weather\t\t\t\t\t\t4. Book Keeping\n\n\t\t\t5. Note App\t\t\t\t\t\t6. Contact App\n\n\t\t\t0. Exit\t\t\t\t\t\t";
      cin >> choice;

      if (choice == 1)
	{
	  calculator ();
	}
      else if (choice == 2)
	{
	  Finance ();
	}
	else if(choice == 3)
	{
	        weatherApp();
    }   
    else if (choice == 4)
    {
        // Handle weather option
        bookApp();
    }
    else if (choice == 5)
    {
        // Handle weather option
        noteApp();
    }
    else if (choice == 6)
    {
        // Handle weather option
        contactApp();
    }

    };

  return 0;
}
