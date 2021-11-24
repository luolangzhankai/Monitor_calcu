#include <iostream>
#include"../monitor.h"
using namespace std;
int main() {
	cout << endl << welcome_word << endl << endl;

	Monitor R7000P;
	R7000P.set_monitor("R7000P", 1920, 1080, 15.6);
	R7000P.show_all_info();

	Monitor Y410P;
	Y410P.set_monitor("Y410P", 1600, 900, 14);
	Y410P.show_all_info();
}