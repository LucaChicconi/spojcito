//
// Created by luca on 05/10/24.
//
#include <iostream>
#include <vector>
#include "../include/cuarentaydos.h"
using namespace std;
vector<int> enteros;

// src/cuarentaydos.cpp

GestorEnteros::GestorEnteros() {
    enteros = vector<int>(1000000, 0); // Inicializamos el vector con tamaño 1000000
}

void GestorEnteros::leerEnteros() {
    int x;
    int i = 0;

    while (x != 42 && i < 1000000) {
        std::cin >> x;
        enteros[i] = x;
        if (x == 42) {
            break;
        }
        i++;
    }
}

void GestorEnteros::imprimirEnteros() const {
    for (int i = 0; i < enteros.size(); i++) {
        if (enteros[i] == 42) {
            break;
        }
        std::cout << enteros[i] << std::endl;
    }
}
