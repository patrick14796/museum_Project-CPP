#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>
#include "Exhibit.h"
#include "Standing.h"
#include "Statue.h"
#include "Painting.h"
#include "WallArt.h"
#include "Room.h"
using namespace std;

/*
Name: Patrick lugassy
ID: 319266177
CAMPUS:ASHDOD
*/

ostream& operator<<(ostream&out, Statue&other) {
	out << other.getExhibitName() << endl;
	out << other.getCreatorName() << endl;
	out << other.getYear() << endl;
	out << other.getWeight()<< endl;
	out << other.getHeight() << endl;
	out << other.getLength() << endl;
	out << other.getMainMaterial() << endl;
	out << other.get_statueDepth() << endl;
	return out;
}

ostream& operator<<(ostream&out, Standing&other) {
	out << other.getExhibitName() << endl;
	out << other.getCreatorName() << endl;
	out << other.getYear() << endl;
	out << other.getWeight() << endl;
	out << other.getHeight() << endl;
	out << other.getLength() << endl;
	out << other.getPaintStyle() << endl;

	return out;
}

ostream& operator<<(ostream&out, WallArt&other) {
	out << other.Exhibit::getExhibitName() << endl;
	out << other.Exhibit::getCreatorName() << endl;
	//out << other.Statue::getMainMaterial() << endl;
	//out << other.Painting::getPaintStyle() << endl;
	out << other.Exhibit::getYear() << endl;
	out << other.Exhibit::getWeight() << endl;
	out << other.Exhibit::getHeight() << endl;
	out << other.Exhibit::getLength() << endl;
	out << other.get_statueDepth() << endl;

	return out;
}

ostream& operator<<(ostream&out, Painting&other) {
	out << other.getExhibitName() << endl;
	out << other.getCreatorName() << endl;
	out << other.getPaintStyle() << endl;
	out << other.getYear() << endl;
	out << other.getWeight() << endl;
	out << other.getHeight() << endl;
	out << other.getLength() << endl;

	return out;
}

