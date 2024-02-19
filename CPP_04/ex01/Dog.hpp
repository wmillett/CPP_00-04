#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal{

 private:
        Brain* inHead;
 public:
        Dog();
        Dog(const std::string newType);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();

        void makeSound() const;

};



#endif