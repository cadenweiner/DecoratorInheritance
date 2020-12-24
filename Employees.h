#include <iostream>


class Employee {
public: 
    ~Employee(){}
    Employee(double wage, double hours, std::string newName, std::string newBuisness)
    {
         this->buisness = newBuisness; 
         this->name = newName; 
         this->wage = wage; 
         this->hours = hours;
     }
    Employee();
    void printInfo()
    {
        std::cout << "This is an Employee: " << name << std::endl; 
    } 
    void set_wage(double wage)
    {
        this->wage = wage; 
    } 
    void set_hours(double hours)
    {
        this->hours = hours; 
    }
    void set_name(std::string name)
    {
        this->name = name; 
    }
    void set_buisness(std::string buisness)
    {
        this->buisness = buisness; 
    }
    double get_wage()
    {
        return (*this).wage; 
    } 
    double get_hours()
    {
        return (*this).hours = hours; 
    }
    std::string get_name()
    {
        return (*this).name = name; 
    }
    std::string get_buisness()
    {
        return (*this).buisness = buisness; 
    }
private: 
    double wage; 
    double hours; 
    std::string name;  
    std::string buisness;   
}; 

class Chef : public Employee{
public: 
    Chef(double wage, double hours, std::string newName, std::string newBuisness): Employee(wage, hours, newName, newBuisness)
    {
        std::cout << "The Chef Constructor Uses the Employee constructor" << std::endl; 
    }
    Chef(); 
    void printInfo()
    {
        std::cout << "This is a Chef: " << this->get_name() << ". A chef can create many wonderful dishes. "<< std::endl; 
    } 
    void set_dishes(std::string *Dishes)
    {
        (this->Dishes) = Dishes; 
    }
    void set_NumberOfDishes(int size)
    {
        this->NumOfDishes = size; 
    } 
    std::string * get_dishes()
    {
        return this->Dishes; 
    }
    int get_size()
    {
        return this->NumOfDishes; 
    }
    void printDishes()
    {
        std::cout << "The dishes cooked by the chef are: " << std::endl; 
        for(int i =0; i < this->NumOfDishes; i++)
        {
            std::cout << Dishes[i] << std::endl;
        }

    }
private: 
    int NumOfDishes; 
    std::string *Dishes; 
}; 

class Barista : public Employee{
public: 
    Barista(double wage, double hours, std::string newName, std::string newBuisness): Employee(wage, hours, newName, newBuisness)
    {
        std::cout << "The Barista Constructor Uses the Employee constructor" << std::endl; 
    }
    Barista(); 
    void printInfo()
    {
        std::cout << "This is a Barista: " << this->get_name() << ". A barista can make many drinks. "<< std::endl; 
    } 
    void set_drinks(std::string *Drinks)
    {
        (this->Drinks) = Drinks; 
    }
    void set_NumberOfDrinks(int size)
    {
        this->NumOfDrinks = size; 
    } 
    std::string* get_drinks()
    {
        return this->Drinks; 
    }
    int get_size()
    {
        return this->NumOfDrinks; 
    }
    void printDrinks()
    {
        std::cout << "The drinks made by the barista are: " << std::endl; 
        for(int i =0; i < this->NumOfDrinks; i++)
        {
            std::cout << Drinks[i] << std::endl;
        }

    }
private: 
    int NumOfDrinks; 
    std::string *Drinks; 
}; 


class Manager : public Employee{
public: 
    Manager(double wage, double hours, std::string newName, std::string newBuisness, std::string catchphrase, int rent, int suppliesCost, int employeeCost): Employee(wage, hours, newName, newBuisness)
    {
        this->catchprase = catchprase; 
        this->rent = rent; 
        this->employeeCost = employeeCost; 
        this->suppliesCost = suppliesCost; 
        std::cout << "The Manager Constructor Uses the Employee constructor" << std::endl; 
    }
    Manager(); 
    void printInfo()
    {
        std::cout << "This is a Manager: " << this->get_name() << ". A Manager is in charge. " << catchprase << std::endl; 
        std::cout << "It costs " << rent << " for rent, " << suppliesCost << " for supplies, " << employeeCost << " for employees. In total the price of running the buisness each month is " << suppliesCost + rent + employeeCost << std::endl; 
    } 


private: 
    int rent; 
    int suppliesCost; 
    int employeeCost; 
    std::string catchprase; 
}; 
