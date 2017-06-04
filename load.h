#ifndef LOAD_H
#define LOAD_H

struct LOAD{
	LOAD();
	LOAD(const int & stX, 
		 const int & stTime, 
		 const int & stSpeed, 
		 const char & typeO);
	int y;
	int x;
	int time;
	int sp;
	char type;
};

#endif