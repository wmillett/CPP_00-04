#include "WrongAnimal.hpp"

    WrongAnimal::WrongAnimal(){
        std::cout << "Default WrongAnimal constructor called" << std::endl;
        type = "Default WrongAnimal";
    };
    WrongAnimal::WrongAnimal(const std::string newType) : type(newType){
         std::cout << "Default WrongAnimal parameter constructor called" << std::endl;
    };
    WrongAnimal::WrongAnimal(const WrongAnimal& other){
         std::cout << "Default WrongAnimal copy constructor called" << std::endl;
        *this = other;
    };
    WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
         std::cout << "Default WrongAnimal copy assignment operator called" << std::endl;
        if (this != &other){
            this->type = other.type;
        }
        return *this;
    };
    WrongAnimal::~WrongAnimal(){
         std::cout << "Default WrongAnimal destructor called" << std::endl;
    };

    void WrongAnimal::makeSound(){
       std::cout << "(default WrongAnimal noise)" << std::endl;
    };
