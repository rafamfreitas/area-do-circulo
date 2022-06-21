/*
 * areacirculo.cpp
 *
 *  Created on: 13 de ago. de 2021
 *      Author: raton
 */
#include <iostream>

int main(int argc, char** argv) {

	int area;
	float pi;
	int raio;

	pi = 3.1415;

	printf("Qual o raio do seu círculo? \n");
	scanf("%d", &raio);

	area = pi * (raio*raio);

	printf("A área do seu círculo é de %d", area);
	printf("m².");

}


