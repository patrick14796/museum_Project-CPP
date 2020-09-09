/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/
#pragma once
#include "Exhibit.h"


class Statue :virtual public Exhibit {   // calss Statue inherit from exhibit in virtual public

protected:
	string mainMaterial;//main material name
	double statueDepth;//statue depth vaule
	double Area_statue;

public:
	Statue(string ExhibitName="\0", string CreatorName="\0", string mainMaterial= "\0", int YearCreate = 0, double weight = 0, double Height = 0, double width = 0, double statueDepth = 0, double Area_statue = 0);// constructor
	~Statue();//destroyer
	virtual double calculateArea();//calculate the area of Statue
	virtual double transferPrice();//calculate the price of transfer Statue
	double reproduction(); // calculate reproduction cost
	string getMainMaterial();//set new main material name
	double get_statueDepth(); // get the statue deep
	virtual void get_data(ofstream& file); // get data from the file
	virtual void set_data(ifstream& file);  // set new data to the file
	friend ofstream& operator<<(ofstream& out,Statue& object); // operator
	virtual double wallArea(); // calc the wall area of the statue 
	virtual double floorArea(); // calculate the floor are of the statue
};