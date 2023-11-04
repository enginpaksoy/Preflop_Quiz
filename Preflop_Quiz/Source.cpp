#include <iostream>
#include "Preflop_Quiz.h"

string card[] = { "A", "K", "Q", "J", "T", "9", "8", "7", "6", "5", "4", "3", "2" };
string color[] = { "spade", "diamond", "club", "heart" };
string position[] = { "Small Blind", "Big Blind", "Under the Gun", "Middle Position", "Cut Off", "Button" };
char response;
char a;

random_device rd;
mt19937 gen(rd());

uniform_int_distribution<int> dist1(0, sizeof(card) / sizeof(card[0]) - 1);
uniform_int_distribution<int> dist2(0, sizeof(color) / sizeof(color[0]) - 1);
uniform_int_distribution<int> dist3(0, sizeof(position) / sizeof(position[0]) - 1);
uniform_int_distribution<int> dist4(0, sizeof(card) / sizeof(card[0]) - 1);
uniform_int_distribution<int> dist5(0, sizeof(color) / sizeof(color[0]) - 1);

int randomIndex1 = dist1(gen);
int randomIndex2 = dist2(gen);
int randomIndex3 = dist3(gen);
int randomIndex4 = dist4(gen);
int randomIndex5 = dist5(gen);

string element1 = card[randomIndex1];
string element2 = color[randomIndex2];
string element3 = position[randomIndex3];
string element4 = card[randomIndex4];
string element5 = color[randomIndex5];

void finish()
{
	cin >> a;
}

void fold()
{
	if (response == 'r' || response == 'R')cout << "FALSE, LOOK AT THE BIBLE" << endl;
	if (response == 'f' || response == 'F')cout << "CONGRATULATIONS" << endl;
};

