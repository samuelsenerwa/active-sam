#include<iostream>
#include<iomanip>
#include<time.h>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<process.h>
#include<dos.h>

using namespace std;

// this project focuses in creating an ATM transaction list

	
	double startBalance;
	double accountBalance;
	double limit;
	string accountHolders;


class ATMAccountHolders{
	//private:
	string accountHoldersAddress, branch;
	int accountNumber;
	double accountInterest;
	double startBalance;
	double amount;
	
	public:
		void interest();
		void payBills();
		void details();
		void accountExit();
		void deposit();
		void withdraw();
		
ATMAccountHolders(){
	 accountNumber = 12345678;
	 accountHolders = "Samuel Senerwa";
	 startBalance = 600000.0;
	 accountHoldersAddress = "MASINDE MULIRO UNIVERSITY";
	accountBalance = 20000.0;
	 branch = "Kakamega, 50100";
}
	
};

void ATMAccountHolders::interest(){
	system ("cls");
	cout<<"===========WELCOME TO SAMBANK LTD========="<<endl;
	cout<<"*****ATM ACCOUUNT INTEREST******"<<endl;
	cout<<"\t The interest claculated over the past 6 months at the rate of 10% p.a\n";
	cout<<"To view the interest please press 1 for YES and press 2 for NO\n\n";
	
	cout<<"\n *******ATM ACCOUNT INTEREST************\n\n";
	cout<<"\n\n Name of the Account Holder is: "<< accountHolders<<"\n\n";
	cout<<"\t Address: "<< accountHoldersAddress<<"\n\n";
	cout<<"\t branch: "<< branch<<"\n\n";
	cout<<"\t account Number: "<<accountNumber<<"\n\n";
	cout<<"********************************************\n\n";
	
	cout<<"Start Balance: KSH "<<startBalance<<"\n\n";
	cout<<"\t Available amount: KSH "<< accountBalance<<"\n\n";
		double accountInterest = accountBalance + (accountBalance * 1.050);
		cout<<"Press any Key to return to Main Menu\n\n";
		system("PAUSE");
	
	
}

void ATMAccountHolders::deposit(){
	system("cls");
	cout<<"=================ATM ACCOUNT DEPOSIT==================\n\n";
	cout<<"\n\n Name of the Account Holder is: "<< accountHolders<<"\n\n";
	cout<<"\t Address: "<< accountHoldersAddress<<"\n\n";
	cout<<"\t branch: "<< branch<<"\n\n";
	cout<<"\t account Number: "<<accountNumber<<"\n\n";
	cout<<"**************************************************\n\n";
	
	cout<<"Start Balance: KSH "<<startBalance<<"\n\n";
	cout<<"\t Available amount: KSH "<<accountBalance<<"\n\n";
	cout<<"Please enter the amount to be deposited\n\n";
	double amount;
	cin>>amount;
	long int accountBalance = startBalance + amount;
	cout<<"\n\t Your new available balance: KSH. "<< accountBalance<<"\n\n";
	cout<<"******THANK YOU*******\n\n";
	cout<<"Press any key to return to Main Menu\n\n";
	system("PAUSE");
}

void ATMAccountHolders::withdraw(){
	system("cls");
	cout<<"**************ATM ACCOUNT WITHDRAWAL*********\n\n";
	cout<<"\n\n Name of the Account Holder is: "<< accountHolders<<"\n\n";
	cout<<"\t Address: "<< accountHoldersAddress<<"\n\n";
	cout<<"\t branch: "<< branch<<"\n\n";
	cout<<"\t account Number: "<<accountNumber<<"\n\n";
	cout<<"**************************************************\n\n";
	
	cout<<"Start Balance: KSH "<<startBalance<<"\n\n";
	cout<<"\t Available amount: KSH "<<accountBalance<<"\n\n";
	
	cout<<"Please enter the amount to withdraw\n\n";
	double amount;
	cin>> amount;
	if(amount > accountBalance || amount > 9000){
		system("cls");
		cout<<"**************ATM ACCOUNT WITHDRAWAL*********\n\n";
	cout<<"\n\n Name of the Account Holder is: "<< accountHolders<<"\n\n";
	cout<<"\t Address: "<< accountHoldersAddress<<"\n\n";
	cout<<"\t branch: "<< branch<<"\n\n";
	cout<<"\t account Number: "<<accountNumber<<"\n\n";
	cout<<"**************************************************\n\n";
	
	cout<<"\n\t Insufficient account Balance please try again later\n\n";
	cout<<"\t\t Sorry!\n\n";
	system("PAUSE");
	}
	else {
		system("cls");
		cout<<"**************ATM ACCOUNT WITHDRAWAL*********\n\n";
	cout<<"\n\n Name of the Account Holder is: "<< accountHolders<<"\n\n";
	cout<<"\t Address: "<< accountHoldersAddress<<"\n\n";
	cout<<"\t branch: "<< branch<<"\n\n";
	cout<<"\t account Number: "<<accountNumber<<"\n\n";
	cout<<"**************************************************\n\n";
	
	cout<<"Your new ATM account balance is KSH. "<<accountBalance<<"\n\n";
	cout<<"\n\n\t Press Any key to return to MainMenu\n\n";
	system("PAUSE");
	}	
}

