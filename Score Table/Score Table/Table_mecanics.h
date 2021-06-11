#pragma once
#include <iostream>
#include <vector> 
#include <list>
#include <map> 
#include <algorithm>

#include "Users.h"

class Table_mecanics
{
private:
	bool status;
	map <string, int>table;
	map <string, int>::iterator it;

public:
	void SetStatus(bool status);
	bool GetStatus();
	void PrintMsj();
	void ChekSpace(Users myUser);
	void SetNuevoUser(Users myUser);
	void RemoverUser(string name);
	void PrintScore();
};

