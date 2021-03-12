#pragma once
#ifndef _ENGINE_H_
#define _ENGINE_H_
#include <iostream>
#include <time.h>
#include <array>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;


class Platform
{
public:
	~Platform() {}

	string m_pPlatform, m_pManufacturer;
	
	
	void SetPlatform(string platform, string manufacturer);

	void PrintPlatform();
};


class Game : public Platform
{
public:	
	~Game(){}

	 string m_gName, m_gPublisher, m_gDeveloper;
	 int m_aNumber;

	 int GetAchievementNumb();
	
	 void SetGame(string name, string publisher, string developer);
	
	 void PrintGame();
};


class Achievement : public Game
{
public:
	~Achievement() {}

	string m_aName, m_aDescription;
	int m_aScore;

	void GetAchievement();

	void PrintAchievement();

	void CreateAchievement(Platform platform[], Game game[], Achievement achievement[], int PlatLoc, int GameLoc);

	void PrintFinalAchievement(Platform platform[], Game game[], Achievement achievement[], int PlatLoc, int GameLoc);
	
	
};




#endif
