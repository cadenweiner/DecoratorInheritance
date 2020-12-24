#include <iostream> 

class Drink{ // component
    public: 
    virtual ~Drink(){}
    virtual double get_cost() const = 0;     
    virtual double get_profit() const = 0;    
    virtual std::string get_description() const = 0; 
}; 

class Expresso : public Drink{ //concrete component
    public: 
    double get_cost() const override
    {
        return .99; 
    }
    double get_profit() const override
    {
        return .39; 
    }
    virtual std::string get_description() const override
    {
        return " Expresso "; 
    }    
};

class DarkRoast : public Drink{ //concrete component
    public: 
    double get_cost() const override
    {
        return 1.09; 
    }
    double get_profit() const override
    {
        return .45; 
    }
    virtual std::string get_description() const override
    {
        return " DarkRoast "; 
    }    

};

class Decaf : public Drink{ //concrete component
    public: 
    double get_cost() const override
    {
        return .88; 
    }
    double get_profit() const override
    {
        return .23; 
    }
    virtual std::string get_description() const override
    {
        return " Decaf "; 
    }    

}; 

class Frappaccino : public Drink{ //concrete component
    public: 
    double get_cost() const override
    {
        return 2.45; 
    }
    double get_profit() const override
    {
        return .85; 
    }
    virtual std::string get_description() const override
    {
        return " Frappaccino "; 
    }    
};

class Decorator : public Drink{ //Decorator
    public: 
    Decorator(Drink *drink) : drink_(drink)
    {
    }
    double get_cost() const override
    {
        return this->drink_->get_cost(); 
    }
    double get_profit() const override
    {
        return this->drink_->get_profit();  
    }
    virtual std::string get_description() const override
    {
        return this->drink_->get_description(); 
    }    
    protected: 
    Drink * drink_; 
};

class Milk: public Decorator{//concrete decorator
    public: 
    Milk(Drink * drink) : Decorator(drink)
    {
    }
    double get_cost() const override
    {
        return .19 + Decorator::get_cost(); 
    }
    double get_profit() const override
    {
        return .7 + Decorator::get_profit(); 
    }
    virtual std::string get_description() const override
    {
        return " Milk " + Decorator::get_description(); 
    }    
};

class Whipcream: public Decorator{//concrete decorator 2
    public: 
    Whipcream(Drink * drink) : Decorator(drink)
    {
    }
    double get_cost() const override
    {
        return .29 + Decorator::get_cost(); 
    }
    double get_profit() const override
    {
        return .12 + Decorator::get_profit(); 
    }
    virtual std::string get_description() const override
    {
        return " Whipcream " + Decorator::get_description(); 
    }    
};

class Mocha: public Decorator{//concrete decorator 2
    public: 
    Mocha(Drink * drink) : Decorator(drink)
    {
    }
    double get_cost() const override
    {
        return .45 + Decorator::get_cost(); 
    }
    double get_profit() const override
    {
        return .23 + Decorator::get_profit(); 
    }
    virtual std::string get_description() const override
    {
        return " Mocha " + Decorator::get_description(); 
    }    
};

class Soy: public Decorator{//concrete decorator 2
    public: 
    Soy(Drink * drink) : Decorator(drink)
    {
    }
    double get_cost() const override
    {
        return .15 + Decorator::get_cost(); 
    }
    double get_profit() const override
    {
        return .5 + Decorator::get_profit(); 
    }
    virtual std::string get_description() const override
    {
        return " Soy " + Decorator::get_description(); 
    }    
};

class Peppermint: public Decorator{//concrete decorator 2
    public: 
    Peppermint(Drink * drink) : Decorator(drink)
    {
    }
    double get_cost() const override
    {
        return .50 + Decorator::get_cost(); 
    }
    double get_profit() const override
    {
        return .19 + Decorator::get_profit(); 
    }
    virtual std::string get_description() const override
    {
        return " Peppermint " + Decorator::get_description(); 
    }    
};

class Vanilla: public Decorator{//concrete decorator 2
    public: 
    Vanilla(Drink * drink) : Decorator(drink)
    {
    }
    double get_cost() const override
    {
        return .40 + Decorator::get_cost(); 
    }
    double get_profit() const override
    {
        return .14 + Decorator::get_profit(); 
    }
    virtual std::string get_description() const override
    {
        return " Vanilla " + Decorator::get_description(); 
    }    
};