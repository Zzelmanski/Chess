#include <iostream>;
#include <vector>;
using namespace std; 
#pragma once


class squares {
public: 
	int row;
	int col;
	bool open;
	string color;
	squares(int _row, int _col, bool _open);
};
