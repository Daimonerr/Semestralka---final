#include "bullet.h"

CBullet::CBullet(const int & y, const int & x, const char & bChar): CObject(y,x,bChar) 
{} 

bool CBullet::moveO()
{
	clearO();
	if ( ! isCollision())
	{
		c_posY -= 1;	
		printO();
		return true;
	}
	return false;
}

bool CBullet::isCollision()const
{
	if (c_posY == 2)
	{
		return true;
	}

	return false;	
}
