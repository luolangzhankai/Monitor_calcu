// .h for monitor.cpp
#define welcome_word "-----Use this project to calculate you monitor for more infomation-----"

#include<iostream>
#include<cmath>
#include <iomanip>

const double inch_to_cm = 2.54;

using namespace std;

class Monitor {
public:
	string monitor_name;
	Monitor() {}
	void set_monitor(string name, double w, double h, double size);
	void show_monitor_ratio();
	void show_monitor_ppi();
	void show_all_info();
private:
	double w_pixel;
	double h_pixel;
	double size;
};