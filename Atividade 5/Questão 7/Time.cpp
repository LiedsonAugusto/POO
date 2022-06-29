#include <iostream>
using std::cout;
using std::endl;

//biblioteca que permite alguns controles sobre a saída
#include <iomanip>
using std::setfill; 
using std::setw;

#include "Time.h"


Time::Time(){
    time(&t);
    tempo_formatado = gmtime(&t);
    second = tempo_formatado->tm_sec;
    minute = tempo_formatado->tm_min;
    hour = tempo_formatado->tm_hour - 3;
}

Time::Time(int min, int sec)
{
    setTime(min, sec);  
  //qualquer modificação posterior em setTime reflete no construtor
}

void Time::setTime(int m, int s)
{
    setMinute(m);
    setSecond(s);  
}



void Time::setHour(int h)
{
  hour = (h >=0 && h < 24) ? h : 0;     //valida horas
}

//forma 2
inline void Time::setMinute(int m)
{
    minute = (m >= 0 && m < 60) ? m : 0;  //valida minutos
}

void Time::printUniversal()
{
    cout << setfill('0') << setw(2) << getHour() << ":" <<
    setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

void Time::printStandard()
{
    cout << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;
}