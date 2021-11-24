// .h for monitor.cpp
#define welcome_word "---- Use this project to calculate you monitor for more infomation. ----"

#include<iostream>
using namespace std;
class Monitor {
public:
	string monitor_name;
	Monitor() {}
	void set_monitor(string name, double w, double h, double size);
	void show_monitor();

private:
	double w_pixel;
	double h_pixel;
	double size;
};