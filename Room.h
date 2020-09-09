/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/
#pragma once
#include "Exhibit.h"
#include "Standing.h"
#include "Statue.h"
#include "Painting.h"
using namespace std;

class Room {

private:
	double floorArea, wallArea;//size of the room in the floor and the wall
	int NUM_OF_current_exhibits;
	double perimeter;
	double area;
	int max_exhibitInRoom;
	Exhibit** arr=NULL;

public:
	Room(double perimeter=0,double area=0,int max_exhibitInRoom=0,double floorArea=0,double wallArea=0,int NUM_OF_current_exhibits = 0, Exhibit** arr=NULL);//default constructor
	~Room();//destroyer
	int get_NUM_OF_current_exhibits() { return this->NUM_OF_current_exhibits; } // get number of the current exhibit
	friend istream & operator >> (istream& input, Room& object); //operator
	void set_perimeter(double perimeter); // set method of perimter number
	double get_perimeter() { return this->perimeter; } // get the perimeter of the room
	void set_area(double area); // set area of the room method
	double get_area() { return this->area; } // get the are of the room
	void set_max_exhibitInRoom(int max_exhibit);  // set the number of max exhibit in the room
	int get_max_exhibitInRoom() { return this->max_exhibitInRoom; }  // get the max number of exhibit in the room
	void set_wallarea(double wallarea);  // set the wall area of the room
	double get_wallarea() { return this->wallArea; } // get the wall area
	void set_floorarea(double floorarea); // set the floor area of the room
	double get_floorarea() { return this->floorArea; } // return the floor area
	void delete_statue(Exhibit*); // method that delete a specific statue
	void decend_currentNum_ofExhibit(); // method that decrease the number of exhibit in the room
	bool add_exhibit(Exhibit*); // method that add a new exhibit in the room 
	Exhibit** get_arr() { return this->arr; } // method that return the array
	Exhibit* operator[](int index);  // operator [] for double array
};