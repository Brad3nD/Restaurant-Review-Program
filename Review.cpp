#include "Review.h";

Review::Review()
{
	restraunt = "";
	reviewer = "";
	date = "";
	food = 0;
	service = 0;
	value = 0;
	atmosphere = 0;
}

Review::~Review()
{

}

void Review::setRestraunt(string name)
{
	//cout << "setRestraunt method\n";
	restraunt = name;
}

void Review::setReviewer(string person)
{
	//cout << "setReviwer method\n";
	reviewer = person;
}

void Review::setDate(string time)
{
	//cout << "setDate method\n";
	date = time;
}

void Review::setFood(int val1)
{
	//cout << "setFood method\n";
	food = val1;
}

void Review::setService(int val2)
{
	//cout << "setService method\n";
	service = val2;
}

void Review::setValue(int val3)
{
	//cout << "setValue method\n";
	value = val3;
}

void Review::setAtmo(int val4)
{
	//cout << "setAtmo method\n";
	atmosphere = val4;
}

string Review::getRestraunt()
{
	//cout << "getRestraunt method\n";
	return restraunt;
}

string Review::getReviewer()
{
	//cout << "getReviewer method\n";
	return reviewer;
}

string Review::getDate()
{
	//cout << "getDate method\n";
	return date;
}

int Review::getFood()
{
	//cout << "getFood method\n";
	return food;
}

int Review::getService()
{
	//cout << "getService method\n";
	return service;
}

int Review::getValue()
{
	//cout << "getValue method\n";
	return value;
}

int Review::getAtmo()
{
	//cout << "getAtmo method\n";
	return atmosphere;
}

float Review::calcAvg()
{
	float avg = 0.0;
	avg = (getFood() + getAtmo() + getValue() + getService()) / 4.0;
	return avg;
}

void Review::printStats()
{
	cout << "\n";
	cout << "Name of Restaurant: " << restraunt << endl;
	cout << "Name of Reviewer: " << reviewer << endl;
	cout << "Date: " << date << endl;
	cout << "Food Rating: " << food << endl;
	cout << "Atmosphere Rating: " << atmosphere << endl;
	cout << "Service Rating: " << service << endl;
	cout << "Value Rating: " << value << endl;
	cout << "Average Rating: " << calcAvg() << endl;
	cout << "Additional Comments: \n" << getComment() << endl;
}

void Review::setComment(string words)
{
	comment = words;
}
string Review::getComment()
{
	return comment;
}
