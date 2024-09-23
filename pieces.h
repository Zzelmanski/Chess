#include <iostream>;
#include <vector>;
#include "squares.h"
using namespace std; 
#pragma once


class pieces {

public:
	bool inplay;
	bool clicked;
	string color;
	string name;
	int curr_row;
	int curr_col;
	bool firstmove;
	vector<int> openrow;
	vector<int> opencol;
	void updateopensquares(int newrow, int newcol);
	void clear();
};

class pawn : public pieces {
public: 
	pawn();
	pawn(bool _inplay, bool _clicked, string _color, string _name, int _curr_row, int _curr_col, bool _firstmove);
};

class rook : public pieces {
public:
	rook();
	rook(bool _inplay, bool _clicked, string _color, string _name, int _curr_row, int _curr_col);
};

class knight : public pieces {
public:
	knight();
	knight(bool _inplay, bool _clicked, string _color, string _name, int _curr_row, int _curr_col);
};

class bishop : public pieces {
public:
	bishop();
	bishop(bool _inplay, bool _clicked, string _color, string _name, int _curr_row, int _curr_col);
};

class queen : public pieces {
public:
	queen();
	queen(bool _inplay, bool _clicked, string _color, string _name, int _curr_row, int _curr_col);
};

class king : public pieces {
public:
	king();
	king(bool _inplay, bool _clicked, string _color, string _name, int _curr_row, int _curr_col);
};
