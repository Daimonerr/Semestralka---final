#ifndef OBSTACLEB_H
#define OBSTACLEB_H

#include "obstacleA.h"

/*!
* Inherited class representing obstacle with sine move
*/
class CObstacleB : public CObstacle {
	public:

		/*!
		* Constructor calls parental CObstacle constructor
		* @param y Y position of core
		* @param x X position of core
		* @param bChar char that represents core
		* @param sp obstacle speed
		*/
		CObstacleB(const int & y, 
				   const int & x, 
				   const char & cChar, 
				   const int & sp);
		
		/*!
		* Move obstacle in its defined direction
		* @param cntTime object that represents time
		*/
		virtual bool moveO(CTimer & cntTime);

	private:
		//! variable that play part in obstacle move
		int c_direction;
		//! decides if posX increases or decreases
		int c_flip;
};

#endif