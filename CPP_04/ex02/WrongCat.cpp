#include "WrongCat.hpp"


  WrongCat::WrongCat() : WrongAnimal(){
        std::cout << "Default WrongCat constructor called" << std::endl;
        type = "WrongCat";
    };
    WrongCat::WrongCat(const std::string newType) : WrongAnimal(newType){
         std::cout << "Default WrongCat parameter constructor called" << std::endl;
         type = "WrongCat";
    };
    WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
         std::cout << "Default WrongCat copy constructor called" << std::endl;
        *this = other;
    };
    WrongCat& WrongCat::operator=(const WrongCat& other){
         std::cout << "Default WrongCat copy assignment operator called" << std::endl;
        if (this != &other){
            WrongAnimal::operator=(other);
        }
        return *this;
    };
    WrongCat::~WrongCat(){
         std::cout << "Default WrongCat destructor called" << std::endl;
    };

    void WrongCat::makeSound() const{
       std::cout << "Meow" << std::endl;
    };
