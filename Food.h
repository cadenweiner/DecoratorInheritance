#include <iostream> 

class Food{ // component
    public: 
    virtual ~Food(){}
    virtual double get_cost() const = 0;     
    virtual double get_profit() const = 0;    
    virtual std::string get_description() const = 0; 
}; 

class Soup : public Food{ //concrete component
    public: 
    double get_cost() const override
    {
        return 4.00; 
    }
    double get_profit() const override
    {
        return 1.25; 
    }
    virtual std::string get_description() const override
    {
        return " Soup "; 
    }    
};

class Salad : public Food{ //concrete component
    public: 
    double get_cost() const override
    {
        return 6; 
    }
    double get_profit() const override
    {
        return 2.45; 
    }
    virtual std::string get_description() const override
    {
        return " Salad "; 
    }    

};

class Sandwitch : public Food{ //concrete component
    public: 
    double get_cost() const override
    {
        return 7.50; 
    }
    double get_profit() const override
    {
        return 2.5; 
    }
    virtual std::string get_description() const override
    {
        return " Sandwitch "; 
    }    

}; 

class Noodles : public Food{ //concrete component
    public: 
    double get_cost() const override
    {
        return 12; 
    }
    double get_profit() const override
    {
        return 4.25; 
    }
    virtual std::string get_description() const override
    {
        return " Noodles "; 
    }    
};

class DecoratorF : public Food{ //Decorator
    public: 
    DecoratorF(Food *food) : food_(food)
    {
    }
    double get_cost() const override
    {
        return this->food_->get_cost(); 
    }
    double get_profit() const override
    {
        return this->food_->get_profit();  
    }
    virtual std::string get_description() const override
    {
        return this->food_->get_description(); 
    }    
    protected: 
    Food * food_; 
};

class Chicken: public DecoratorF{//concrete decorator
    public: 
    Chicken(Food * food) : DecoratorF(food)
    {
    }
    double get_cost() const override
    {
        return 2.50 + DecoratorF::get_cost(); 
    }
    double get_profit() const override
    {
        return .5 + DecoratorF::get_profit(); 
    }
    virtual std::string get_description() const override
    {
        return " Chicken " + DecoratorF::get_description(); 
    }    
};

class Beef: public DecoratorF{//concrete decorator 2
    public: 
    Beef(Food * food) : DecoratorF(food)
    {
    }
    double get_cost() const override
    {
        return 3.25 + DecoratorF::get_cost(); 
    }
    double get_profit() const override
    {
        return .75 + DecoratorF::get_profit(); 
    }
    virtual std::string get_description() const override
    {
        return " Beef " + DecoratorF::get_description(); 
    }    
};

class Lettuce: public DecoratorF{//concrete decorator 2
    public: 
    Lettuce(Food * food) : DecoratorF(food)
    {
    }
    double get_cost() const override
    {
        return .45 + DecoratorF::get_cost(); 
    }
    double get_profit() const override
    {
        return .10 + DecoratorF::get_profit(); 
    }
    virtual std::string get_description() const override
    {
        return " Lettuce " + DecoratorF::get_description(); 
    }    
};

class Cheese: public DecoratorF{//concrete decorator 2
    public: 
    Cheese(Food * food) : DecoratorF(food)
    {
    }
    double get_cost() const override
    {
        return .15 + DecoratorF::get_cost(); 
    }
    double get_profit() const override
    {
        return .5 + DecoratorF::get_profit(); 
    }
    virtual std::string get_description() const override
    {
        return " Cheese " + DecoratorF::get_description(); 
    }    
};

class Tomatoe: public DecoratorF{//concrete decorator 2
    public: 
    Tomatoe(Food * food) : DecoratorF(food)
    {
    }
    double get_cost() const override
    {
        return .60 + DecoratorF::get_cost(); 
    }
    double get_profit() const override
    {
        return .28 + DecoratorF::get_profit(); 
    }
    virtual std::string get_description() const override
    {
        return " Tomatoe " + DecoratorF::get_description(); 
    }    
};

class Seafood: public DecoratorF{//concrete decorator 2
    public: 
    Seafood(Food * food) : DecoratorF(food)
    {
    }
    double get_cost() const override
    {
        return 4.75 + DecoratorF::get_cost(); 
    }
    double get_profit() const override
    {
        return 2.14 + DecoratorF::get_profit(); 
    }
    virtual std::string get_description() const override
    {
        return " Seafood " + DecoratorF::get_description(); 
    }    
};