#include <iostream>;
#include <vector>;
#include "squares.h"
using namespace std;


squares::squares(int _row, int _col, bool _open) {
	row = _row;
	col = _col;
	open = _open;
	if ((row + col) % 2 == 1) {
		this->color = "black";
	}
	else {
		this->color = "white";
	}
}