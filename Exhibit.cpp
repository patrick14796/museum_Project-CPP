/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/
#include "Exhibit.h"

Exhibit::Exhibit(string exhibitName , string creatorName, int Year , double weight , double Height , double length) {
	this->exhibitName = exhibitName;
	this->creatorName = creatorName;
	this->Year = Year;
	this->weight = weight;       // default CTOR and a normal CTOR and Initializing the private members
	this->height = Height;
	this->length = length;
 }

Exhibit::~Exhibit() {
}                       // DTOR 

string Exhibit::getExhibitName() {
	return this->exhibitName;      // method that return the Exhibit name 
}

string Exhibit::getCreatorName() {
	                                 // meyhod that return the creator name
	return this->creatorName;
}

void Exhibit::get_data(ofstream & file)
{
	file << this->exhibitName << endl;
	file << this->creatorName << endl;
	file << this->Year << endl;         // this method recive a file and get from thr file all the details of the data members i have in this class
	file << this->weight << endl;
	file << this->height << endl;
	file << this->length << endl;
}

void Exhibit::set_data(ifstream & file)
{
	file >> this->exhibitName;
	file >> this->creatorName;
	file >> this->Year;        // this method put in the file this data members of the class into the file
	file >> this->weight;
	file >> this->height;
	file >> this->length;
	
}

ofstream & operator<<(ofstream & out, Exhibit & object)
{
	out << object.exhibitName << endl;
	out << object.creatorName << endl;
	out << object.Year << endl;            // operator  that print out -implement 
	out << object.weight << endl;
	out << object.height << endl;
	out << object.length << endl;

	return out;
}
