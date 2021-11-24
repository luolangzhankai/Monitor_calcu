//for funtion of monitor

#include"monitor.h"

void Monitor::set_monitor(string name, double w, double h, double size) {
	this->w_pixel = w;
	this->h_pixel = h;
	this->size = size;
	this->monitor_name = name;
}

void Monitor::show_monitor() {
	double ratio = w_pixel / h_pixel;
	int monitor_ratio = (int)(ratio * 10);
	cout << monitor_name << " 's monitor w/h ratio is: ";
	switch (monitor_ratio) {
	case 35:
		cout << "32:9 " << endl;
		break;
	case 23:
		cout << "21:9 " << endl;
		break;
	case 20:
		cout << "18:9 " << endl;
		break;
	case 17:
		cout << "16:9 " << endl;
		break;
	case 16:
		cout << "16:10 " << endl;
		break;
	case 15:
		cout << "3:2 " << endl;
		break;
	case 13:
		cout << "4:3 " << endl;
		break;
	}
}