#ifndef OBSTACLEA_H
#define OBSTACLEA_H

#include "obstacle.h"

/*!
* Inherited class representing obstacle with straight move
*/
class CObstacleA : public CObstacle {
	public:

		/*!
		* Constructor calls parental CObstacle constructor
		* @param y Y position of core
		* @param x X position of core
		* @param bChar char that represents core
		* @param sp obstacle speed
		*/
		CObstacleA(const int & y, 
				   const int & x, 
				   const char & cChar, 
				   const int & sp);
		
		/*!
		* Move obstacle in its defined direction
		* @param cntTime object that represents time
		*/
		virtual bool moveO(CTimer & cntTime);
};

#endif