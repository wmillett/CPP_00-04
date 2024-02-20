#include "Animal.hpp"

    A_Animal::A_Animal(){
        std::cout << "Default A_Animal constructor called" << std::endl;
        type = "Default A_Animal";
    };
    A_Animal::A_Animal(const std::string newType) : type(newType){
         std::cout << "Default A_Animal parameter constructor called" << std::endl;
    };
    A_Animal::A_Animal(const A_Animal& other){
         std::cout << "Default A_Animal copy constructor called" << std::endl;
        *this = other;
    };
    A_Animal& A_Animal::operator=(const A_Animal& other){
         std::cout << "Default A_Animal copy assignment operator called" << std::endl;
        if (this != &other){
            this->type = other.type;
        }
        return *this;
    };
    A_Animal::~A_Animal(){
         std::cout << "Default A_Animal destructor called" << std::endl;
    };

    std::string A_Animal::getType() const{
        return type;
    };
