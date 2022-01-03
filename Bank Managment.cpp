
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

class Bank {
	string name, address;
	char acc_type;
	float balance;

public:
	void open_account();
	void deposit_money();
	void withdraw_money();
	void display_account();
};

// Function to open the account
void Bank::open_account()
{
	           
	cout << "Enter your full name: \n" ;
	        cin.ignore();
	         getline(cin,name); 
	cout << "Enter your address: " ;
	           getline(cin,address);
	cout << "What type of account you want"<< " to open saving(S) or Current(C): ";
	         cin>>acc_type;
	cout << "Enter How much money you want to deposit: " ;
               cin>>balance;   
	cout << "Account Created Successfully";
}

// Function to deposit the account
void Bank::deposit_money()
{
	int Amount;
	
	cout << "Enter how much money"<< " you want to deposit: "<< Amount << endl;
            cin>>Amount;
	balance += Amount;
	cout << "\n Available Balance: " << balance;
}

// Function to display the account
void Bank::display_account()
{
	cout << "Name: " << name << endl
		<< "Address: " << address << endl
		<< "Type: " << acc_type << endl
		<< "Balance: " << balance << endl
		<< endl;
}

// Function to withdraw the account
void Bank::withdraw_money()
{
	float amount;
	
	cout << "Enter how much money "<< "you want to withdraw: "<< amount << endl;
             cin>>amount;
	balance -= amount;
	cout << "\n Available balance: "
		<< balance;
}

// Main function

int main()
{
	int choice;

	Bank obj;
  while(choice!=5) {
  	
  	
  	cout<<"1)Open Account \n";
   	 cout<<"2)deposite Money \n";
   	 cout<<"3)witdraw Money \n";
   	 cout<<"4)display Account \n";
   	 cout<<"5)Exit \n";
   	 cout<<"Select the option form above \n";
   	 cin>>choice;
   	 switch(choice)
   	 {
   	 	case 1:
   	 		cout << "\n1) Open account \n\n";
	       obj.open_account();
        
	    cout << "\n------------------------"
		<< "-------------------------\n";
		break;
		
		case 2:
			cout << "\n2) Deposit account \n\n";
	         obj.deposit_money();
	        cout << "\n------------------------"
		    << "-------------------------\n";
			
		   break;
		   case 3:
		   	cout << "\n2) Withdraw money \n\n";
	         obj.withdraw_money();
	      cout << "\n------------------------"
		<< "-------------------------\n";
         break;
         case 4:
         	cout << "\n4) Display Account \n\n";
	        obj.display_account();
	        cout << "\n------------------------"
		<< "-------------------------\n";
		break;
		case 5:
			if(choice==5)
			{
				exit(0);
			}
			
		
		default:
		   cout<<"This is not  Exist try again\n";		
		}
  

	}
	return 0;
	

}

