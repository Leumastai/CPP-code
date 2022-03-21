#include<iostream>
#include<cstdlib>
#include<ctype.h>
#include<stdio.h>
#include<fstream>
#include<iomanip>
#include<curses.h>
//#include<conio> 
//


using namespace std;

class BankAccount
{
    private:
        int accountNo;
        char name[35]; //Maximum character name is 25
        //string name;
        int accountBalance;
        char accountType; //either current or savings
    public:
        int getAccountNo();
        string createAccount();
        void displayAccount();
        void modifyAccount();
        void withdraw(int);
        void deposit(int);
        void accountReport();
        //int retAccountNo();
        float retAccountBal();
        char retAccountType();
};

int BankAccount::getAccountNo()
{
    srand((unsigned) time(NULL));

    //get a range of numbers between 1000000001 - 9999999999
    accountNo = 1000000001 + (rand() & 9999999999);
    return accountNo;
}


string BankAccount::createAccount()
{
    cout << "\n\tPlease note all input CANNOT BE CHANGED\n";
    cout << "Enter your full name: ";
    //Generally, cin terminates when whitespaces is found.
    //with cin.get ignors the whitespaces
    cin.getline(name, sizeof(name));
    //cin >> name;
    cout << "\nEnter the type of account.";
    cout << "\n\t'S' for Savings, 'C' for current: ";
    
    char identifier;
    cin >> identifier;
    identifier = toupper(identifier);
    accountType = identifier;

    //assuming our user will listen to us and not decide to break our code
    /* do
    {
        cout << "Please enter a valid identifier!";
        cin >> identifier;
        identifier = toupper(identifier);  
        accountType = identifier;
    } while (identifier != 'S' || identifier != 'C'); */


    cout << "\nEnter inital amount to deposite (>500 for savings and >1000 for current) :";
    double amount;
    cin >> amount;
    if (accountType == 'S' && amount <= 499.99)
        cout << "\nYou've to make an initial deposit of more than 500 for savings account";
    else if (accountType == 'C' && amount <= 999.99)
        cout << "\nYou've to make an initial deposit of more than 1000 for current account";
    else
        accountBalance = amount;
    

    string status = "\nAccount successfully created! Thanks for chosing Elf Bank PLC";
    return status;

}


void BankAccount::displayAccount()
{
    cout << "Accout Name: " << name;

    cout << "\nAccount Number: " << getAccountNo();

    if (accountType == 'S')
        cout << "\nYou have $" << accountBalance <<" in your savings account.";
    else if (accountType == 'C')   
        cout << "\nYou have $" << accountBalance <<" in your current account";   

}

void BankAccount::deposit(int x)
{
    accountBalance += x;

    cout << "You've successfully deposited $" << x;
}

void BankAccount::withdraw(int x)
{
    accountBalance -= x;
    
    cout << "You've successfully withdraw $" << x;
}

void BankAccount::modifyAccount()
{
    cout << "\nThe acount No. " << accountNo;
    cout<<"\n\nEnter The Name of The account Holder : ";
	cin.get(name, 35);
	cout<<"\nEnter Type of The account (C/S) : ";
	cin>>accountType;
	accountType = toupper(accountType);
	cout<<"\nEnter The amount : ";
	cin>>accountBalance;
}

void BankAccount::accountReport()
{
    cout <<name << setw(10) <<"|" << accountNo  << setw(10)<< "|" << \
            accountType <<setw(10) << "|" << accountBalance << endl;
}

float BankAccount::retAccountBal()
{
    return accountBalance;
}

char BankAccount::retAccountType()
{
    return accountType;
}

//  MAIN FUNCTION OF THE PROGRAM  

void writeActRec();
void displayActRec(int);
void modifyActRec(int);
void deleteActRec(int);
void deposit_withdraw(int, int);
void displayAll();
void introDisplay();

int main()
{
    char val;
	int num;
    //clear(); //To clear screen
	introDisplay();
	do
	{
		//clear();
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. NEW ACCOUNT";
		cout<<"\n\n\t02. DEPOSIT AMOUNT";
		cout<<"\n\n\t03. WITHDRAW AMOUNT";
		cout<<"\n\n\t04. BALANCE ENQUIRY";
		cout<<"\n\n\t05. ALL ACCOUNT HOLDER LIST";
		cout<<"\n\n\t06. CLOSE AN ACCOUNT";
		cout<<"\n\n\t07. MODIFY AN ACCOUNT";
		cout<<"\n\n\t08. EXIT";
		cout<<"\n\n\tSelect Your Option (1-8) ";
		cin>>val;

		//clear();

		switch(val)
		{
		case '1':
			writeActRec();
			break;
		case '2':
			cout<<"\n\n\tEnter The account No. : ";
            cin>>num;
			deposit_withdraw(num, 1);
			break;
		case '3':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			deposit_withdraw(num, 2);
			break;
		case '4':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			displayActRec(num);
			break;
		case '5':
			displayAll();
			break;
		case '6':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			deleteActRec(num);
			break;
		 case '7':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			modifyActRec(num);
			break;
		 case '8':
			cout<<"\n\n\tThanks for using bank managemnt system";
			break;
		 default :cout<<"\a";
		}
		//getch(); //to pause the screen until a keystroke is given by the user

    }while(val!='8');

	return 0; 

}

