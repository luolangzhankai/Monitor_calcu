#include <iostream>
#include"../monitor.h"
using namespace std;
int main() {
	cout << endl << welcome_word << endl << endl;

	Monitor m1;
	m1.set_monitor("R7000P", 1920, 1080, 15.6);
	m1.show_monitor();

}