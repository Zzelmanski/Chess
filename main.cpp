#include <iostream>;
#include <vector>;
#include <SFML/Graphics.hpp>
#include "squares.h"
#include "pieces.h"
using namespace std;


void setText(sf::Text& text, float x, float y) {
	sf::FloatRect textRect = text.getLocalBounds();
	text.setOrigin(textRect.left + textRect.width / 2.0f,
		textRect.top + textRect.height / 2.0f);
	text.setPosition(sf::Vector2f(x, y));
}

int main() {
	bool open = true;

	//set textures
	sf::Texture blackknight;
	blackknight.loadFromFile("images/blackknight.png");
	sf::Texture blackrook;
	blackrook.loadFromFile("images/blackrook.png");
	sf::Texture blackbishop;
	blackbishop.loadFromFile("images/blackbishop.png");
	sf::Texture blackqueen;
	blackqueen.loadFromFile("images/blackqueen.png");
	sf::Texture blackking;
	blackking.loadFromFile("images/blackking.png");
	sf::Texture blackpawn;
	blackpawn.loadFromFile("images/blackpawn.png");
	sf::Texture whiteknight;
	whiteknight.loadFromFile("images/whiteknight.png");
	sf::Texture whiterook;
	whiterook.loadFromFile("images/whiterook.png");
	sf::Texture whitebishop;
	whitebishop.loadFromFile("images/whitebishop.png");
	sf::Texture whitequeen;
	whitequeen.loadFromFile("images/whitequeen.png");
	sf::Texture whiteking;
	whiteking.loadFromFile("images/whiteking.png");
	sf::Texture whitepawn;
	whitepawn.loadFromFile("images/whitepawn.png");
	sf::Texture whitesquare;
	whitesquare.loadFromFile("images/whitesquare.png");
	sf::Texture blacksquare;
	blacksquare.loadFromFile("images/brownsquare.png");
	sf::Texture greycircle;
	greycircle.loadFromFile("images/greycircle.png");

	//initialize board
	vector<squares> board;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			squares newsquare(i, j, true);
			board.push_back(newsquare);
		}
	}

	// piece sprites
	sf::Sprite wking;
	wking.setTexture(whiteking);
	wking.setPosition(sf::Vector2f(300.f, 700.f));
	sf::Sprite wqueen;
	wqueen.setTexture(whitequeen);
	wqueen.setPosition(sf::Vector2f(400.f, 700.f));
	sf::Sprite wbishop1;
	wbishop1.setTexture(whitebishop);
	wbishop1.setPosition(sf::Vector2f(200.f, 700.f));
	sf::Sprite wbishop2;
	wbishop2.setTexture(whitebishop);
	wbishop2.setPosition(sf::Vector2f(500.f, 700.f));
	sf::Sprite wknight1;
	wknight1.setTexture(whiteknight);
	wknight1.setPosition(sf::Vector2f(100.f, 700.f));
	sf::Sprite wknight2;
	wknight2.setTexture(whiteknight);
	wknight2.setPosition(sf::Vector2f(600.f, 700.f));
	sf::Sprite wrook1;
	wrook1.setTexture(whiterook);
	wrook1.setPosition(sf::Vector2f(0.f, 700.f));
	sf::Sprite wrook2;
	wrook2.setTexture(whiterook);
	wrook2.setPosition(sf::Vector2f(700.f, 700.f));
	sf::Sprite wpawn1;
	wpawn1.setTexture(whitepawn);
	wpawn1.setPosition(sf::Vector2f(0.f, 600.f));
	sf::Sprite wpawn2;
	wpawn2.setTexture(whitepawn);
	wpawn2.setPosition(sf::Vector2f(100.f, 600.f));
	sf::Sprite wpawn3;
	wpawn3.setTexture(whitepawn);
	wpawn3.setPosition(sf::Vector2f(200.f, 600.f));
	sf::Sprite wpawn4;
	wpawn4.setTexture(whitepawn);
	wpawn4.setPosition(sf::Vector2f(300.f, 600.f));
	sf::Sprite wpawn5;
	wpawn5.setTexture(whitepawn);
	wpawn5.setPosition(sf::Vector2f(400.f, 600.f));
	sf::Sprite wpawn6;
	wpawn6.setTexture(whitepawn);
	wpawn6.setPosition(sf::Vector2f(500.f, 600.f));
	sf::Sprite wpawn7;
	wpawn7.setTexture(whitepawn);
	wpawn7.setPosition(sf::Vector2f(600.f, 600.f));
	sf::Sprite wpawn8;
	wpawn8.setTexture(whitepawn);
	wpawn8.setPosition(sf::Vector2f(700.f, 600.f));

	sf::Sprite bking;
	bking.setTexture(blackking);
	bking.setPosition(sf::Vector2f(300.f, 000.f));
	sf::Sprite bqueen;
	bqueen.setTexture(blackqueen);
	bqueen.setPosition(sf::Vector2f(400.f, 000.f));
	sf::Sprite bbishop1;
	bbishop1.setTexture(blackbishop);
	bbishop1.setPosition(sf::Vector2f(200.f, 000.f));
	sf::Sprite bbishop2;
	bbishop2.setTexture(blackbishop);
	bbishop2.setPosition(sf::Vector2f(500.f, 00.f));
	sf::Sprite bknight1;
	bknight1.setTexture(blackknight);
	bknight1.setPosition(sf::Vector2f(100.f, 00.f));
	sf::Sprite bknight2;
	bknight2.setTexture(blackknight);
	bknight2.setPosition(sf::Vector2f(600.f, 00.f));
	sf::Sprite brook1;
	brook1.setTexture(blackrook);
	brook1.setPosition(sf::Vector2f(0.f, 00.f));
	sf::Sprite brook2;
	brook2.setTexture(blackrook);
	brook2.setPosition(sf::Vector2f(700.f, 00.f));
	sf::Sprite bpawn1;
	bpawn1.setTexture(blackpawn);
	bpawn1.setPosition(sf::Vector2f(0.f, 100.f));
	sf::Sprite bpawn2;
	bpawn2.setTexture(blackpawn);
	bpawn2.setPosition(sf::Vector2f(100.f, 100.f));
	sf::Sprite bpawn3;
	bpawn3.setTexture(blackpawn);
	bpawn3.setPosition(sf::Vector2f(200.f, 100.f));
	sf::Sprite bpawn4;
	bpawn4.setTexture(blackpawn);
	bpawn4.setPosition(sf::Vector2f(300.f, 100.f));
	sf::Sprite bpawn5;
	bpawn5.setTexture(blackpawn);
	bpawn5.setPosition(sf::Vector2f(400.f, 100.f));
	sf::Sprite bpawn6;
	bpawn6.setTexture(blackpawn);
	bpawn6.setPosition(sf::Vector2f(500.f, 100.f));
	sf::Sprite bpawn7;
	bpawn7.setTexture(blackpawn);
	bpawn7.setPosition(sf::Vector2f(600.f, 100.f));
	sf::Sprite bpawn8;
	bpawn8.setTexture(blackpawn);
	bpawn8.setPosition(sf::Vector2f(700.f, 100.f));

	//piece objects
	vector<pieces> Pieces;
	pawn blackpawn1(true, false, "black", "pawn", 1, 0, true);
	Pieces.push_back(blackpawn1);
	pawn blackpawn2(true, false, "black", "pawn", 1, 1, true);
	Pieces.push_back(blackpawn2);
	pawn blackpawn3(true, false, "black", "pawn", 1, 2, true);
	Pieces.push_back(blackpawn3);
	pawn blackpawn4(true, false, "black", "pawn", 1, 3, true);
	Pieces.push_back(blackpawn4);
	pawn blackpawn5(true, false, "black", "pawn", 1, 4, true);
	Pieces.push_back(blackpawn5);
	pawn blackpawn6(true, false, "black", "pawn", 1, 5, true);
	Pieces.push_back(blackpawn6);
	pawn blackpawn7(true, false, "black", "pawn", 1, 6, true);
	Pieces.push_back(blackpawn7);
	pawn blackpawn8(true, false, "black", "pawn", 1, 7, true);
	Pieces.push_back(blackpawn8);

	pawn whitepawn1(true, false, "white", "pawn", 6, 0, true);
	Pieces.push_back(whitepawn1);
	pawn whitepawn2(true, false, "white", "pawn", 6, 1, true);
	Pieces.push_back(whitepawn2);
	pawn whitepawn3(true, false, "white", "pawn", 6, 2, true);
	Pieces.push_back(whitepawn3);
	pawn whitepawn4(true, false, "white", "pawn", 6, 3, true);
	Pieces.push_back(whitepawn4);
	pawn whitepawn5(true, false, "white", "pawn", 6, 4, true);
	Pieces.push_back(whitepawn5);
	pawn whitepawn6(true, false, "white", "pawn", 6, 5, true);
	Pieces.push_back(whitepawn6);
	pawn whitepawn7(true, false, "white", "pawn", 6, 6, true);
	Pieces.push_back(whitepawn7);
	pawn whitepawn8(true, false, "white", "pawn", 6, 7, true);
	Pieces.push_back(whitepawn8);

	//open window
	sf::RenderWindow gamewindow(sf::VideoMode(800, 800), "Game Window");

	while (gamewindow.isOpen()) {
		
		// set board
		gamewindow.clear(sf::Color::Blue);
		for (int i = 0; i < board.size(); i++) {
			sf::Sprite square;
			if (board.at(i).color == "white") {
				square.setTexture(whitesquare);
			}
			else {
				square.setTexture(blacksquare);
			}
			square.setPosition(sf::Vector2f(((board.at(i).col) ) * 100, ((board.at(i).row) ) * 100));

			gamewindow.draw(square);
		}
		
		//events
		sf::Event event;
		while (gamewindow.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				gamewindow.close();
			}
			else if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					int x = event.mouseButton.x;
					int y = event.mouseButton.y;
					int clickedrow = y / 100;
					int clickedcol = x / 100;
					float clickedrowf = clickedrow * 1.0;
					float clickedcolf = clickedcol * 1.0;
					//cout << "row: " << clickedrow << " Col: " << clickedcol << endl;
					for (int i = 0; i < board.size(); i++) {
						if ((clickedrow == board.at(i).row) && (clickedcol == board.at(i).col)) {
							for (int j = 0; j < Pieces.size(); j++) {
								if ((clickedrow == Pieces.at(j).curr_row) && (clickedcol == Pieces.at(j).curr_col)) {
									//cout << "row: " << clickedrowf << " Col: " << clickedcolf << " Piece: " << Pieces.at(j).clicked << endl;
									if (!Pieces.at(j).clicked) {
										for (int k = 0; k < Pieces.size(); k++) {
											Pieces.at(k).clear();
											Pieces.at(k).clicked = false;
										}
										Pieces.at(j).updateopensquares(clickedrow, clickedcol);
										Pieces.at(j).clicked = true;
									}
									else {
										Pieces.at(j).clear();
										Pieces.at(j).clicked = false;
									}
								}
							}
						}
					}
				}
			}
		}

		for (int i = 0; i < Pieces.size(); i++) {
			if (Pieces.at(i).clicked) {
				for (int j = 0; j < Pieces.at(i).opencol.size(); j++) {
					sf::Sprite movesquare;
					movesquare.setTexture(greycircle);
					movesquare.setPosition(sf::Vector2f(Pieces.at(i).opencol.at(j) * 100.0, Pieces.at(i).openrow.at(j) * 100.0));
					gamewindow.draw(movesquare);
				}
			}
		}

		gamewindow.draw(wking);
		gamewindow.draw(wqueen);
		gamewindow.draw(wbishop1);
		gamewindow.draw(wbishop2);
		gamewindow.draw(wknight1);
		gamewindow.draw(wknight2);
		gamewindow.draw(wrook1);
		gamewindow.draw(wrook2);
		gamewindow.draw(wpawn1);
		gamewindow.draw(wpawn2);
		gamewindow.draw(wpawn3);
		gamewindow.draw(wpawn4);
		gamewindow.draw(wpawn5);
		gamewindow.draw(wpawn6);
		gamewindow.draw(wpawn7);
		gamewindow.draw(wpawn8);

		gamewindow.draw(bking);
		gamewindow.draw(bqueen);
		gamewindow.draw(bbishop1);
		gamewindow.draw(bbishop2);
		gamewindow.draw(bknight1);
		gamewindow.draw(bknight2);
		gamewindow.draw(brook1);
		gamewindow.draw(brook2);
		gamewindow.draw(bpawn1);
		gamewindow.draw(bpawn2);
		gamewindow.draw(bpawn3);
		gamewindow.draw(bpawn4);
		gamewindow.draw(bpawn5);
		gamewindow.draw(bpawn6);
		gamewindow.draw(bpawn7);
		gamewindow.draw(bpawn8);

		gamewindow.display();
	}
	
	//taking turns

	return 0;
}
