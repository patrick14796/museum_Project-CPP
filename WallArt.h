/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/
#include "Statue.h"
#include "Painting.h"




class WallArt :  public Statue,  public Painting   // class WallArt inherit from Statue and Painting in public
{
public:
	WallArt(string ExhibitName="\0", string CreatorName= "\0", int YearCreate = 0, double weight = 0, double Height = 0, double width = 0,double Area_wall=0, double Area_floor=0, double statueDepth = 0);
	~WallArt(); //DTOR
	double get_Area_wall(); // get area of wall 
	double get_Area_floor();// get area of floor
    double calculateArea(); // calculate the area of the wallart
	double transferPrice();// calc trasfer price of wallart exhibit
	double reproduction(); // calc reproduction of the wallart
	virtual void get_data(ofstream& file); // get data from file
	virtual void set_data(ifstream& file); // set data to file
	friend ofstream& operator<<(ofstream& out,WallArt& object);  // operator
	virtual double wallArea(); //calc wall area of wallart
	virtual double floorArea(); //calc floor area of wallart

private:
	double Area_wall;
	double Area_floor;           // private members
	double deep;
	
};

