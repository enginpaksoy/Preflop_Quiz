#ifndef HEADER_H
#define HEADER_H
#pragma once
using namespace std;
#include <random>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

void fold();
void small_blind();
void finish();

extern string card[];
extern string color[];
extern string position[];
extern char response;
extern char a;

extern random_device rd;
extern mt19937 gen;

extern uniform_int_distribution<int> dist1;
extern uniform_int_distribution<int> dist2;
extern uniform_int_distribution<int> dist3;
extern uniform_int_distribution<int> dist4;
extern uniform_int_distribution<int> dist5;

extern int randomIndex1;
extern int randomIndex2;
extern int randomIndex3;
extern int randomIndex4;
extern int randomIndex5;

extern string element1;
extern string element2;
extern string element3;
extern string element4;
extern string element5;

#endif
