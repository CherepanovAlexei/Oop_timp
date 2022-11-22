#include "Flower.h"
void flower::In_Data(ifstream& ifst) {
	ifst >> name;
	int a;
	ifst >> a;
	switch (a)
	{
	case 1:
		t = domestic;
		break;
	case 2:
		t = garden;
		break;
	case 3:
		t = wild;
		break;
	}
}

void flower::Out_Data(ofstream& ofst) {
	ofst << "Name: " << name << endl;
	switch (t)
	{
	case 0:
		ofst << "It is a flower. It's domestic." << endl;
		break;
	case 1:
		ofst << "It is a flower. It's garden." << endl;
		break;
	case 2:
		ofst << "It is a flower. It's wild." << endl;
		break;
	}
}