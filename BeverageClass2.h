#ifndef BEVERAGE_H
#define BEVERAGE_H
#include <iostream>
#include <string>
#include <iomanip>
#include "MenuClass2.h"

class Beverage: public Menu
{
    public:
    void Item()
    {

    }
    std::string getNameFromUser()
    {
        std::cout << "enter name: ";
        std::string name{};
        std::cin >> name;
        return name;
    }
    int getPriceFromUser()
    {
        std::cout << "enter price: ";
        int price{};
        std::cin >> price;
        return price;
    }
    std::string getTempFromUser()
    {
        std::cout << "enter hot or cold: ";
        std::string temp{};
        std::cin >> temp;
        return temp;
    }
    std::string getOptionFromUser()
    {
        std::cout << "enter dietary specifications: ";
        std::string option{};
        std::cin >> option;
        return option;
    }
    int getCalorieFromUser()
    {
        std::cout << "enter calories: ";
        int calorie{};
        std::cin >> calorie;
        return calorie;
    }

};

#endif