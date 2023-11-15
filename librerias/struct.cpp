#include <iostream>
#include <string>


// Creo un struct para guardar las variante
struct persona{
    std::string nombre, ocupacion;
    int edad, tiempo, sueldo, dineroa;
};





class ahorros{
    
   
    public:
    
    ahorros(){
    persona login;
    
    //HAGO QUE TE PIDAN LOS DATOS
    std::cout << "Ingrese su nombre" << std::endl;
    std::cin >> login.nombre;

    std::cout << "Ingrese su edad" << std::endl;
    std::cin >> login.edad;
    
    std::cout << "Ingrese su ocupacion" << std::endl;
    std::cin >> login.ocupacion;
    
    std::cout << "Ingrese su sueldo" << std::endl;
    std::cin >> login.sueldo;
    
    
    std::cout << "tu tiempo para jubilarte es:" << std::endl;
    login.tiempo = 60 - login.edad;
    if(login.tiempo > 59){
        
        std::cout << "usted ya esta retirado" << std::endl;
    }else{
        std::cout << login.tiempo;
        std::cout << " años" << std::endl;
    }
    
    std::cout << "Tu dinero para tu retiro es:" << std::endl;
    login.dineroa= (login.sueldo * 12) * login.tiempo;
    
    std::cout << login.dineroa;
    std::cout << " pesos";
    }

};


int main(){
    
  ahorros();

}