void small_blind()
{
	if (element1 == element4 && element2 != element4 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "A" || element4 == "A") && element2 == element4 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "A" || element1 == "K") && (element4 == "K" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "Q") && (element4 == "Q" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "J") && (element4 == "J" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "T") && (element4 == "T" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "9") && (element4 == "9" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "8") && (element4 == "8" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "7") && (element4 == "7" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "6") && (element4 == "6" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "5") && (element4 == "5" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "4") && (element4 == "4" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "3") && (element4 == "3" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "2") && (element4 == "2" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "A" || element1 == "Q") && (element4 == "Q" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "Q") && (element4 == "Q" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "J") && (element4 == "J" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "T") && (element4 == "T" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "9") && (element4 == "9" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "8") && (element4 == "8" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "7") && (element4 == "7" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "6") && (element4 == "6" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "5") && (element4 == "5" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "4") && (element4 == "4" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "3") && (element4 == "3" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "2") && (element4 == "2" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "A" || element1 == "J") && (element4 == "J" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "J") && (element4 == "J" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "J") && (element4 == "J" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "J" || element1 == "T") && (element4 == "T" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "J" || element1 == "9") && (element4 == "9" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "J" || element1 == "8") && (element4 == "8" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "J" || element1 == "7") && (element4 == "7" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "J" || element1 == "6") && (element4 == "6" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "J" || element1 == "5") && (element4 == "5" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "J" || element1 == "4") && (element4 == "4" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "J" || element1 == "3") && (element4 == "3" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "J" || element1 == "2") && (element4 == "2" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "A" || element1 == "T") && (element4 == "T" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "T") && (element4 == "T" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "T") && (element4 == "T" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "J" || element1 == "T") && (element4 == "T" || element4 == "J") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "T" || element1 == "9") && (element4 == "9" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "T" || element1 == "8") && (element4 == "8" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "T" || element1 == "7") && (element4 == "7" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "T" || element1 == "6") && (element4 == "6" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "T" || element1 == "5") && (element4 == "5" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "T" || element1 == "4") && (element4 == "4" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "A" || element1 == "9") && (element4 == "9" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "9") && (element4 == "9" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "9") && (element4 == "9" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "J" || element1 == "9") && (element4 == "9" || element4 == "J") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "T" || element1 == "9") && (element4 == "9" || element4 == "T") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "T" || element1 == "7") && (element4 == "7" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "T" || element1 == "6") && (element4 == "6" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "T" || element1 == "5") && (element4 == "5" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "T" || element1 == "4") && (element4 == "4" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "A" || element1 == "9") && (element4 == "9" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "9") && (element4 == "9" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "9") && (element4 == "9" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "J" || element1 == "9") && (element4 == "9" || element4 == "J") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "T" || element1 == "9") && (element4 == "9" || element4 == "T") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "9" || element1 == "8") && (element4 == "8" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "9" || element1 == "7") && (element4 == "7" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "9" || element1 == "6") && (element4 == "6" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "9" || element1 == "5") && (element4 == "5" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "9" || element1 == "4") && (element4 == "4" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "A" || element1 == "8") && (element4 == "8" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "8") && (element4 == "8" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "Q" || element1 == "8") && (element4 == "8" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "J" || element1 == "8") && (element4 == "8" || element4 == "J") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "T" || element1 == "8") && (element4 == "8" || element4 == "T") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "9" || element1 == "8") && (element4 == "8" || element4 == "9") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "8" || element1 == "7") && (element4 == "7" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "8" || element1 == "6") && (element4 == "6" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "8" || element1 == "5") && (element4 == "5" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "8" || element1 == "4") && (element4 == "4" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "8" || element1 == "3") && (element4 == "3" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "A" || element1 == "7") && (element4 == "7" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "7") && (element4 == "7" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "Q" || element1 == "7") && (element4 == "7" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "J" || element1 == "7") && (element4 == "7" || element4 == "J") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "T" || element1 == "7") && (element4 == "7" || element4 == "T") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "9" || element1 == "7") && (element4 == "7" || element4 == "9") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "8" || element1 == "7") && (element4 == "7" || element4 == "8") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "7" || element1 == "6") && (element4 == "6" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "7" || element1 == "5") && (element4 == "5" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "7" || element1 == "4") && (element4 == "4" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "7" || element1 == "3") && (element4 == "3" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "A" || element1 == "6") && (element4 == "6" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "6") && (element4 == "6" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "Q" || element1 == "6") && (element4 == "6" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "9" || element1 == "6") && (element4 == "6" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "8" || element1 == "6") && (element4 == "6" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "7" || element1 == "6") && (element4 == "6" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "6" || element1 == "5") && (element4 == "5" || element4 == "6") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "6" || element1 == "4") && (element4 == "4" || element4 == "6") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "6" || element1 == "3") && (element4 == "3" || element4 == "6") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "A" || element1 == "5") && (element4 == "5" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "5") && (element4 == "5" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "6" || element1 == "5") && (element4 == "5" || element4 == "6") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "5" || element1 == "4") && (element4 == "4" || element4 == "5") && element2 == element5 && (response == 'r' || response == 'R'))cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "5" || element1 == "3") && (element4 == "3" || element4 == "5") && element2 == element5 && (response == 'r' || response == 'R')) cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "5" || element1 == "2") && (element4 == "2" || element4 == "5") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F')) cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "A" || element1 == "4") && (element4 == "4" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R')) cout << "CONGRATULATIONS" << endl;
	else if ((element1 == "K" || element1 == "4") && (element4 == "4" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F')) cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "5" || element1 == "4") && (element4 == "4" || element4 == "5") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F')) cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "4" || element1 == "3") && (element4 == "3" || element4 == "4") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F')) cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "4" || element1 == "2") && (element4 == "2" || element4 == "4") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F')) cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "A" || element1 == "3") && (element4 == "3" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F')) cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "K" || element1 == "3") && (element4 == "3" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F')) cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "3" || element1 == "2") && (element4 == "2" || element4 == "3") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F')) cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "A" || element1 == "2") && (element4 == "2" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F')) cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else if ((element1 == "K" || element1 == "2") && (element4 == "2" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F')) cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
	else
	{
		fold();
	}
	finish();
};