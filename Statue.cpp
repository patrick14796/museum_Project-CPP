/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/
#include "Statue.h"




Statue::Statue(string ExhibitName, string CreatorName, string mainMaterial, int YearCreate, double Weight, double Height, double width,  double statueDepth, double Area_statue) : Exhibit(ExhibitName, CreatorName, YearCreate, Weight, Height, width)
{
	this->mainMaterial = mainMaterial;
	this->statueDepth = statueDepth;        //CTOR and intialize the members of the class
	this->Area_statue = Area_statue;
}

Statue::~Statue() {  //destroyer

}

double Statue::calculateArea()  //calculate the area of Statue
{
	return this->Area_statue = (getLength()*statueDepth)*1.2;

}

double Statue::transferPrice()//calculate the price of transfer Statue
{
	return 100 * (getLength()*getHeight()*statueDepth);
}

string Statue::getMainMaterial()
{
	return this->mainMaterial;  // method return the Main material
}

double Statue::reproduction() 
{
	return 0;          // calculate reproduction cost
}

double  Statue::get_statueDepth() {
	return this->statueDepth;// method return the statue deep
}

void Statue::get_data(ofstream & file)
{
	Exhibit::get_data(file);
	file << this->mainMaterial<<endl;  
	file << this->statueDepth<<endl;
	file << endl;
}

void Statue::set_data(ifstream & file)
{
	Exhibit::set_data(file);
	file >> mainMaterial;
	file >> statueDepth;
}

double Statue::wallArea()
{                             // calculate the wall area of the statue (zero)
	return 0;
}

double Statue::floorArea()
{
	return this->Area_statue = (getLength()*statueDepth)*1.2;   // calculate the floor area of the statue
}



ofstream & operator<<(ofstream & out, Statue & object)
{
	out << object.mainMaterial;
	out << object.statueDepth;                 
	return out;
}
