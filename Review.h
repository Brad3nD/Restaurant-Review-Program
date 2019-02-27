#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

class Review
{
public:
	Review();
	~Review();

	//Methods//
	void setRestraunt(string place);
	string getRestraunt();
	void setReviewer(string person);
	string getReviewer();
	void setDate(string time);
	string getDate();
	void setFood(int val1);
	int getFood();
	void setService(int val2);
	int getService();
	void setValue(int val3);
	int getValue();
	void setAtmo(int val4);
	int getAtmo();
	void printStats();
	float calcAvg();
	void setComment(string words);
	string getComment();

private:
	string restraunt;
	string reviewer;
	string date;
	string comment;
	int food;
	int service;
	int value;
	int atmosphere;
};