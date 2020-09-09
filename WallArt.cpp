/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/
#include "WallArt.h"


WallArt::WallArt(string ExhibitName, string CreatorName , int YearCreate , double weight , double Height , double width , double Area_wall , double Area_floor, double statueDepth1): Exhibit(ExhibitName ,CreatorName ,YearCreate, weight, Height ,width)
{
	this->Area_wall = Area_wall;
	this->Area_floor = Area_floor;  //CTOR , intialize members (recive data from the CTOR) 
	this->deep = statueDepth1;
}

WallArt::~WallArt() { //destroyer

}

double WallArt::get_Area_wall() {
	return this->Area_wall=(0.5 +Painting::getLength());  // return the area of the wallart
}

double WallArt::get_Area_floor() {
	return this->Area_floor= ((Statue::getLength()*statueDepth)*1.2);  // return floor area of the wallart
}

double WallArt::calculateArea() {

	return 0;            
}

double WallArt::transferPrice() {

	return 100 * (Statue::getLength()*Statue::getHeight()*statueDepth);  // calculate the transfer price and return the price
}

double WallArt::reproduction() {

	return 0;   // calc reproduction
}

void WallArt::get_data(ofstream & file)
{
	Exhibit::get_data(file);
		file << deep<<endl;     // get the data of the variable from the file
		file << endl;
}

void WallArt::set_data(ifstream & file)
{
	Exhibit::set_data(file);          // set data to the file
	file >> deep;
}

double WallArt::wallArea()
{
	return this->Area_wall = (0.5 + getLength()); // method return the wall area
}

double WallArt::floorArea()
{
	return this->Area_floor = ((getLength()*deep)*1.2);  // method return area floor
}



ofstream & operator<<(ofstream & out, WallArt & object)
{
	out << object.deep;
	return out;
}
