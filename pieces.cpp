#include <iostream>;
#include <vector>;
#include "pieces.h"
#include "squares.h"
using namespace std;

pawn::pawn() {

}

pawn::pawn(bool _inplay, bool _clicked, string _color, string _name, int _curr_row, int _curr_col, bool _firstmove) {
	inplay = _inplay;
	clicked = _clicked;
	color = _color;
	name = _name;
	curr_row = _curr_row;
	curr_col = _curr_col;
	firstmove = _firstmove;
}

rook::rook() {

}

rook::rook(bool _inplay, bool _clicked, string _color, string _name, int _curr_row, int _curr_col) {
	inplay = _inplay;
	clicked = _clicked;
	color = _color;
	name = _name;
	curr_row = _curr_row;
	curr_col = _curr_col;
}

knight::knight() {

}

knight::knight(bool _inplay, bool _clicked, string _color, string _name, int _curr_row, int _curr_col) {
	inplay = _inplay;
	clicked = _clicked;
	color = _color;
	name = _name;
	curr_row = _curr_row;
	curr_col = _curr_col;
}

bishop::bishop() {

}

bishop::bishop(bool _inplay, bool _clicked, string _color, string _name, int _curr_row, int _curr_col) {
	inplay = _inplay;
	clicked = _clicked;
	color = _color;
	name = _name;
	curr_row = _curr_row;
	curr_col = _curr_col;
}

queen::queen() {

}

queen::queen(bool _inplay, bool _clicked, string _color, string _name, int _curr_row, int _curr_col) {
	inplay = _inplay;
	clicked = _clicked;
	color = _color;
	name = _name;
	curr_row = _curr_row;
	curr_col = _curr_col;
}

king::king() {

}

king::king(bool _inplay, bool _clicked, string _color, string _name, int _curr_row, int _curr_col) {
	inplay = _inplay;
	clicked = _clicked;
	color = _color;
	name = _name;
	curr_row = _curr_row;
	curr_col = _curr_col;
}

void pieces::updateopensquares(int inrow, int incol) {
	if (this->name == "pawn") {
		if (this->firstmove) {
			if (this->color == "black") {
				cout << "1" << endl;
				this->opencol.push_back(incol);
				this->opencol.push_back(incol);
				this->openrow.push_back(inrow + 1);
				this->openrow.push_back(inrow + 2);
			}
			else {
				cout << "2" << endl;
				this->opencol.push_back(incol);
				this->opencol.push_back(incol);
				this->openrow.push_back(inrow - 1);
				this->openrow.push_back(inrow - 2);
			}
		}
		else {
			if (this->color == "black") {
				cout << "3" << endl;
				this->opencol.push_back(incol);
				this->openrow.push_back(inrow + 1);
			}
			else {
				cout << "4" << endl;
				this->opencol.push_back(incol);
				this->openrow.push_back(inrow - 1);
			}
		}
	}
	else if (this->name == "rook") {

	}
	else if (this->name == "knight") {

	}
	else if (this->name == "bishop") {

	}
	else if (this->name == "queen") {

	}
	else if (this->name == "king") {

	}
}

void pieces::clear() {
	this->opencol.clear();
	this->openrow.clear();
}