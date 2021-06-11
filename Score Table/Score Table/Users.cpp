#include "Users.h"


Users::Users(string name , int score)
{
	this->name = name;
	this->score = score;
}

int Users::GetScore()
{
	return score;
}

string Users::GetString()
{
	return name;
}

