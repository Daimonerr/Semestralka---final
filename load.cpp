#include "load.h"

LOAD::LOAD(): y(0), x(0), time(0), sp(0)
{}

LOAD::LOAD(const int & a, 
		   const int & tik, 
		   const int & speedo, 
		   const char & typeO)
{
	y = 3;
	x = a;
	time = tik;
	sp = speedo;
	type = typeO;
}