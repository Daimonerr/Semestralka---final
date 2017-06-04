#ifndef TIMER_H
#define TIMER_H

#include <string>
using namespace std;

/*!
* Class representing time in game
*/
class CTimer {
	public:

		/*
		* Constructor
		*/
		CTimer();

		/*
		* Increases 0,02 seconds to game time
		*/
		void addTime();

		/*
		* Returns string in format X:XX
		*/
		string printTime();

		/*
		* Returns miliseconds
		*/
		int getMsec();

		/*
		* Returns current play time in seconds
		*/
		int getPlaytime();

		/*!
		* Returns current time + plusT in seconds
		* @param plusT time in seconds
		*/
		int endTime(const int & plusT);

	private:
		//! representing minutes
		int c_min;
		//! representing seconds
		int c_sec;
		//! representing miliseconds
		int c_msec;
};

#endif