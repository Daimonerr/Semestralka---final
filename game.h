#ifndef GAME_H
#define GAME_H

//#include <cstdlib>
//#include <unistd.h>
//#include <string>
//#include <fstream>
//#include <algorithm>
//#include <sstream>
//#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "background.h"
using namespace std;


#define BONUSAMMO 1
#define BONUSINDESTRUCT 2
#define BONUSGUNS 3

class CGame {
	public:
		CGame();
		~CGame();
		void runGame();
		void spawnObstacles();
		bool gameOver();
		
		void moveBullets();
		void moveObstacles();
		void gameControll();
		void reloadMag();
		void rollBonus();
		
		void checkShip();
		void checkBullets();
		void checkReloading();
		void checkBonuses();
		bool hitBullet(YXPART & bullet, 
					   const int & cnt);
		bool hitShip(YXPART & shipCPoint);
		void deleteObst(const int & i);
		void deleteBullet(const int & i);
		
	private:
		vector<CObstacle*> obstacles;
		vector<CBullet> ammo;
		vector<LOAD> map;
		CTimer timer;
		CShip battleShip;
		CBack background;	
		
		int c_crntObst;
		int c_cntFileObjs;
		int c_score;
		int c_health;
		int c_remainObst;
		int c_mag;
		int c_bonus;
		int c_bonusTime;
		int c_cntBullets;
		int c_reloadT;
		bool c_isReloading;		
};

#endif