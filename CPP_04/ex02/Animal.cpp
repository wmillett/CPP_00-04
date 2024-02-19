#include "Animal.hpp"

    Animal::Animal(){
        std::cout << "Default animal constructor called" << std::endl;
        type = "Default animal";
    };
    Animal::Animal(const std::string newType) : type(newType){
         std::cout << "Default animal parameter constructor called" << std::endl;
    };
    Animal::Animal(const Animal& other){
         std::cout << "Default animal copy constructor called" << std::endl;
        *this = other;
    };
    Animal& Animal::operator=(const Animal& other){
         std::cout << "Default animal copy assignment operator called" << std::endl;
        if (this != &other){
            this->type = other.type;
        }
        return *this;
    };
    Animal::~Animal(){
         std::cout << "Default animal destructor called" << std::endl;
    };

    std::string Animal::getType() const{
        return type;
    };
