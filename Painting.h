/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/
#pragma once
#include "Exhibit.h"


class Painting :virtual public Exhibit  // the class inherit from Exhibit in public
{
protected:
	string paintStyle;//paint style name
	

public:
	~Painting();//destroyer
	Painting(string ExhibitName = "\0", string CreatorName = "\0", string paintStyle = "\0", int YearCreate = 0, double weight = 0, double Height = 0, double width = 0);//constructor
	virtual double calculateArea();//calculate the area of Painting
	virtual double transferPrice();//calculate the price of transfer Painting
    virtual double reproduction(); // method calculate price of reproduction
	string getPaintStyle();//return paint style name
	virtual void get_data(ofstream& file);// method get data from file
	virtual void set_data(ifstream& file);// method that set a new data to the file
	friend ofstream& operator<<(ofstream& out, Painting& object); // operator print out
	virtual double wallArea(); // method that calculate the wall area of the painting
	virtual double floorArea();// method that calculate the floor area of the painting
};