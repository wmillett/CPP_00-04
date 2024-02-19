#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "Animal.hpp"


class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string newType);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
        virtual ~WrongAnimal();

        void makeSound();
};



#endif