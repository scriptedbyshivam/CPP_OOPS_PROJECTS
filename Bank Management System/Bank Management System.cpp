#include<iostream>
using namespace std;


class CreateAccount {
	private:
		string name;
		int accNo;
		int password;
		double balance;

		
		
	public:
		// void setInfo(string name, int accNo,int password, double depositeAmount)
		int setInfo(){
			cout<<endl;
			cout<<"Enter the Name : ";
			cin>>name;
			// cout<<endl;


			cout<<"Enter the Account Number : ";
			cin>>accNo;
			// cout<<endl;

			cout<<"Enter Your Account Password : ";
			cin>>password;
			// cout<<endl;

			cout<<"Enter the Amount : ";
			cin>>balance;
			// cout<<endl;
			
			
			int q=3;
			int attempt =0;

			do{
				if(balance<500){
				cout<<"Please, Deposit at least 500 rupees for Creating Your Account"<<endl;
				
				// balance+=balance;

				attempt++;

				if(attempt<q && balance<500){
				cout<<"Enter the Amount Again : ";
				cin>>balance;
				cout<<endl;
				
			}
			else{
				cout<<"Too  Many attempts...\n Your Account Not Created..."<<endl;
				cout<<endl;
			}
				
			}
			else{
			cout<<"\n\t     Congratulation!"<<endl;
			cout<<"<------Your Account Created SuccessFully--------->\n\n\n\n"<<endl;
			break;
			
			}

			

			
		}while(attempt<q);
		return 0;
		
		}


		void menu(){
			do{
				int c;
				cout<<"Welcome To The Main Menu";
				cout<<"....Choose Number.... "<<endl;
				
				cin >>c;

				switch (c)
				{
				case 1:
					/* code */
					break;
				
				default:
					break;
				}

			}while(1);

		}


		void getInfo(){
			cout<<"User_Name : "<<name<<endl;
			cout<<"User_Account_Number : "<<accNo<<endl;
			cout<<"User_Balance : "<<balance<<endl;
			cout<<"\n\n\n\n";
			// cout<<password<<endl;
		}

		int getAccInfo(){
			return accNo;
			
		}
		int getPassInfo(){
			return password;
		}
		double getBalance(){
			return balance;
		}
		
		void updateBalance(double newBalance){
        balance = newBalance;
    }
	
};



class Login{
	public:

	int acc;
	int pass;

	bool getInfo(CreateAccount &check){
		cout<<"Enter Your Correct Account Number : ";
		cin>>acc;
		cout<<endl;

		cout<<"Enter Your Correct Password ";
		cin>>pass;
		cout<<endl;

		if(acc==check.getAccInfo() &&pass == check.getPassInfo() ){
			cout<<"YOUR ACCOUNT NO. AND PASSWORD IS CORRECT"<<endl;
			cout<<endl;
			return true;
			
		}
		else{
			cout<<"YOUR ACCOUNT NO. AND PASSWORD IS NOT CORRECT"<<endl;
			return false;
			cout<<endl;
		}

	}
	

};

class Deposit{
	public:
	double depo;
	void inputCash(CreateAccount& ba){
		cout<<"Enter the Amount To deposit your Money :";
		cin>>depo;
		double newBal = ba.getBalance() + depo;
		ba.updateBalance(newBal);
		// here I am using Balance In protected So by this I can Use the Balance In derived class. In Private I can be Used Balance into Derived Class.
		cout<<endl;
		cout<<"To Show Balance Go To Menu, Then Choose Check Balance"<<endl;
	}

	double getDeposit(){
		return depo;
	}

};


class WithDraw{
public:
void cash(CreateAccount& wd){
	double amt;
	cout<<"Enter the WithDraw Amount : ";
	cin>>amt;
	
	if(amt > wd.getBalance()){
        cout<<"Insufficient Balance!\n";
    }
	else{
        double newBal = wd.getBalance() - amt;
        wd.updateBalance(newBal);
        cout<<"Withdraw Successful!\n";
     }
	
	

} 
};


class Balance {
	public:
	void bal(CreateAccount& ac){
    cout<<"Here Is Your Total Balance : "<<ac.getBalance()<<endl;
}
};







int main(){

	CreateAccount a;
	Login log;
	Deposit d;
	Balance bb;
	WithDraw cc;
	
	
	bool isLogin = false;

	// log.getInfo(a);
	
	// a.setInfo("Shivam",1);
	// a.getInfo();

	cout<<"<-----------------THIS IS A BANK MANAGEMENT SYSTEM PROGRAM---------------------->"<<endl;
	cout<<endl;

	cout<<"<_______________________WELCOME TO COADING BANk______________________>"<<endl;	
	cout<<endl;

	int b;

    do{
        cout<<"----------MAIN_MENU-----------\n"<<endl;
	
		cout<<"1. Create Account"<<endl;
		cout<<"2. Login"<<endl;
		cout<<"3. Display Account Details"<<endl;
		cout<<"4. Deposit Money"<<endl;
		cout<<"5. WithDraw Money"<<endl;
		cout<<"6. Check Balance"<<endl;
		cout<<"7. Logout"<<endl;
		cout<<"8. Exit\n\n"<<endl;
		
		

		cout<<"...Choose the Number..."<<endl;
		cin>>b;


		switch (b)
		{
		case 1:a.setInfo();

			/* code */
			break;

		case 2: isLogin=log.getInfo(a);
		break;

		case 3:if(isLogin) {
			a.getInfo();
		}
		else {
		cout<<"Please Login First!\n";	
		}
		break;
		

		case 4:if(isLogin){
			d.inputCash(a);
		} 
		else {
			cout<<"Please Login First!"<<endl;
		}
		break;

		case 5:if(isLogin){
			cc.cash(a);
		} 
		else{
			cout<<"Please Login First!"<<endl;
		}
		break;

		case 6:if(isLogin){
			 bb.bal(a);
		}else {
			cout<<"Please Login First!"<<endl;
		}
		break;// break lagana mat bulna warna program end after the 6 option execute.
		
		case 7:isLogin = false;
		cout<<"Logged Out!"<<endl;
		break;
		
		case 8: 
		cout<<"THANK YOU FOR VISITING....";
		return 0;
	

		
		default:cout<<"Please, Enter the Valid Detail"<<endl;
		
		}
       
    }while(1);
}
