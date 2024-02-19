#include "Dog.hpp"


   Dog::Dog() : Animal(){
        std::cout << "Default Dog constructor called" << std::endl;
        type = "Dog";
    };
    Dog::Dog(const std::string newType) : Animal(newType){
         std::cout << "Default Dog parameter constructor called" << std::endl;
         type = "Dog";
    };
    Dog::Dog(const Dog& other) : Animal(other){
         std::cout << "Default Dog copy constructor called" << std::endl;
        *this = other;
    };
    Dog& Dog::operator=(const Dog& other){
         std::cout << "Default Dog copy assignment operator called" << std::endl;
        if (this != &other){
            Animal::operator=(other);
        }
        return *this;
    };
    Dog::~Dog(){
         std::cout << "Default Dog destructor called" << std::endl;
    };


    void Dog::makeSound() const{
       std::cout << "Bark" << std::endl;
    };
