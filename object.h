#ifndef OBJECT_H
#define OBJECT_H

#include <vector>
#include <ncurses.h>
#include <vector>
#include "timer.h"
#include "yxpart.h"
using namespace std;


class CObject {
	public:
		CObject();
		CObject(const int & y, 
				const int & x, 
				const char & coreC);
		virtual ~CObject(){};
		virtual bool isCollision()const =0;
		virtual bool moveO();
		virtual bool moveO(CTimer & cntTime);
		void buildOffset(const int & y, 
						 const int & x, 
						 const char & oChar);
		void printO()const;
		void clearO()const;
		vector<YXPART> giveCollisionPoints();
		YXPART giveCorePoint();

	protected:
		int c_posY;
		int c_posX;
		int c_coreChar;
		vector<YXPART> offset;
		int c_offsLen;
};

#endif