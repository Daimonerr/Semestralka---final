
#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <cstdlib>
#include <unistd.h>
#include <string>
//#include <fstream>
//#include <algorithm>
#include <sstream>
#include <stdio.h>
#include "ship.h"
#include "load.h"
using namespace std;

class CBack {
	public:
		CBack();
		void drawMap()const;
		void startMenu(vector<LOAD> & fileVect, 
					   int & cntFileObjs);
		void printUtilities(const int & score, 
							const int & remainObst, 
							const int & health,
							CTimer & timer, 
							const bool & isReloading, 
							const int & mag, 
							const int & bonus);
		void gameEnding(const int & score);
		void pauseGame();
		bool getFile(vector<LOAD> & fileVect, 
					 int & cntFileObjs);
		void drawSquare(const int & height, 
						const int & width, 
						const int & startY, 
						const int & startX, 
						const char & printChar)const;
		
	private:
		char c_nickname[20];
		char c_mapName[20];
};

#endif