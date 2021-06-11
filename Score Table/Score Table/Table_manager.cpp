#include "Table_manager.h"
#include <algorithm>
#include <vector>
#include <functional>

Table_manager::Table_manager()
{
	Table_mecanics _myTable;
	_myTable.SetNuevoUser(Users("Juan",100));
	_myTable.SetNuevoUser(Users("Pepe", 200));
	_myTable.SetNuevoUser(Users("Zarlanga:P", 150));
	_myTable.SetNuevoUser(Users("Osmar", 750));
	_myTable.SetNuevoUser(Users("Uberto", 15));
	_myTable.SetNuevoUser(Users("Roger", 450));
	_myTable.SetNuevoUser(Users("Giusepe", 331));
	_myTable.SetNuevoUser(Users("Fausto", 650));
	_myTable.PrintScore();
}
