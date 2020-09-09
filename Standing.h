/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/
#pragma once
#include "Painting.h"


class Standing : public Painting { // class Standing that inherit from painting in public 
protected:
	string paintStyle;//paint style name
public:
	Standing(string ExhibitName="\0" , string CreatorName = "\0", int YearCreate = 0, double weight = 0, double Height = 0, double width = 0, string paintStyle = "\0");//constructor
	~Standing();//destroyer
     double calculateArea();//calculate the area of Standing
     double transferPrice();//calculate the price of transfer Standing
	 double reproduction(); // calc the cost of reproduction 
	 string get_paintStyle(); // return the paintstyle
	 virtual void get_data(ofstream& file); // get data from file
	 virtual void set_data(ifstream& file); // set a new data to file
	 friend ofstream& operator<<(ofstream& out, Standing& object); // operator
	 virtual double wallArea(); // calculate the wall area of the standing painting
	 virtual double floorArea(); // calculate the floor area of the standing painting
};