#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>
using namespace std;

class PhoneBook
{
private:
	string Name;
	string PhoneNo;
	string Address;

public:
	PhoneBook() : Name(""), PhoneNo(""), Address("") {}

	void setName(string n)
	{
		Name = n;
	}

	void setPhNo(string ph)
	{
		PhoneNo = ph;
	}

	void setAddress(string add)
	{
		Address = add;
	}

	string getName()
	{
		return Name;
	}

	string getPhNo()
	{
		return PhoneNo;
	}

	string getAddress()
	{
		return Address;
	}
};

void addNo(PhoneBook ph) // Function ke andar PhoneBook ka naya object (copy) ban raha h
{
	system("cls");
	string name, phNo, address;
	cout << "\tEnter The Name Of The User ";
	cin >> name;
	ph.setName(name);

	cout << "\tEnter the Phone Number Of the User ";
	cin >> phNo;
	ph.setPhNo(phNo);

	cout << "\tEnter The Address Of The User ";
	cin >> address;
	ph.setAddress(address);

	ofstream outfile("C:/Users/Anjali Maurya/Desktop/MY PROJECT/CPP_OOPS_PROJECTS/Phone Book Management System/PhoneBook.txt", ios::app);

	/*ios::app
	Matlab append mode
	Naya data purane data ke niche add hoga
	Purana data delete nahi hoga
	Aur agar yeh use na kare toh pehli wali value change ho jayegi nayi wali value se
	purana wala data naye wale data se replace ho jayega.
	*/

	if (!outfile)
	{
		cout << "Error : File Is Not Open To Write A Data" << endl;
	}
	else
	{
		outfile << "\t" << ph.getName() << " : " << ph.getPhNo() << " : " << ph.getAddress() << endl
				<< endl;
	}
	outfile.close();
	cout << "\tPhone Number added successfully to Your File!" << endl;

	Sleep(3000);
}

void searchNo()
{
	system("cls");
	string name;
	cout << "\tEnter the Name Of User : ";
	cin >> name;

	ifstream infile("C:/Users/Anjali Maurya/Desktop/MY PROJECT/CPP_OOPS_PROJECTS/Phone Book Management System/PhoneBook.txt");
	if (!infile)
	{
		cout << "Error : Flie Is Not Open to Read Data" << endl;
	}
	else
	{
		string line;
		bool found = false;
		while (getline(infile, line))
		{
			stringstream ss;
			ss << line;

			string userName, userPhNo, userAddress;
			char ch; /* ya ch ek separator hai jo data ke different parts ko alag-alag karta hai.

			 jo humne file mai ':' use kiya yeh usse temporary store karta hai taki hum string stream mai
			  sare data systematically store kar paye.

			 agar yeh ch na ho toh
			 userName  = "xyz"
			 userPhNo  = ":"   //  galat
			 userAddress = "9876543210"  //  galat

			 */

			ss >> userName >> ch >> userPhNo >> ch >> userAddress;

			if (name == userName)
			{
				found = true;

				cout << "\t" << userName << "\t" << userPhNo << "\t" << userAddress << endl;
			}
		}
		if (!found)
		{
			cout << "\tUser Not Found In Phone Book!" << endl;
		}
	}
	infile.close();
	Sleep(5000);
}

int main()
{
	PhoneBook pb;

	bool exit = false;
	while (!exit)
	{
		system("cls"); // ye line program ke output screen ko clear (saaf) kar deta hai.
		// basically ye windows Ke Operating System Mai Use hota hai. aur Humane same Concept ise Idar use kiya Hai

		int val;
		cout << "--------------------------------------------------------------" << endl;
		cout << "\tWelcome to The Phone Book Mangement System" << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << "\t1.Add Number." << endl;
		cout << "\t2.Search Number." << endl;
		cout << "\t3.Exit." << endl;
		cout << "\tEnter Your Choice : " << endl;
		cin >> val;

		if (val == 1)
		{
			addNo(pb); // function call kar ho raha aur pb object ko arugument ke roop mai function ke pass bhej raha hai.
		}

		else if (val == 2)
		{
			searchNo();
		}

		else if (val == 3)
		{
			system("cls");
			exit = true;
			cout << "Exit Successfully";
			Sleep(3000);
		}
	}
}
