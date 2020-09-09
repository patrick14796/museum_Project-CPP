/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/
#include "Room.h"



Room::Room(double perimeter, double area , int max_exhibitInRoom, double floorArea, double wallArea, int NUM_OF_current_exhibits, Exhibit** arr)//default constructor
{
	this->perimeter = perimeter;
	this->area = area;
	this->max_exhibitInRoom = max_exhibitInRoom;
	this->floorArea = floorArea;                                    //CTOR and initalize the data members
	this->wallArea = wallArea;
	this->NUM_OF_current_exhibits = NUM_OF_current_exhibits;
	this->arr = arr;

}

Room :: ~Room()//destroyer
{
	for (int i = 0; i < NUM_OF_current_exhibits; ++i)
		delete arr[i];                                     // for loop from zero to the number of current exhibit and delete them 
	delete[] this->arr;
}

void Room::set_perimeter(double perimeter1) {
	this->perimeter = perimeter1;          // method that set the perimeter that recive from the user 

}

void Room::set_area(double area1) {
	this->area = area1;               // method that set the area of the room

}
void Room::set_max_exhibitInRoom(int max_exhibit1) {
	this->arr = new Exhibit * [max_exhibit1];         // method that set the max number of exhibit in the room and allocate memory for
	this->max_exhibitInRoom = max_exhibit1;
}

void Room::delete_statue(Exhibit* arr) {
	//delete arr;
	--NUM_OF_current_exhibits;
}

void Room::decend_currentNum_ofExhibit()
{
	--NUM_OF_current_exhibits;              // method that decrease the number of exhibit
}

bool Room::add_exhibit(Exhibit* a)
{
	if (NUM_OF_current_exhibits<max_exhibitInRoom)   // method that add a new exhibit to the array , check if the number of current exhibit is less than the max exhibit in the room 
	{
		arr[NUM_OF_current_exhibits++]= a;  // add the exhibit to the arr
			return true;
	}
	else
	{
		delete a;          // if the first IF return false i delete this exhibit that  i try to add
		return false;
	}
}


Exhibit * Room::operator[](int index)
{
	if (index>=0 && index < max_exhibitInRoom)
	{
		return arr[index];             // operator [] for the double arr, return the arr in a specific index
	}
}


void Room::set_wallarea(double wallarea1) {
	this->wallArea = wallarea1;               // method that set the wall area of the room
}

void Room::set_floorarea(double floorarea1) {
	this->floorArea = floorarea1;           // method that set the floor area of the room 
}

istream & operator >> (istream&  input, Room &object)
{
	input >> object.perimeter;
	input >> object.area;                 // operator >> that input the data to the members in the class
	input >> object.max_exhibitInRoom;
	input >> object.floorArea;
	input >> object.wallArea;
	return input;
}