int main() {

	/*
	The following lines(80-205) describe a code that was written by me and describes how I built the file
	from which the program reads and inserts the data of the exhibits into the museum 
	(after the end of use, this code was muted according to the lecturer's instruction)
	after this lines the program begins
	*/



	//ofstream file1;
	//int Exhibit_statue;
	//int Exhibit_standing;
	//int Exhibit_wallArt;
	//int Exhibit_painting;
	//cout << "how much Statue Exhibit in this data file? : " << endl;
 //   cin >> Exhibit_statue;
	//cout << "how much Standing Exhibit in this data file? : " << endl;
	//cin >> Exhibit_standing;
	//cout << "how much WallArt Exhibit in this data file? : " << endl;
	//cin >> Exhibit_wallArt;
	//cout << "how much Painting Exhibit in this data file? : " << endl;
	//cin >> Exhibit_painting;
	//file1.open("Exhibit_list.txt");
	//cout << "Please Enter Exhibit data" << endl;
	//cout << "In this order:\n Exhibit-Name \n Creator Name \n Year creation \n Exhibit weight \n Exhibit Hight \n Exhibit length \n " << endl;
	//cout << "Enter additional information that matches the specific presentation, such as:" << endl;
	//cout << "Statue - main material, Exhibit depth. \n Painting- paint-style" << endl;
	//if (Exhibit_statue>0)
	//{
	//	for (int i = 0; i < Exhibit_statue; ++i)
	//	{
	//		string exhibit_name="\0";
	//		string creator_name="\0";
	//		int year_creation=NULL;
	//		double exhibit_weight=NULL;
	//		double exhibit_hight = NULL;
	//		double exhibit_length = NULL;
	//		string main_material= "\0";
	//		double exhibit_deep = NULL;
	//		cout << "Enter data of Statue"<<(i+1) <<":" << endl;
	//		cin >> exhibit_name;
	//		cin >> creator_name;
	//		cin >> main_material;
	//		cin>> year_creation;
	//		cin >> exhibit_weight;
	//		cin >> exhibit_hight;
	//		cin >> exhibit_length;
	//		cin >> exhibit_deep;
	//		Statue statue(exhibit_name, creator_name, main_material, year_creation, exhibit_weight, exhibit_hight, exhibit_length, exhibit_deep);
	//		file1 << "Statue"<<endl;
	//		file1 << statue;
	//		file1 << endl;
	//	}
	//}
	//
	//if (Exhibit_standing>0)
	//{
	//	for (int i = 0; i < Exhibit_standing; ++i)
	//	{
	//		string exhibit_name = "\0";
	//		string creator_name = "\0";
	//		int year_creation = NULL;
	//		double exhibit_weight = NULL;
	//		double exhibit_hight = NULL;
	//		double exhibit_length = NULL;
	//		string exhibit_paintStyle = "\0";
	//		cout << "Enter data of Standing" << (i + 1) << ":" << endl;
	//		cin >> exhibit_name;
	//		cin >> creator_name;
	//		cin >> exhibit_paintStyle;
	//		cin >> year_creation;
	//		cin >> exhibit_weight;
	//		cin >> exhibit_hight;
	//		cin >> exhibit_length;
	//		Standing standing(exhibit_name, creator_name, exhibit_paintStyle, year_creation, exhibit_weight, exhibit_hight, exhibit_length);
	//		file1 << "Standing" << endl;
	//		file1 << standing;
	//		file1 << endl;
	//	}
	//}

	//if (Exhibit_wallArt>0)
	//{
	//	for (int i = 0; i < Exhibit_wallArt; ++i)
	//	{
	//		string exhibit_name = "\0";
	//		string creator_name = "\0";
	//		int year_creation = NULL;
	//		double exhibit_weight = NULL;
	//		double exhibit_hight = NULL;
	//		double exhibit_length = NULL;
	//		string exhibit_paintStyle = "\0";
	//		string main_material = "\0";
	//		double exhibit_deep = NULL;
	//		cout << "Enter data of Wall-Art" << (i + 1) << ":" << endl;
	//		cin >> exhibit_name;
	//		cin >> creator_name;
	//		cin >> year_creation;
	//		cin >> exhibit_weight;
	//		cin >> exhibit_hight;
	//		cin >> exhibit_length;
	//		cin >> exhibit_deep;
	//		WallArt wallArt(exhibit_name, creator_name, year_creation, exhibit_weight, exhibit_hight, exhibit_length,exhibit_deep);
	//		file1 << "WallArt" << endl;
	//		file1 << wallArt;
	//		file1 << endl;
	//	}
	//}

	//if (Exhibit_painting>0)
	//{
	//	for (int i = 0; i < Exhibit_painting; ++i)
	//	{
	//		string exhibit_name = "\0";
	//		string creator_name = "\0";
	//		int year_creation = NULL;
	//		double exhibit_weight = NULL;
	//		double exhibit_hight = NULL;
	//		double exhibit_length = NULL;
	//		string exhibit_paintStyle = "\0";
	//		cout << "Enter data of Painting" << (i + 1) << ":" << endl;
	//		cin >> exhibit_name;
	//		cin >> creator_name;
	//		cin >> exhibit_paintStyle;
	//		cin >> year_creation;
	//		cin >> exhibit_weight;
	//		cin >> exhibit_hight;
	//		cin >> exhibit_length;
	//		Painting painting(exhibit_name, creator_name, exhibit_paintStyle, year_creation, exhibit_weight, exhibit_hight, exhibit_length);
	//		file1 << "Painting" << endl;
	//		file1 << painting;
	//		file1 << endl;
	//	}
	//}
	//file1.close();




int Menu_choise;
ifstream file2;
try
{
	file2.open("Exhibit_list.txt");             // open file and use exeption if it not opening
}
catch (const ifstream::failure& e)
{
	cout << "Exception opening/reading file";
}
int Num_rooms;
cout << "How much Rooms you want in the Museum:" << endl;
std::cin >> Num_rooms;                      // ask user how much room he want in the museum and scan number from him
Room * rooms = new Room[Num_rooms];     // allocate memory in the size the user choose
for (int i = 0; i < Num_rooms; ++i)
{
	double perimeter, area;
	int max_exhibitInRoom;
	double floorArea, wallArea;
	cout << "\n\nEnter room perimeter: ";
	std::cin >> perimeter;//get room Length
	cout << "\n\nEnter room area: ";
	std::cin >> area;//get room height
	cout << "\n\n Enter max exhibit in this room:" << endl;
	std::cin >> max_exhibitInRoom;
	cout << endl;
	floorArea = area / 4;//calculate floor Area
	wallArea = (((2 * area) + (2 * perimeter)) * 4) / 3;//calculate wall Area
	rooms[i].set_perimeter(perimeter);
    rooms[i].set_area(area);
    rooms[i].set_max_exhibitInRoom(max_exhibitInRoom);   //set the data into the room
	rooms[i].set_floorarea(floorArea);
	rooms[i].set_wallarea(wallArea);
}

string line;
double floorArea = 0;
double wallArea = 0;
Exhibit* temp = NULL;
int counter = 0;
while (!(file2.eof()))       // read from the file Until it reaches the end
{
	getline(file2, line);   // get the line from the file

	if (line == "Statue")  // check if it is write Statue
	{
		if (floorArea != 0)
			floorArea = 0;
		
		temp = new Statue;                  // produce a new statue
		temp->set_data(file2);   // set to him data from the file
		temp->calculateArea();   // calculete him area
		for (int i = 0; i < Num_rooms; ++i) // for loop
		{
			if (rooms[i].get_NUM_OF_current_exhibits() < rooms[i].get_max_exhibitInRoom()) // from current number of exhibit until the max exhibit in the room
			{
				rooms[i].add_exhibit(temp);  // add the exhibit to the array
				++counter;  // increase the counter
				if (rooms[i].get_floorarea() - temp->calculateArea() < 0) // if the exhibit is too big
				{
					--counter;  // decrease the counter
					delete rooms[i][counter];  // delete this exhibit
					rooms[i].decend_currentNum_ofExhibit();  // decend the number of current number of exhibit
				}
				else
				{
					floorArea = rooms[i].get_floorarea() - temp->calculateArea();  // else subtract the area of the exhibit from the area of the room
					rooms[i].set_floorarea(floorArea);                             // Updating the floor area of the room
				}
				break;
			}
		}
	}
	if (line == "Painting")
	{
		if (floorArea != 0)
			floorArea = 0;

		temp = new Painting;
		temp->set_data(file2);
		temp->calculateArea();
		for (int i = 0; i < Num_rooms; ++i)
		{
			if (rooms[i].get_NUM_OF_current_exhibits() < rooms[i].get_max_exhibitInRoom())
			{
				rooms[i].add_exhibit(temp);
				++counter;
				if (rooms[i].get_wallarea() - temp->calculateArea() < 0)
				{
					--counter;
					delete rooms[i][counter];
					rooms[i].decend_currentNum_ofExhibit();
				}
				else
				{
					wallArea = rooms[i].get_wallarea() - temp->calculateArea();
					rooms[i].set_wallarea(wallArea);
				}
				break;
			}
		}
	}
	if (line == "Standing")
	{
		if (floorArea != 0)
			floorArea = 0;

		temp = new Standing;
		temp->set_data(file2);
		temp->calculateArea();
		for (int i = 0; i < Num_rooms; ++i)
		{
			if (rooms[i].get_NUM_OF_current_exhibits() < rooms[i].get_max_exhibitInRoom())
			{
				rooms[i].add_exhibit(temp);
				++counter;
				if (rooms[i].get_floorarea() - temp->calculateArea() < 0)
				{
					--counter;
					delete rooms[i][counter];
					rooms[i].decend_currentNum_ofExhibit();
				}
				else
				{
					floorArea = rooms[i].get_floorarea() - temp->calculateArea();
					rooms[i].set_floorarea(floorArea);
				}
				break;
			}
		}
	}
	if (line == "WallArt")
	{
		if (floorArea != 0)
			floorArea = 0;
		if (wallArea != 0)
			wallArea = 0;

		temp = new WallArt;
		temp->set_data(file2);
		for (int i = 0; i < Num_rooms; ++i)
		{
			if (rooms[i].get_NUM_OF_current_exhibits() < rooms[i].get_max_exhibitInRoom())
			{
				rooms[i].add_exhibit(temp);
				++counter;
				if (rooms[i].get_floorarea() - temp->floorArea() > 0 && rooms[i].get_wallarea() - temp->wallArea() >0)
				{
					floorArea = rooms[i].get_floorarea() - temp->floorArea();
					rooms[i].set_floorarea(floorArea);

					wallArea = rooms[i].get_wallarea() - temp->wallArea();
					rooms[i].set_wallarea(wallArea);
				}
				else
				{
					--counter;
					delete rooms[i][counter];
					rooms[i].decend_currentNum_ofExhibit();
				}
				break;
			}
		}
	}

}

file2.close();
do                      // do while  and switch case of  the menue in the museum
{
	cout << "\n\nPlease select from the menu:" << endl;
	cout << "1. Saving the entire contents of the museum in a file" << endl;
	cout << "2.Removing all statues from the rooms of a certain statue(You choose!):" << endl;   // print to screen the option
	cout << "3.Find the oldest painting and print how much it will cost to recover it" << endl;
	cout << "4.To find the exhibit that cost the highest cost ,and print out its details" << endl;
	cout << "5. Exit" << endl;
	std::cin >> Menu_choise;   // scan from the user the chooise
	ofstream file3;
	string name;
	int old;
	int x=0, y=0;    // create variables
	double expenssive;
	Exhibit* temporary = NULL;
	temporary = new Statue;
	switch (Menu_choise)
	{

	case 1:
		try
		{
			file3.open("list-of-saved exhibit.txt");
		}                                                   // open the file and try catch exeption of opening file 
		catch (const ifstream::failure& e)
		{
			cout << "Exception opening/reading file";

		}
		for (int i = 0; i <Num_rooms; ++i)       // for from 0 to the number of rooms
		{
			for (int b = 0; b < rooms[i].get_NUM_OF_current_exhibits(); b++)  // for from 0 to the number of current exhibit
			{
				if (typeid(*(rooms[i][b])) == typeid(Statue))  // check if the type in this place is the same like the type of class Statue
				{
					file3 << "Statue" << endl; // print statue  string initially
					rooms[i][b]->get_data(file3);   // put the data to the file
				}

				if (typeid(*(rooms[i][b])) == typeid(WallArt))
				{
					file3 << "WallArt" << endl;
					rooms[i][b]->get_data(file3);
				}
				if (typeid(*(rooms[i][b])) == typeid(Standing))
				{
					file3 << "Stnding" << endl;
					rooms[i][b]->get_data(file3);
				}
				if (typeid(*(rooms[i][b])) == typeid(Painting))
				{
					file3 << "Painting" << endl;
					rooms[i][b]->get_data(file3);
				}
			}
		}
		cout << "\n\n All the exhibits in the museum have been saved in the file: 'list-of-saved exhibit.txt' \n\n" << endl;
		file3.close();  // close the file 
		break;

	case 2:
		cout << "which sculptor name do you to remove all his statues from the museum: " << endl;
		std::cin >> name;   // scan from the user the name of the sculptor
		for (int i = 0; i <Num_rooms; ++i)
		{
			for (int j = 0; j <rooms[i].get_NUM_OF_current_exhibits(); ++j)
			{
				if (typeid(*(rooms[i][j])) == typeid(Statue))                   // for loop of the room, and for loop of the exhibit number and check if the current place in the array is a statue   
				{
					if (name == rooms[i][j]->getCreatorName())   // check if the name of the sculptor is the same to the name the user choose
					{
						delete rooms[i][j];  // delete the statue
						rooms[i].decend_currentNum_ofExhibit();  // decrease the number of exhibit 
					}
				}
					
			}
		}

		break;

	case 3:
		for (int k = 0; k < Num_rooms; ++k)
		{
			for (int m = 0; m < rooms[k].get_NUM_OF_current_exhibits(); ++m)
			{
				if (typeid(*(rooms[k][m])) == typeid(Painting) || typeid(*(rooms[k][m])) == typeid(Standing))
				{
					old = (rooms[k][m]->getYear()); // the first place in the arr is the old 
				}
				break;
			}
			break;
		}
		  
		for (int i = 0; i < Num_rooms; ++i)
		{                                                                       // two for loop : rooms and exhibit
			for (int j = 0; j < rooms[i].get_NUM_OF_current_exhibits(); ++j)
			{
				if (typeid(*(rooms[i][j])) == typeid(Painting) || typeid(*(rooms[i][j])) == typeid(Standing))
				{
					if (old > (rooms[i][j]->getYear()))      // check if it is a painting or a standing painting and check if the year creation is Older
					{
						old = (rooms[i][j]->getYear());
						x = i;
						y = j;
					}
				}
			}
		}
		cout << "\n\n The oldest painting are:" << rooms[x][y]->getExhibitName() << endl;
		cout << "BY the creator: " << rooms[x][y]->getCreatorName() << endl;
		cout << "YEAR: " << rooms[x][y]->getYear() << endl;                         // print to screen The details 
		cout <<"Reproductions cost is:"<< rooms[x][y]->reproduction() << endl;
		cout << endl;
		break;

	case 4:
		expenssive = (rooms[0][0]->transferPrice());      // I decide the first place in the arrat is the most expenssive exhibit
		for (int i = 0; i < Num_rooms; i++)
		{
			for (int j = 0; j <rooms[i].get_NUM_OF_current_exhibits(); ++j)
			{                                                                    // two for loop : room and number of exhibit
				if (expenssive < rooms[i][j]->transferPrice())
				{
					expenssive = rooms[i][j]->transferPrice();    // check if the exhibit in this place is mor expenssive or not
					x = i;
					y = j;
				}
			}
		}
		cout << "\n\n the most expenssive exhibit to import is : " << endl;
		cout<< "EXHIBIT NAME: "<< rooms[x][y]->getExhibitName() << endl;
		cout<< "CREATOR NAME: "<< rooms[x][y]->getCreatorName() << endl;   // print to screen the most expenssive exhibit to import 
		cout << "YEAR OF CREATION: " << rooms[x][y]->getYear() << endl;
		cout << "WEIGHT: " << rooms[x][y]->getWeight() << endl;
		cout << "HEIGHT: " << rooms[x][y]->getHeight() << endl;
		cout << "Lenght: "<<rooms[x][y]->getLength() << endl;
		cout << "MONEY COST TO TRANSFER: " << rooms[x][y]->transferPrice() << endl;
		cout << endl;
		
		break;

	case 5:
		delete[] rooms;
		cout << "\n\n\nGood-bye!\n\n\n" << endl;        // delete all the room in the array
		break;

	default:
		cout << "\n\n incorrect value, choose again! \n" << endl;
	}
} while (Menu_choise!= 5);
	return 0;
}