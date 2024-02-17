#include "Cat.hpp"

    Cat::Cat() : Animal(){
        std::cout << "Default Cat constructor called" << std::endl;
        type = "Cat";
    };
    Cat::Cat(const std::string newType) : Animal(newType){
         std::cout << "Default Cat parameter constructor called" << std::endl;
         type = "Cat";
    };
    Cat::Cat(const Cat& other) : Animal(other){
         std::cout << "Default Cat copy constructor called" << std::endl;
        *this = other;
    };
    Cat& Cat::operator=(const Cat& other){
         std::cout << "Default Cat copy assignment operator called" << std::endl;
        if (this != &other){
            Animal::operator=(other);
        }
        return *this;
    };
    Cat::~Cat(){
         std::cout << "Default Cat destructor called" << std::endl;
    };


    void Cat::makeSound(){
       std::cout << "Meow" << std::endl;
    };
    