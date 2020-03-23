#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Time{

private:
    int hour, minute, second;
public:
    Time(int hour, int minute, int second){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    Time(int duration){
        this->hour = duration / 3600;
        this->minute = (duration % 3600) / 60;
        this->second = duration % 60;  
    }

    int getHour(){ return hour; }

    int getMinute(){ return minute; }

    int getSecond(){ return second; }

    int getDuration(){ return (hour * 3600) + (minute * 60) + second; }

    void setHour(int h){
        this->hour = h;
    }

    void setMinute(int m){
        this->minute = m;
    }

    void setSecond(int s){
        this->second = s;
    }

    Time add(Time other){
        Time tmp(getDuration() + other.getDuration());
        // tmp.hour += other.hour + this->hour;
        // tmp.minute += other.minute + this->minute;
        // tmp.second += other.second + this->second;
        if (tmp.getDuration() > 86400){
            return tmp.getDuration() - 86400;
        }
        else{
            return tmp.getDuration();
        }
        
    }

    int subtract(Time other){
        Time tmp(getDuration() - other.getDuration());
        // tmp.hour += this->hour - other.hour;
        // tmp.minute += this->minute - other.minute;
        // tmp.second += this->second - other.second;
        if (tmp.getDuration() < 0){
            return 86400 + tmp.getDuration();
        }
        else{
            return tmp.getDuration();
        }
    }

    int equals(Time other){
        if (getDuration() == other.getDuration()){
            return 1;
        }
        else{
            return 0;
        }
    }

    string toString(){
        string hr, min, sec;
        if (hour >= 10){
            hr = to_string(hour);
        }
        else{
            hr = '0' + to_string(hour);
        }
        if (minute >= 10){
            min = to_string(minute);
        }
        else{
            min = '0' + to_string(minute);
        }
        if (second >= 10){
            sec = to_string(second);
        }
        else{
            sec = '0' + to_string(second);
        }
        return hr + ":" + min + ":" + sec;

    }

};

int main(){
    Time t1(02, 02, 02);
    Time t2(86400);
    Time t3(0), t4(0);
    t3 = t1.add(t2);
    t4 = t2.subtract(t1);
    cout << t1.getDuration() << endl;
    cout << t2.getSecond() << endl;
    cout << t3.getDuration() << endl;
    cout << t4.getDuration() << endl;
    cout << t1.equals(t2) << endl;
    cout << t3.toString() << endl;
    cout << t4.toString() << endl;
}