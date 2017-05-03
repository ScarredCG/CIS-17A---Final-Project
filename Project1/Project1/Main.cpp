#include <iostream>
#include <string>
#include <memory>
#include <cstdlib>
#include "Player.h"
#include "Game.h"
#include "Team.h"

//Prototypes
void AddPlayer();
void DisplayTeamInfo();

using namespace std;

int main()
{
	cout << "Welcome to the video game roster creator!" << endl;

	cout << "In this program you will be creating a roster for a team." << endl;

	system("pause");

	int choice = -1;

	while (choice != 0)
	{
		system("cls");

		//cout << "Now Managing " << guild->GetName() << endl << "****************************" << endl;
		cout << "Welcome to the main menu. What would you like to do?" << endl;

		cout << "(1) Diplay Team Info" << endl;

		cout << "(2) Add a Player" << endl;

		cout << "(3) Exit" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1: DisplayTeamInfo(); break;


		case 2: AddPlayer(); break;


		case 3: system("cls");
			cout << "Thank you for using this program. Goodbye!" << endl;
			system("pause");
			exit(0); break;


		default: return 0; break;
		}
	}
	return 0;
}


	void AddPlayer()
{
	system("cls");


}

void DisplayTeamInfo()
{
	system("cls");




}