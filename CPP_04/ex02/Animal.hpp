#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string newType);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const =0;
};


#endif