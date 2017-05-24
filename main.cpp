#include <cstdio>
#include <iostream>
#include "SQLite\sqlite3.h"


int main()
{
	int iCount = 5;
	
	for (int i = 0; i < iCount; i++) {
	
		std::cout << "Hello.. this app was written on Microsoft Visual Studio." << std::endl;
	}
    
	char a_break;

	std::cin >> a_break;

	std::cout << "Good bye!" << std::endl;
    return 0;
}