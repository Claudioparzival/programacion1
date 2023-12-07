#ifndef PROGRAMACION1_LIBRERIA_H
#define PROGRAMACION1_LIBRERIA_H
#include <iostream>

class asegurado {

public:

    asegurado() {

        std::cout << "Ingrese su nombre" << std::endl;
        std::cin >> nombre;

        std::cout << "Ingrese su fecha de nacimiento" << std::endl;
        std::cin >> fechaNacimiento;

        std::cout << "Ingrese su curp" << std::endl;
        std::cin >> curp;

        std::cout << "Ingrese sus enfermedades" << std::endl;
        std::cin >> enfermedades;

        std::cout << "Ingrese presio del seguro" << std::endl;
        std::cin >> presio;

        std::cout << "Ingrese su ID" << std::endl;
        std::cin >> ID;


        this->nombre = nombre;
        this->fechaNacimiento = fechaNacimiento;
        this->curp = curp;
        this->enfermedades = enfermedades;
        this->presio = presio;
        this->ID = ID;

    };




private:

    std::string nombre;
    std::string fechaNacimiento;
    std::string curp;
    std::string enfermedades;
    std::string presio;
    std::string ID;
    std::string nombreNuevo;

};

class PolizaCasa{

public:

    PolizaCasa(){

        std::cout << "Ingrese su dirreccion" << std::endl;
        std::cin >> dirreccion;

        std::cout << "Ingrese el tamaño de su casa" << std::endl;
        std::cin >> TamanoCasa;

        std::cout << "Ingrese el año de construccion" << std::endl;
        std::cin >> AnoConstruccion;


        this-> dirreccion = dirreccion;
        this->TamanoCasa = TamanoCasa;
        this->AnoConstruccion = AnoConstruccion;

    }

private:

    std::string dirreccion;
    std::string TamanoCasa;
    std::string AnoConstruccion;
};

class PolizaVida {

public:

    PolizaVida(){

        std::cout << "Ingrese la enfermedada que usted padece, en el caso de no tener una dejele vacia " << std::endl;
        std::cin >> enfermedad;

        std::cout << "Ingrese su Tipo de sangre" << std::endl;
        std::cin >> TipoSangre;



        this-> enfermedad = enfermedad;
        this->TipoSangre = TipoSangre;



    }

private:

    std::string enfermedad;
    std::string TipoSangre;
};

class PolizaCoche{

public:

    PolizaCoche(){

        std::cout << "Ingrese el año del coche" << std::endl;
        std::cin >> AnoCoche;

        std::cout << "Ingrese El kilometraje" << std::endl;
        std::cin >> kilometraje;

        std::cout << "Ingrese el modelo" << std::endl;
        std::cin >> modelo;

        std::cout << "Ingrese el marca" << std::endl;
        std::cin >> marca;

        std::cout << "Ingrese el numero de serie" << std::endl;
        std::cin >> NumeroSerie;

        std::cout << "Ingrese la placa" << std::endl;
        std::cin >> placa;

        std::cout << "Ingrese el color" << std::endl;
        std::cin >> color;


        this->AnoCoche = AnoCoche;
        this->kilometraje = kilometraje;
        this->modelo = modelo;
        this->NumeroSerie = NumeroSerie;
        this->placa = placa;
        this->color = color;

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

class menu{

public:

    menu(){

        char opcion;

        asegurado();

        std::cout << "Eliga una opcion" << std::endl;
        std::cout << "1. Seguro de Vida" << std::endl;
        std::cout << "2. Seguro de Casa" << std::endl;
        std::cout << "3. Seguro de Coche" << std::endl;
        std::cin >> opcion;



        switch(opcion){

            case '1':

                PolizaVida();

                break;

            case '2':

                PolizaCasa();

                break;

            case '3':

                PolizaCoche();

                break;

        }



    }
};


#endif //PROGRAMACION1_LIBRERIA_H



































