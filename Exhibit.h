/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/

#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>
using namespace std;

class Exhibit
{
protected:

	string exhibitName, creatorName;//name of exhibit,name of the exhibit creator
	double length, height, weight;//size of exihbit
	int Year;

public:
	Exhibit(string exhibitName= "\0", string creatorName= "\0", int Year = 0, double weight = 0, double Height = 0, double length = 0);//default constructor
	virtual ~Exhibit()=0;//destroyer
	virtual double calculateArea() = 0;//calculate the area of any exhibit
	virtual double transferPrice() = 0;//calculate the price of any transfer exhibit
	virtual double reproduction() = 0; // calculate the pricr of reproduction this exhibit
	virtual double wallArea() = 0; // calculate the wall-area that have the exhibit
	virtual double floorArea() = 0;  // calculate the floor area of the exhibit
	double getLength() const { return this->length; }//return length  
	double getHeight() const { return this->height; } //return height
	double getWeight() const { return this->weight; } //return weight
	int getYear() const { return this->Year; } // return Year creation of the exhibit
	string getExhibitName();//return exhibit name
	string getCreatorName();//return creator name
	virtual void get_data(ofstream& file); // get the data from the file 
	virtual void set_data(ifstream& file);  // set a data to the file
	friend ofstream& operator<<(ofstream& out, Exhibit& object); // operator that print the out from the object
};
