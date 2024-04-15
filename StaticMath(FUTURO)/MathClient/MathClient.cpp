#include <iostream>

// Se incluye la librería MathLibrary.h // que contiene la función `predecirFuturo`.
#include "../MathLibrary/MathLibrary.h"

int main() {
	// Se declara una variable `nombre` de tipo `std::string` para almacenar el nombre del usuario.
	std::string nombre;

	// Se declara una variable `edad` de tipo `int` para almacenar la edad del usuario.
	int edad;

	// Se solicita al usuario que introduzca su nombre.
	std::cout << "Introduce como te llamas: ";
	std::cin >> nombre;

	// Se solicita al usuario que introduzca su edad.
	std::cout << "Introduce cuantos anos tienes: ";
	std::cin >> edad;

	// Se llama a la función `predecirFuturo` con los datos del usuario y se guarda el resultado en la variable `prediccion`.
	std::string prediccion = predecirFuturo(nombre, edad);

	// Se muestra la predicción al usuario.
	std::cout << prediccion << std::endl;

	// Se retorna 0 para indicar que el programa ha finalizado correctamente.
	return 0;
}
