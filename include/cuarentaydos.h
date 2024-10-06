//
// Created by luca on 05/10/24.
//

#ifndef CUARENTAYDOS_H
#define CUARENTAYDOS_H
#include <iostream>
#include <vector>

    class GestorEnteros {
    private:
        std::vector<int> enteros;

    public:
        // Constructor
        GestorEnteros();

        // Método para leer enteros desde la entrada hasta que se ingrese 42
        void leerEnteros();

        // Método para imprimir los enteros ingresados hasta que se encuentre el valor 42
        void imprimirEnteros() const;
    };

#endif //CUARENTAYDOS_H
