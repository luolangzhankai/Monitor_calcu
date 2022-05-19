#include <iostream>
#include"../monitor.h"
using namespace std;
int main() {
	show_hello();
	show_table();
	//already added:
	//R7000P,Y410P,R9000P,MacBook_Air_2020
	Monitor R7000P,Y410P,R9000P,MacBook_Air_2020,Philip_2k,ipad_Pro_2017,redmibookpro15_3_2k, Magic_book_14;
	R7000P.set_monitor("R7000P", 1920, 1080, 15.6);
	Y410P.set_monitor("Y410P", 1600, 900, 14);
	R9000P.set_monitor("R9000P", 2560, 1600, 16.1);
	MacBook_Air_2020.set_monitor("MacBook_Air_2020", 2560, 1600, 13.3);
	Philip_2k.set_monitor("Philip_2k", 2560, 1440, 23.8);
	ipad_Pro_2017.set_monitor("ipad_Pro_2017", 2732, 2048, 12.9);
	redmibookpro15_3_2k.set_monitor("redmibookpro15_3.2k", 3200, 2000, 15.6);
	Magic_book_14.set_monitor("Magic_book_14", 1920, 1080, 14.0);
	int in_put=0;
	while (cin >> in_put) {
		cout << endl;
		cout << "-------------------------------------------" << endl;
		switch (in_put)
		{
		case 1:
			R7000P.show_all_info();
			break;
		case 2:
			Y410P.show_all_info();
			break;
		case 3:
			redmibookpro15_3_2k.show_all_info();
			break;
		case 4:
			Magic_book_14.show_all_info();
			break;
		}
	}
}