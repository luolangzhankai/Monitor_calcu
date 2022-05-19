//for funtion of monitor

#include"monitor.h"

void Monitor::set_monitor(string name, double w, double h, double size) {
	this->w_pixel = w;
	this->h_pixel = h;
	this->size = size;
	this->monitor_name = name;
}

void Monitor::show_monitor_ratio() {
	double ratio = w_pixel / h_pixel;
	int monitor_ratio = (int)(ratio * 10);
	cout << monitor_name << " 's monitor w/h ratio is: ";
	switch (monitor_ratio) {
	case 35:
		cout << "[32:9]" << endl;
		break;
	case 23:
		cout << "[21:9]" << endl;
		break;
	case 20:
		cout << "[18:9]" << endl;
		break;
	case 17:
		cout << "[16:9]" << endl;
		break;
	case 16:
		cout << "[16:10]" << endl;
		break;
	case 15:
		cout << "[3:2]" << endl;
		break;
	case 13:
		cout << "[4:3]" << endl;
		break;
	}
	cout << endl;
}

void Monitor::show_monitor_ppi()
{
	double monSize_cm = inch_to_cm * size;
	double ppi = sqrt(w_pixel * w_pixel + h_pixel * h_pixel) / size;
	double rate = w_pixel / h_pixel;
	double arc = atan(rate);// in π/2,not 90°
	double sin_arc = sin(arc);
	double cos_arc = cos(arc);
	double longside = sin_arc * monSize_cm;
	double widesize = cos_arc * monSize_cm;
	double area = longside * widesize;

	cout << "monitor's size is:       [" << size << "] inch; "<< endl;
	cout << "monitor's piexl is:      [" << w_pixel << " * " << h_pixel <<"] " << endl;
	cout << "monitor's size is:       [" << fixed << setprecision(1) << longside << "cm * ";
	cout << fixed << setprecision(1) << widesize << "cm]" << endl;
	cout << "monitor's area is:       [" << fixed << setprecision(1) << area << "]cm^2" << endl;
	cout << "ppi:[" << ppi <<"]" << endl;
	
	cout << endl;

	cout << "when use 125%, logically shows: [ " << w_pixel / 1.25 << "*" << h_pixel / 1.25 << " ]" << endl;
	cout << "when use 150%, logically shows: [ " << w_pixel / 1.50 << "*" << h_pixel / 1.50 << " ]" << endl;
	cout << "when use 175%, logically shows: [ " << w_pixel / 1.75 << "*" << h_pixel / 1.75 << " ]" << endl;
	cout << "when use 200%, logically shows: [ " << w_pixel / 2.00 << "*" << h_pixel / 2.00 << " ]" << endl;
	//cout << " " << endl;
}

void Monitor::show_all_info()
{
	show_monitor_ratio();
	show_monitor_ppi();
	cout << "-------------------------------------------" << endl <<endl;
}

void show_hello() {
	cout << endl;
	cout << "        Input num,show computer info" << endl << endl;
}

void show_table() {
	cout << "	+-----+-----------------------+-----------+------+" << endl;
	cout << "	| num | model                 | pixel     | size |" << endl;
	cout << "	+-----+-----------------------+-----------+------+" << endl;
	cout << "	|  1  | R7000P                | 1920*1080 | 15.6 |" << endl;
	cout << "	|  2  | Y410P                 | 1920*1080 | 15.6 |" << endl;
	cout << "	|  3  | redmibookpro15_3_2k   | 3000*2000 | 15.6 |" << endl;
	cout << "	|  4  | Magic_book_14         | 1920*1080 | 14   |" << endl;
	cout << "	+-----+-----------------------+-----------+------+" << endl;
}
