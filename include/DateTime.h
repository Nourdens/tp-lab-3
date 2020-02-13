#pragma once
#include <string>
#include <ctime>
 
using namespace std;
class DateTime {
private:
	tm date;
	
public:
	DateTime(int day, int month, int year);
	DateTime();
	DateTime(DateTime& date);
	string answer(struct tm&);
	string getToday();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	string getTomorrow();
	string getYesterday();
	unsigned int getDifference(DateTime&);
};

