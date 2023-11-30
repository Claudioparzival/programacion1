//
// Created by Alumnos on 30/11/2023.
//

#ifndef PROGRAMACION1_LIBRERIA_H
#define PROGRAMACION1_LIBRERIA_H
#include <iostream>


class asegurado {

public:

    asegurado() {

        std::cout << "Ingrese su nombre" << endl;
        std::cin >> nombre;

        std::cout << "Ingrese su fecha de nacimiento" << endl;
        std::cin >> fechaNacimiento;

        std::cout << "Ingrese su curp" << endl;
        std::cin >> curp;

        std::cout << "Ingrese sus enfermedades" << endl;
        std::cin >> enfermedades;

        std::cout << "Ingrese presio del seguro" << endl;
        std::cin << presio;

        std::cout << "Ingrese su ID" << endl;
        std::cin << ID;


        this->nombre = nombre;
        this->fechaNacimiento = fechaNacimiento;
        this->curp = curp;
        this->enfermedades = enfermedades;
        this->presio = presio;
        this->ID = ID;

    };

    void cambiarNombre(std::nombreNuevo){
        this->nombre=nombreNuevo;
    }


private:

    std::string nombre;
    std::string fechaNacimiento;
    std::string curp;
    std::string enfermedades;
    std::string presio;
    std::string ID;

};





#endif //PROGRAMACION1_LIBRERIA_H





































