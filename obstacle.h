#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "object.h"


class CObstacle : public CObject {
	public:
		CObstacle(const int & y, 
				  const int & x, 
				  const char & cChar);
		virtual ~CObstacle(){};
		virtual bool moveO(CTimer & cntTime);
		virtual bool isCollision()const;
		bool collide(const int & y, 
					 const int & x);
	
	protected:
		int c_obstSpeed;
};

#endif