#ifndef BULLET_H
#define BULLET_H

#include "obstacleC.h"

/*!
* Inherited class representing bullet
*/
class CBullet : public CObject {
	public:
		
		/*!
		* Constructor that calls CObject constructor
		* @param y Y position of core
		* @param x X position of core
		* @param bChar char that represents core
		*/
		CBullet(const int & y, 
				const int & x, 
				const char & bChar);

		/*!
		* Moves up with bullet 
		*/
		virtual bool moveO();

		/*!
		* Returns true if bullet is about to fly out of the map
		*/
		virtual bool isCollision()const;
};

#endif