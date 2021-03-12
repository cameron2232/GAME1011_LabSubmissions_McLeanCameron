#include "engine.h"
#include <iostream>
#include <string>
#include <array>
#include <stdio.h>
#include "windows.h"
using namespace std;


void Platform::SetPlatform(string platform, string manufacturer)
{
	m_pPlatform = platform;
	m_pManufacturer = manufacturer;
}


void Game::SetGame(string name, string publisher, string developer)
{
	m_gName = name;
	m_gPublisher = publisher;
	m_gDeveloper = developer;
}


void Achievement::GetAchievement()
{
	cin.ignore();
	cout << "Please enter name of Achievement: ";
	getline(cin, m_aName);
	cout << endl << "Please enter description of Achievement: ";
	getline(cin, m_aDescription);
	cout << endl << "Please enter score of Achievement: ";
	cin >> m_aScore;
	cout << endl << endl;
}


int Game::GetAchievementNumb()
{
	
	cout << endl << "Please enter how much achievements you want to make: ";
	cin >> m_aNumber;
	cout << endl;
	return m_aNumber;
}


void Platform::PrintPlatform()
{
	
	cout << "Platform: " << m_pPlatform << "     Manufacturer: " << m_pManufacturer << endl << endl;
}


void Game::PrintGame()
{
	
	cout << "Game: " << m_gName << "      Publisher: " << m_gPublisher << "      Developer: " << m_gDeveloper << endl << endl;
}


void Achievement::PrintAchievement()
{
	
	cout << "Achievement: " << m_aName << "     Description: " << m_aDescription << "     Score: " << m_aScore << endl;
}


void Achievement::CreateAchievement(Platform platform[], Game game[], Achievement achievement[], int PlatLoc, int GameLoc)
{
	system("cls");
	platform[PlatLoc].PrintPlatform();
	game[GameLoc].PrintGame();
	game[GameLoc].GetAchievementNumb();
	for (int i = 0; i < game[GameLoc].m_aNumber; i++)
	{
		system("cls");
		game[GameLoc].PrintGame();
		achievement[i].GetAchievement();
		cout << endl;
	}
}

void Achievement::PrintFinalAchievement(Platform platform[], Game game[], Achievement achievement[], int PlatLoc, int GameLoc)
{
	
	game[GameLoc].PrintGame();
	for (int i = 0; i < game[GameLoc].m_aNumber; i++)
	{
		achievement[i].PrintAchievement();
		cout << endl << endl;
	}
	
}



