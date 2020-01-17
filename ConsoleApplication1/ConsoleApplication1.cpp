// ConsoleApplication1.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include <vector>
using namespace std;

void main() {
	
	   
	class Time {
	private:
		int hour;
		int minute;
		int second;  
		

	public:
		Time() { hour = 0; minute = 0; second = 0; }

		int getHour(void) { return hour; }
		int getMinute(void) { return minute; }
		int getSecond(void) { return second; }
		void setHour(int h) { hour = h; }
		void setMinute(int m) { minute = m; }
		void setSecond(int s) { second = s; }

	};


	class EnglishTime :  Time {

	public:

	    using Time::setHour;

		EnglishTime(void) {
			setHour(0); setMinute(0); setSecond(0);
		}

		EnglishTime(int h, int m, int s) {
			if (h >= 0 && h <= 23) setHour(h); else setHour(0);
			if (m >= 0 && m <= 59) setMinute(m); else setMinute(0);
			if (s >= 0 && s <= 59) setSecond(s); else setSecond(0);
		}

		void setHour(int h, bool pm) {
			if (pm) {
				if (h >= 1 && h < 12) setHour(h + 12); if (h == 12) setHour(12);
			}
			else
			{// AM 
				if (h >= 1 && h <= 12) setHour(h);
			}
		}
	};

	EnglishTime t1;
	

	EnglishTime* times[10] ;
	//times = new Time[12];
	
	times[0] = &t1;
	//return 0;


	vector<EnglishTime*> myvect;
	myvect[0] = &t1;
}