void ATMAccountHolders::payBills(){
	system("cls");
	cout<<"**************ATM BILLS PAYMENTS*********\n\n";
	cout<<"\n\n Name of the Account Holder is: "<< accountHolders<<"\n\n";
	cout<<"\t Address: "<< accountHoldersAddress<<"\n\n";
	cout<<"\t branch: "<< branch<<"\n\n";
	cout<<"\t account Number: "<<accountNumber<<"\n\n";
	cout<<"**************************************************\n\n";
	
	cout<<"Pay KPLC electric Bill?\n\n";
	double bill;
	cout <<"Enter the due bill\n\n";
	cin>>bill;
	cout<<"\t\t Press 1 to proceed and 2 to Exit\n\n";
	int r;
	cin>>r;
	if(r==1){
		accountBalance = startBalance - bill;
		system ("cls");
		cout<<"**************ATM BILLS PAYMENTS*********\n\n";
		cout<<"Bill paid sucessfully\n\n";
		cout<<"\n\t Account Balance KSH."<< accountBalance<<"\n\n";
		cout<<"********************************************************\n\n";
		cout<<"Press any key to return to MainMenu\n\n";
	}
	if (r==0){
		cout<<"**************ATM BILLS PAYMENTS*********\n\n";
	cout<<"\n\n Exiting Bill Payment system. Thank You \n\n";
	cout<<"=================================THANK YOU ==========================\n\n";
	}
		system("PAUSE");
}

void ATMAccountHolders::details(){
	cout<<"**************ATM BILLS DETAILS*********\n\n";
	cout<<"\n\n Name of the Account Holder is: "<< accountHolders<<"\n\n";
	cout<<"\t Address: "<< accountHoldersAddress<<"\n\n";
	cout<<"\t branch: "<< branch<<"\n\n";
	cout<<"\t account Number: "<<accountNumber<<"\n\n";
	cout<<"**************************************************\n\n";
	cout<<"Press any key to return to the MainMenu\n\n";
	system("PAUSE");
}

void ATMAccountHolders::accountExit(){
	system("cls");
	cout<<"\n ===========================ATM ACCOUNT EXIT==================\n\n";
	cout<<"\n\n\t **********SAMSEN PRO*****************\n\n";
	cout<<"************************************************\n\n";
	system("PAUSE");
	exit(1);
	class Limit{
		public: 
		void setLimit(double NewLimit){
			//blank
		}
		double getLimit(){
			//blank
		}
	};
}

int main (){
	int p;
	ATMAccountHolders b;
	system("color 5f");
	cout<<"******************************************WELCOME TO ATM**************************\n\n";
	cout<<"\t\t\t -------------------------------------\n"<<endl;
	time_t t;
	time(&t);
	cout<<"\t\t current date: "<<""<< __TIME__<<" "<< __DATE__<<endl;
	cout<<"\t\t\t---------------------------------------\n"<<endl;
	cout<<"\n********************************************\n\n";
	cout<<"\t press 1 Then press enter to access your account via Pin Number\n\n";
	cout<<"\t\t\t\t\t or \n\n";
	cout<<"\t Press 0 and press Enter to get help.\n\n";
	
	int access;
	cin>>access;
	switch(access){
		case 1:
			//use pin to access the account
			system ("cls");
			int i, pin;
			cout<<"\n *******************************ATM ACCOUNT ACCESS**********************\n\n";
			cout<<"\n\n Enter Your Account Pin Access Number ! [your pin: 1234 only one attempt allowed]\n\n"<<endl;
			cout<<"\n**************************************************\n\n";
			cin>>pin;
			system("clsr");
			if(pin == 1234){
				system("cls");
				do
				{
					system("cls");
					cout<<"\n **********************ATM MAIN MENU SCREEN*******************\n\n"<<endl;
					cout<<"\t\t Enter [1] To Deposit Cash\n\n";
					cout<<"\t\t Enter [2] To Withdraw Cash\n\n";
					cout<<"\t\t Enter [3] To PayBill \n\n";
					cout<<"\t\t Enter [4] For Balance Enquiry\n\n";
					cout<<"\t\t Enter [5]  Pay Account Interest\n\n";
					cout<<"\t Please Enter a selection and press return key to Main Menu\n\n";
					cout<<"******************************************\n\n";
				//	int b;
					cin>>p;
					switch (p){
						case 1: 
						b.deposit();
						break;
						
						case 2:
							b.withdraw();
							break;
							case 3:
								b.details();
								break;
								case 4:
									b.payBills();
									break;
									case 5:
										b.interest();
										break;
										case 0:
											b.accountExit();
											break;
										default: cout<<"Please enter the correct Number choice"<<endl;
					}
				}
					while (p!= 0);
					break;
			//	break;
			}
			
			else
			{
		system("cls");
		cout<<"\n****************************THANK YOU*************************\n\n";
		cout<<"\n You had made your attempt which failed !!! No more attempts allowed!! Sorry !!\n\n";
		cout<<"***********************************************\n\n";
		system("PAUSE");
		exit(1);
				}
				
	case 0: // pin to access account
	system("cls");
	cout<<"\t You must have the correct pin number to access this account.\n\n";
	cout<<"\t See Customer care for assistance\n\n";
	cout<<"\t\t THANK YOU\n\n";
	system("PAUSE");
	exit(1);
	break;
}
system ("PAUSE");
return 0;
}




