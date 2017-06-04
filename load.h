#ifndef LOAD_H
#define LOAD_H

struct LOAD{
	LOAD();
	LOAD(const int & a, 
		 const int & tik, 
		 const int & speedo, 
		 const char & typeO);
	int y;
	int x;
	int time;
	int sp;
	char type;
};

#endif