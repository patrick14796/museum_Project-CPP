/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/
#include "Standing.h"




Standing::Standing(string ExhibitName, string CreatorName, int YearCreate, double weight, double Height, double width, string paintStyle1) : Exhibit( ExhibitName, CreatorName, YearCreate, weight, Height, width) //constructor
{
	this->paintStyle = paintStyle1;    // CTOR and intialize paintstyle
}

Standing :: ~Standing()//destroyer
{
}

double Standing::calculateArea()//calculate the area of Standing
{
	return (getHeight()*getLength()) / 2;//return calculate the area of Standing
}


double Standing::transferPrice()//calculate the price of transfer Standing
{
	return 100 * getHeight()*getLength();//return calculate the price of transfer Standing
}

double Standing::reproduction() {

	return 1000 * getHeight()*getLength();	 // calculate repruduction and return the cost price
}

string Standing::get_paintStyle() {

	return this->paintStyle;   // method return the paintstyle
}

void Standing::get_data(ofstream & file)
{
	Exhibit::get_data(file);              // method that get the data from the file
	file << this->paintStyle << endl;
	file << endl;
}

void Standing::set_data(ifstream & file)
{
	Exhibit::set_data(file);              // set data from the data members to the file
	file >> this->paintStyle;

}

double Standing::wallArea()
{
	return 0;   // calculat wall area of standing painting (zero)
}

double Standing::floorArea()
{
	return (getHeight()*getLength()) / 2;  // return the floor area of the standing painting
}


ofstream & operator<<(ofstream & out, Standing & object)
{
	out << object.paintStyle;     
	return out;
}
