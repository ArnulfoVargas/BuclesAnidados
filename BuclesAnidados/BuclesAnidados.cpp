// BuclesAnidados.cpp : Vargas Mejia Arnulfo
// Este programa contendra dos bucles anidados que haran una cuenta interna y otra externa

#include <iostream>
#include <windows.h>

int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) {
			std::cout << "[" << i << "] " << "[" << j << "] " << std::endl;
			Sleep(777);
		}
		std::cout << std::endl;
	}
}