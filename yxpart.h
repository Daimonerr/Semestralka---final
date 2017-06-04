#ifndef YXPART_H
#define YXPART_H


class YXPART {
	public:
		YXPART(const int & y, 
			   const int & x, 
			   const char & c);
		int offsY;
		int offsX;
		char offsChar;
};

#endif