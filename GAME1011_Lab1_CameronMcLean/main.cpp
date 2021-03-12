#include <iostream>
#include <ctime>
#include "engine.h"
#include <string>
using namespace std;


int main()
{
	//Platform Initialization
	Achievement m_achievementDefault;
	Platform* p_platform = new Platform[4];
	p_platform[0].SetPlatform("Xbox One", "Microsoft");
	p_platform[1].SetPlatform("Playstation 5", "Sony Entertainment");
	p_platform[2].SetPlatform("Nintendo Switch", "Nintendo Entertainment");
	p_platform[3].SetPlatform("Google Stadia", "Google");

	//Game Initialization
	Game* p_game = new Game[5];
	p_game[0].SetGame("Halo Infinite", "Bungie Studios", "313 Industries");
	p_game[1].SetGame("Hitman 3", "IO Interactive", "IO Interactive");
	p_game[2].SetGame("Star Wars Jedi Knight", "Activision", "Raven Software");
	p_game[3].SetGame("Spongebob Squarepants: Battle for Bikini Bottom", "THQ", "Heavy Iron Studios");
	p_game[4].SetGame("Psychonauts 2", "XBox Game Studios", "Double Fine");

	Game* p_game1 = new Game[5];
	p_game1[0].SetGame("Spiderman: Miles Morales", "Sony Interactive Entertainment", "Insomniac Games");
	p_game1[1].SetGame("Last Of Us 2", "Sony Interactive Entertainment", "Naughty Dog");
	p_game1[2].SetGame("Uncharted 4: A Thief's End", "Sony Interactive Entertainment", "Naughty Dog");
	p_game1[3].SetGame("God of War", "Capcom", "Santa Monica Studios");
	p_game1[4].SetGame("Days Gone", "Sony Interactive", "Bend Studio");	

	Game* p_game2 = new Game[5];
	p_game2[0].SetGame("Super Smash Bros Ultimate", "Nintendo Entertainment", "Shinya Saito, Yoshito Higuchi");
	p_game2[1].SetGame("Super Mario Odyssey", "Nintendo", "Nintendo EPD");
	p_game2[2].SetGame("The Legend of Zelda: Breath of the Wild", "Nintendo", "Nintendo EPD");
	p_game2[3].SetGame("Dragon Quest", "Sqaure Enix", "ArtePiazza");
	p_game2[4].SetGame("Monster Hunter Rise", "Capcom", "Capcom");

	Game* p_game3 = new Game[5];
	p_game3[0].SetGame("Red Dead Redemption 2", "Rockstar Games", "Rockstar Studios");
	p_game3[1].SetGame("The Witcher 3", "CD Projekt Red", "CD Projekt");
	p_game3[2].SetGame("Destiny 2", "Activision", "Bungie Inc");
	p_game3[3].SetGame("Doom Eternal", "Bethesda Softworks", "id Software");
	p_game3[4].SetGame("Borderlands 3", "2K Games", "Gearbox Software");
	
	//Xbox Achievement Creation
	Achievement m_achievement[10];
	m_achievementDefault.CreateAchievement(p_platform, p_game, m_achievement, 0, 0);
	Achievement m_achievement1[10];
	m_achievementDefault.CreateAchievement(p_platform, p_game, m_achievement1, 0, 1);
	/*Achievement m_achievement2[10];
	m_achievementDefault.CreateAchievement(p_platform, p_game, m_achievement2, 0, 2);
	Achievement m_achievement3[10];
	m_achievementDefault.CreateAchievement(p_platform, p_game, m_achievement3, 0, 3);
	Achievement m_achievement4[10];
	m_achievementDefault.CreateAchievement(p_platform, p_game, m_achievement3, 0, 4);*/

	//Playstation Achievement Creation
	//Achievement m_achievement5[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game1, m_achievement5, 1, 0);
	//Achievement m_achievement6[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game1, m_achievement6, 1, 1);
	//Achievement m_achievement7[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game1, m_achievement7, 1, 2);
	//Achievement m_achievement8[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game1, m_achievement8, 1, 3);
	//Achievement m_achievement9[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game1, m_achievement9, 1, 4);

	////Switch Achievement Creation
	//Achievement m_achievement10[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game2, m_achievement10, 2, 0);
	//Achievement m_achievement11[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game2, m_achievement11, 2, 1);
	//Achievement m_achievement12[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game2, m_achievement12, 2, 2);
	//Achievement m_achievement13[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game2, m_achievement13, 2, 3);
	//Achievement m_achievement14[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game2, m_achievement14, 2, 4);
	//
	////Google Stadia Achievement Creation
	//Achievement m_achievement15[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game3, m_achievement15, 3, 0);
	//Achievement m_achievement16[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game3, m_achievement16, 3, 1);
	//Achievement m_achievement17[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game3, m_achievement17, 3, 2);
	//Achievement m_achievement18[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game3, m_achievement18, 3, 3);
	//Achievement m_achievement19[10];
	//m_achievementDefault.CreateAchievement(p_platform, p_game3, m_achievement19, 3, 4);
	
	//Printing all Data to Console
	system("cls");
	p_platform[0].PrintPlatform();
	cout << endl;
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game, m_achievement, 0, 0);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game, m_achievement1, 0, 1);
	/*m_achievementDefault.PrintFinalAchievement(p_platform, p_game, m_achievement2, 0, 2);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game, m_achievement3, 0, 3);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game, m_achievement4, 0, 4);
	*/

	/*p_platform[1].PrintPlatform();
	cout << endl;
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game1, m_achievement5, 1, 0);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game1, m_achievement6, 1, 1);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game1, m_achievement7, 1, 2);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game1, m_achievement8, 1, 3);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game1, m_achievement9, 1, 4);

	p_platform[2].PrintPlatform();
	cout << endl;
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game2, m_achievement10, 2, 0);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game2, m_achievement11, 2, 1);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game2, m_achievement12, 2, 2);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game2, m_achievement13, 2, 3);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game2, m_achievement14, 2, 4);

	p_platform[3].PrintPlatform();
	cout << endl;
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game3, m_achievement15, 3, 0);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game3, m_achievement16, 3, 1);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game3, m_achievement17, 3, 2);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game3, m_achievement18, 3, 3);
	m_achievementDefault.PrintFinalAchievement(p_platform, p_game3, m_achievement19, 3, 4);*/
}

//this is the most embarassed i have ever been of my code, this code is complete garbage and i hate it.