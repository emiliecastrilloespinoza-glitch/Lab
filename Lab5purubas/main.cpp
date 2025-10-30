#include <iostream>
#include <memory>
#include <vector>
#include "Shape.h"
#include "Square.h"


int main()
{
	Shape* soyUnaFigura = new Square(2.0);

	double resultado = soyUnaFigura->calculateArea();

	std::cout <<"Hola, el area de un cuadrado de base 2 es de !\n";
	std::cout << resultado << std::endl;
	return 0;
}