#include "Brain.hpp"

    Brain::Brain(){
        std::cout << "Default Brain constructor called" << std::endl;
         for(int i = 0; i < 100; i++){
            this->ideas[i] = IDEA;
        }
    };
    Brain::Brain(const Brain& other){
         std::cout << "Default Brain copy constructor called" << std::endl;
        *this = other;
    };
    Brain& Brain::operator=(const Brain& other){
         std::cout << "Default Brain copy assignment operator called" << std::endl;
        if (this != &other){
            for (int i = 0; i < 100; ++i) {
                ideas[i] = other.ideas[i];
            }
        }
        return *this;
    };

    Brain::~Brain(){
         std::cout << "Default Brain destructor called" << std::endl;
    };