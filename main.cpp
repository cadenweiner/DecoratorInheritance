#include <iostream>
#include <vector>
#include "Employees.h"
#include "Food.h"
#include "Drinks.h"


void SaleCost(Drink *drink); 
void SaleProfit(Drink *drink); 
void TheOrder(Drink *drink); 
void SaleCost(Food *dish);
void SaleProfit(Food *dish);
void TheOrder(Food *dish);

int main()
{
    //Drink *beverage1 = new HouseBlend(); 
    
    Drink *drink1 = new Expresso; 
    std::cout << "I've got a simple drink(concrete component)" << std::endl; 
    TheOrder(drink1); 
    SaleCost(drink1);
    SaleProfit(drink1); 
    /*
    //Drink *decoration1 = new Milk(drink1); //wrap drink 1 with milk// this is one way to wrap
    //Drink *decoration2 = new Whipcream(decoration1); // wrap drink with whip
    Here is the simpler way to wrap. Wrap each drink with decorator components
    */
    drink1 = new Milk(drink1); 
    drink1 = new Soy(drink1); 
    drink1 = new Mocha(drink1); 
    drink1 = new Mocha(drink1); 
    TheOrder(drink1); 
    SaleCost(drink1);
    SaleProfit(drink1); 

    Drink *drink2 = new DarkRoast; 
    std::cout << "I've got a simple drink(concrete component)" << std::endl; 
    TheOrder(drink2); 
    SaleCost(drink2);
    SaleProfit(drink2); 
    drink2 = new Milk(drink2); 
    drink2 = new Whipcream(drink2); 
    drink2 = new Mocha(drink2); 
    drink2 = new Mocha(drink2); 
    TheOrder(drink2); 
    SaleCost(drink2);
    SaleProfit(drink2); 

    Drink *drink3 = new Frappaccino; 
    std::cout << "I've got a simple drink(concrete component)" << std::endl; 
    TheOrder(drink3); 
    SaleCost(drink3);
    SaleProfit(drink3); 
    drink3 = new Milk(drink3); 
    drink3 = new Whipcream(drink3); 
    drink3 = new Mocha(drink3); 
    drink3 = new Peppermint(drink3); 
    TheOrder(drink3); 
    SaleCost(drink3);
    SaleProfit(drink3); 

    Drink *drink4 = new Decaf; 
    std::cout << "I've got a simple drink(concrete component)" << std::endl; 
    TheOrder(drink4); 
    SaleCost(drink4);
    SaleProfit(drink4); 
    drink4 = new Milk(drink4); 
    drink4 = new Whipcream(drink4); 
    drink4 = new Mocha(drink4); 
    drink4 = new Vanilla(drink4); 
    drink4 = new Vanilla(drink4); 
    TheOrder(drink4); 
    SaleCost(drink4);
    SaleProfit(drink4); 


    Employee Rachel(14, 10, "Rachel", "Wokano");
    Rachel.printInfo(); 


    
    Chef Ming(28, 20, "Ming", "Wokano"); 
    Ming.printInfo(); 

    int size = 4; 
    std::string dishes[size] = {"Fried Rice", "Orange Chicken", "Crab Wantons", "Broccoli Beef"}; 
    Ming.set_dishes(dishes); 
    Ming.set_NumberOfDishes(size); 
    Ming.printDishes(); 

    Chef Mao(39, 40, "Mao", "Wokano"); 
    Mao.printInfo(); 

    int MaoSize = 8; 
    std::string MaoDishes[MaoSize] = {"Sushi","Sashimi","Avacado Eggroll","Calamari","Fried Rice", "Orange Chicken", "Crab Wantons", "Broccoli Beef"}; 
    Mao.set_dishes(MaoDishes); 
    Mao.set_NumberOfDishes(MaoSize); 
    Mao.printDishes(); 

    Barista Diona(25, 40, "Diona", "Wokano"); 
    Diona.printInfo(); 
    int DrinkSize = 4; 
    std::string DionaDrinks[DrinkSize] = {"Grape Juice", "Lemonade", "Apple Juice", "Cider"}; 
    Diona.set_drinks(DionaDrinks); 
    Diona.set_NumberOfDrinks(DrinkSize); 
    Diona.printDrinks(); 

    Manager Xiangling(80, 45, "Xiangling", "Wokano", "Let's Get Cooking", 4000, 7000, 8000); 
    Xiangling.printInfo(); 

    Food *dish1 = new Sandwitch; 
    std::cout << "I've got a simple dish(concrete component)" << std::endl; 
    TheOrder(dish1); 
    SaleCost(dish1);
    SaleProfit(dish1); 
    dish1 = new Beef(dish1); 
    dish1 = new Cheese(dish1); 
    dish1 = new Lettuce(dish1); 
    dish1 = new Tomatoe(dish1); 
    TheOrder(dish1); 
    SaleCost(dish1);
    SaleProfit(dish1); 

    Food *dish2 = new Soup; 
    std::cout << "I've got a simple dish(concrete component)" << std::endl; 
    TheOrder(dish2); 
    SaleCost(dish2);
    SaleProfit(dish2); 
    dish2 = new Beef(dish2); 
    dish2 = new Chicken(dish2); 
    dish2 = new Seafood(dish2); 
    TheOrder(dish2); 
    SaleCost(dish2);
    SaleProfit(dish2); 

    Food *dish3 = new Noodles; 
    std::cout << "I've got a simple dish(concrete component)" << std::endl; 
    TheOrder(dish3); 
    SaleCost(dish3);
    SaleProfit(dish3); 
    dish3 = new Beef(dish3); 
    dish3 = new Cheese(dish3); 
    dish3 = new Chicken(dish3); 
    dish3 = new Tomatoe(dish3); 
    TheOrder(dish3); 
    SaleCost(dish3);
    SaleProfit(dish3); 

    Food *dish4 = new Salad; 
    std::cout << "I've got a simple dish(concrete component)" << std::endl; 
    TheOrder(dish4); 
    SaleCost(dish4);
    SaleProfit(dish4); 
    dish4 = new Chicken(dish4); 
    dish4 = new Cheese(dish4); 
    dish4 = new Lettuce(dish4); 
    dish4 = new Tomatoe(dish4); 
    TheOrder(dish4); 
    SaleCost(dish4);
    SaleProfit(dish4); 


    std::vector<Drink *> Beverage; //a vector of drinks
    Beverage.push_back(drink1);//pushes a pointer to the Drink
    Beverage.push_back(drink2);//pushes a pointer to the Drink
    Beverage.push_back(drink3);//pushes a pointer to the Drink
    Beverage.push_back(drink4);//pushes a pointer to the Drink

    std::cout << "Beverage" << std::endl; 
    TheOrder(Beverage.at(0));//prints the value stored at the address contained by the pointer
    TheOrder(Beverage.at(1));//prints the value stored at the address contained by the pointer
    TheOrder(Beverage.at(2));//prints the value stored at the address contained by the pointer
    TheOrder(Beverage.at(3));//prints the value stored at the address contained by the pointer
    
    std::vector<Food *> Meals; 
    Meals.push_back(dish1);//pushes a pointer to the Drink
    Meals.push_back(dish2);//pushes a pointer to the Drink
    Meals.push_back(dish3);//pushes a pointer to the Drink
    Meals.push_back(dish4);//pushes a pointer to the Drink

    std::cout << "Meals" << std::endl; 
    TheOrder(Meals.at(0));//prints the value stored at the address contained by the pointer
    TheOrder(Meals.at(1));//prints the value stored at the address contained by the pointer
    TheOrder(Meals.at(2));//prints the value stored at the address contained by the pointer
    TheOrder(Meals.at(3));//prints the value stored at the address contained by the pointer
    


    delete drink1; 
    delete drink2; 
    delete drink3; 
    delete drink4; 

    delete dish1; 
    delete dish2; 
    delete dish3; 
    delete dish4; 

    return 0; 
}


void SaleCost(Drink *drink)
{
    std::cout << "Cost : " << drink->get_cost() << std::endl; 
}
void SaleProfit(Drink *drink)
{
    std::cout << "Profit : " << drink->get_profit() << std::endl; 
}
void TheOrder(Drink *drink)
{
    std::cout << "The order is: " << drink->get_description() << std::endl; 
}
//overload the function
void SaleCost(Food *dish)
{
    std::cout << "Cost : " << dish->get_cost() << std::endl; 
}
void SaleProfit(Food *dish)
{
    std::cout << "Profit : " << dish->get_profit() << std::endl; 
}
void TheOrder(Food *dish)
{
    std::cout << "The order is: " << dish->get_description() << std::endl; 
}