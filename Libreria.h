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

class PolizaCasa{

public:

    PolizaCasa(){

        std::cout << "Ingrese su dirreccion" << endl;
        std::cin >> dirreccion;

        std::cout << "Ingrese el tamaño de su casa" << endl;
        std::cin >> TamanoCasa;

        std::cout << "Ingrese el año de construccion" << endl;
        std::cin >> AnoConstruccion;

    }

private:

    std::string dirreccion;
    std::string TamanoCasa;
    std::string AnoConstruccion;
};

class PolizaVida {

public:

    PolizaVida(){

        std::cout << "Ingrese la enfermedada que usted padece, en el caso de no tener una dejele vacia " << endl;
        std::cin >> enfermedad;

        std::cout << "Ingrese su Tipo de sangre" << endl;
        std::cin >> TipoSangre;

        std::cout << "Ingrese el año de construccion" << endl;
        std::cin >> AnoConstruccion;

    }
};

class PolizaCoche{

public:

    PolizaCoche(){

        std::cout << "Ingrese el año del coche" << endl;
        std::cin >> AnoCoche;

        std::cout << "Ingrese El kilometraje" << endl;
        std::cin >> kilometraje;

        std::cout << "Ingrese el modelo" << endl;
        std::cin >> modelo;

        std::cout << "Ingrese el marca" << endl;
        std::cin >> marca;

        std::cout << "Ingrese el numero de serie" << endl;
        std::cin >> NumeroSerie;

        std::cout << "Ingrese la placa" << endl;
        std::cin >> placa;

        std::cout << "Ingrese el color" << endl;
        std::cin >> color;

    }

private:

    std::string AnoCoche;
    std::string kilometraje;
    std::string  modelo;
    std::string marca;
    std::string NumeroSerie;
    std::string placa;
    std::string color;

};
Class menu(){

    public:

    menu(){

        asegurados();

        std::cout << "Eliga una opcion" << std::endl;
        std::cout << "1. Seguro de Vida" << std::endl;
        std::cout << "2. Segur de Casa" << std::endl;
        std::cout << "3. Seguro de Coche" << std::endl;
        std::cin >> a;

        if(a=1){
            PolizaVida();
        }

        if(a=2){
            PolizaCasa();
        }

        if(a=3){
            PolizaCoche();
        }

        if(a=q){
            return 0;
        }


    }
}





#endif //PROGRAMACION1_LIBRERIA_H





































