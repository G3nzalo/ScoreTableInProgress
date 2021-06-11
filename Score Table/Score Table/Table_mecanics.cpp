#include "Table_mecanics.h"

#include <algorithm>
#include <vector>
#include <functional>


void Table_mecanics::SetStatus(bool status)
{
	this->status = status;
}

bool Table_mecanics::GetStatus()
{
	return status;
}

void Table_mecanics::PrintMsj()
{
	if (status)
	{
		cout << "Gracias por jugar" << endl;
	}
	else
	{
		cout << "El nombre de usuario ya fue creado!\n" << "Por favor use otro nombre";
	}
}

void Table_mecanics::ChekSpace(Users myUser)
{
	if (table.find(myUser.GetString()) == table.end())
	{
		SetStatus(true);
	}
	else
	{
		SetStatus(false);
	}
}

void Table_mecanics::SetNuevoUser(Users myUser)
{
	ChekSpace(myUser);

	if (GetStatus())
	{
		table[myUser.GetString()] = myUser.GetScore();
		PrintMsj();
	}
	else
	{
		PrintMsj();
	}
}



void Table_mecanics::RemoverUser(string name)
{
	it = table.find(name);
	table.erase(it);
}

void Table_mecanics::PrintScore()
{
		cout <<endl<<"******My Table******"<< endl;
		for (auto it = table.begin(); it != table.end(); it++)
		{
			cout << "Name: " << it->first << "// Points: " << it->second << endl;
		}
}