void writeActRec()
{
    BankAccount account1;
    ofstream outFile;
    outFile.open("account.dat", ios::binary|ios::app);
    cout << '\n' << account1.createAccount();
    outFile.write((char *) &account1, sizeof (BankAccount));
    outFile.close();
}

//Fution to read record from file

void displayActRec(int i)
{
    BankAccount account1;
    int flag = 0;
    ifstream inFile;
    inFile.open("account.dat", ios::binary);
    if(!inFile)
    {
        cout << "File could not be opened!! Press any key to troubleshoot...";
        return;
    }

    cout <<"\nBALANCE DETAILS\n";
    while (inFile.read((char *) &account1, sizeof(BankAccount)))
    {
        if (account1.getAccountNo() == i)
        {
            account1.displayAccount();
            flag=1; //Same as boolean, 1 means True
        }
    }
    inFile.close();
    if(flag==0)
    {
        cout << "\n\nAccount number does not exit";
    }
}

void modifyActRec(int i)
{
    BankAccount account1;
    int found = 0;
    fstream File;
    File.open("account.dat", ios::binary|ios::in|ios::out);
    if (!File)
    {
        cout << "File could not be found!! Contact management or create an accout";
        return;
    }
    while(File.read((char *) &account1, sizeof(BankAccount)) && found == 0)
    {
        if(account1.getAccountNo() == i)
        {
            account1.displayAccount();
            cout << "\n\nEnter the new details o your account: " << endl;
            account1.modifyAccount();
            long unsigned int pos =(-1)*sizeof(BankAccount);
            File.seekp(pos, ios::cur);
            File.write((char *) &account1, sizeof(BankAccount));
            cout << "\n\n\t Record Update!";
            found = 1;
        }
    }
    File.close();
    if (found == 0)
        cout <<"\n\n Record Not Found";
}

void deleteActRec(int n)
{
    BankAccount account1;
    ifstream inFile;
    ofstream outFile;
    inFile.open("account.dat", ios::binary);
    if(!inFile)
    {
        cout << "File could not be opened!! Press any key...";
        return;
    }
    outFile.open("Temp.dat", ios::binary);
    inFile.seekg(0, ios::beg);
    while (inFile.read((char *) &account1, sizeof(BankAccount)))
    {
        if (account1.getAccountNo()!=n)
        {
            outFile.write((char *) &account1, sizeof(BankAccount));
        }
    }
    inFile.close();
    outFile.close();
    remove("account.dat");
    rename("Temp.dat", "account.dat");
    cout << "\n\n\tRecord Deleted";
}

void displayAll()
{
    BankAccount account1;
    ifstream inFile;
    inFile.open("account.dat", ios::binary);
    if(!inFile)
    {
        cout<<"File could not be open !! Press any Key...";
		return;
    }
    cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
	cout<<"====================================================\n";
	cout<<"A/c no.      NAME           Type  Balance\n";
	cout<<"====================================================\n";
	while(inFile.read((char *) &account1, sizeof(BankAccount)))
	{
		account1.accountReport();
	}
	inFile.close();
 
}

// Function to deposit and withdraw amounts

void deposit_withdraw(int accno, int options)
{
    float amount;
    int found = 0;
    BankAccount account1;
    fstream File;
    //ios::binary --> translate exactly what was written no \n\t. i.e trolls how newline are handld
    //ios::in --> allows input (read operations) from a stream.
    //ios::out --> allows output (write operations) to a stream.
    File.open("account.dat", ios::binary|ios::in|ios::out);
    if(!File)
    {
        cout << "File could not be opened!! Press any Key...";
        return;
    }
    while(File.read((char *) &account1, sizeof(BankAccount)) && found==0)
    {
        if(account1.getAccountNo() == accno)
        {
            account1.displayAccount();
            if(options == 1)
            {
                cout << "\n\n\tDEPOSITE AMOUNT ";
                cout << "\n\nEnter the amount to be deposited";
                cin >> amount;
                account1.deposit(amount * 1.0);
            }

            if(options == 2)
            {
                cout << "\n\n\tWITHDRAW AMOUNT ";
                cout << "\n\nEner the amount to be withdraw";
                cin >> amount;
                float balance = account1.retAccountBal() - amount;
                if ((balance < 500.0 && account1.retAccountType() == 'S') || \
                        (balance < 1000 &&account1.retAccountType() == 'C'))
                {
                    cout << "Insufficient Balance";
                }
                else
                {
                    account1.withdraw(amount);
                }
            }
            long unsigned int pos = (-1) * sizeof(account1);
            File.seekp(pos, ios::cur);
            File.write((char *) &account1, sizeof(BankAccount));
            cout << "\n\n\t Record Updated";
            found = 1;
        }
    }
    File.close();
    if(found == 0)
    cout << "\n\n Rcord Not Found";
}

//Intro
void introDisplay()
{
    cout << "\n\n\n\t BANK OF ELF";
    cout << "\n\n\t MANAGEMENT SYSTEM";
    //cout << "\n\n\t SYSTEM";
    cout << "\n\n\n\n DEVELOPED BY: ELF BANK";
    //getch();
}