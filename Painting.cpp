/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/
#include "Painting.h"


Painting::Painting(string ExhibitName, string CreatorName, string paintStyle, int YearCreate, double Weight, double Height, double width) : Exhibit(ExhibitName, CreatorName, YearCreate, Weight, Height, width)  //default constructor
{
	this->paintStyle = paintStyle; // CTOR and intialize this paintstyle of the painting is what we recive in the CTOR
}

Painting :: ~Painting()//destroyer
{
}

double Painting::calculateArea()//calculate the area of Painting
{
	return 0.5 + getLength();//return calculate area of Painting
}

double Painting::transferPrice()//calculate the price of transfer Painting
{
	return 100 * getHeight()*getLength();//return calculate price of transfer Painting
}

double Painting::reproduction() {
	                                   // method calculate the reproduction cost
	return 1000 * getHeight()*getLength();
}

string Painting::getPaintStyle() {

	return paintStyle;//return paint style name
}

void Painting::get_data(ofstream & file)
{
	Exhibit::get_data(file);
	file <<this->paintStyle<<endl;     // get the data fron the file
	file << endl;
}

void Painting::set_data(ifstream & file)
{
	Exhibit::set_data(file);     // set a new data to the file 
	file >> this->paintStyle;
	
}

double Painting::wallArea()
{
	return 0.5 + getLength();  // calculate and return the wall area of the painting
}

double Painting::floorArea()
{
	return 0; // calculate and return the floor area of the painting (is zero)
}

ofstream & operator<<(ofstream & out, Painting & object)
{
	out << object.paintStyle;    // operator print out implement 
	return out;
}
