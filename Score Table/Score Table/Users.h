#pragma once
#include <iostream>
#include <string>

using namespace std;

class Users
{
private:
	int score;
	string name;
	bool status;

public:

	Users(string name , int score);
	int GetScore();
	string GetString();

};

