//Author:  Braden Dressendorfer ||
//Project: Project 1            ||     

#include "Review.h";

int main()
{
	Review reviewlist[100];
	string str = "";
	string str1 = "";
	string restraunt = "";
	string reviewer = "";
	string date = "";
	string words = "";
	int food = 0;
	int value = 0;
	int atmo = 0;
	int serv = 0;
	int restCount = 0;
	int quitVal = 1;

	cout << "Welcome to Braden's Review List!!!\n";
	Review r1;
	Review temp;
	
	while (quitVal != 0) {
		str = "";
		str1 = "";
		cout << "Please enter a command (insert, print, quit): ";
		cin >> str;
		cin.ignore();

		if (str == "print")
		{
			cout << "Enter the restaurant name: ";
			getline(cin, str1);
			bool printed = false;

			for (int i = 0; i <= restCount; i++)
			{
				if (str1 == reviewlist[i].getRestraunt())
				{
					reviewlist[i].printStats();
					cout << "\n";
					printed = true;
				}
				
				if (i == restCount && printed == false)
				{
					cout << "Restauraunt Name not found! Try Again!" << endl;
				}

			}
		}
		else if (str == "insert")
		{
			cout << "Enter the restauraunt's name: ";
			getline(cin, restraunt);
			cout << "Enter your name: ";
			getline(cin, reviewer);
			cout << "Enter the date: ";
			getline(cin, date);
			cout << "On a scale from 1-5 how was the Food: ";
			cin >> food;
			cout << "On a scale from 1-5 how was the Atmosphere: ";
			cin >> atmo;
			cout << "On a scale from 1-5 how was the Service: ";
			cin >> serv;
			cout << "On a scale from 1-5 how was the Value: ";
			cin >> value;
			cin.ignore();
			cout << "Enter any additional comments: ";
			getline(cin, words);

			temp.setRestraunt(restraunt);
			temp.setReviewer(reviewer);
			temp.setDate(date);
			temp.setFood(food);
			temp.setAtmo(atmo);
			temp.setService(serv);
			temp.setValue(value);
			temp.setComment(words);
			reviewlist[restCount] = temp;
			restCount++;
		}

		else if (str == "quit")
		{
			cout << "Thanks for using Braden's Review! Come Again!" << endl;
			quitVal = 0;
		}
	}
	return 0;
}