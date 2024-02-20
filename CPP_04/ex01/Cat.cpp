#include "Cat.hpp"

    Cat::Cat() : Animal(){
        std::cout << "Default Cat constructor called" << std::endl;
        type = "Cat";
        inHead = new Brain();
    };
    // Cat::Cat(const std::string newType) : Animal(newType){
    //      std::cout << "Default Cat parameter constructor called" << std::endl;
    //      type = "Cat";
    //      inHead = new Brain();
    // };
    Cat::Cat(const Cat& other) : Animal(other){
         std::cout << "Default Cat copy constructor called" << std::endl;
        inHead = NULL;
        *this = other;
    };
    Cat& Cat::operator=(const Cat& other){
         std::cout << "Default Cat copy assignment operator called" << std::endl;
        if (this != &other)
        {
            if(this->inHead){
                delete inHead;
                inHead = NULL;
            }
            if (other.inHead){
                this->inHead = new Brain();
                for(int i = 0; i < 100; i++){
                    this->inHead->ideas[i] = other.inHead->ideas[i];
                }
            }
        }
        return *this;
    };
    Cat::~Cat(){
        delete inHead;
         std::cout << "Default Cat destructor called" << std::endl;
    };


    void Cat::makeSound() const{
       std::cout << "Meow" << std::endl;
    };
    