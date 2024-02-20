#ifndef Animal_HPP
# define Animal_HPP

# include <iostream>
# include "Brain.hpp"

class A_Animal {
    protected:
        std::string type;
    public:
        A_Animal();
        A_Animal(const std::string newType);
        A_Animal(const A_Animal& other);
        A_Animal& operator=(const A_Animal& other);
        virtual ~A_Animal();
        std::string getType() const;
        virtual void makeSound() const =0;
};


#endif