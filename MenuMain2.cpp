#include "MenuClass2.h"
#include "BeverageClass2.h"
#include "MenuColour.h"
#include <string>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
    std::cout << "Beverages: " << "\n";
    Beverage new_beverage;

    std::string name = new_beverage.getNameFromUser();
    int price = new_beverage.getPriceFromUser();
    std::string temp = new_beverage.getTempFromUser();
    std::string option = new_beverage.getOptionFromUser();
    int calorie = new_beverage.getCalorieFromUser();

    /*new_beverage.name;
    new_beverage.price;
    new_beverage.temp;
    new_beverage.option;
    new_beverage.calorie;*/

    new_beverage.Item();

    ofstream MenuFile("Menu.txt", ofstream::app);
    MenuFile << name << " " << price << " " << temp << " " << option << " " << calorie << endl;
    MenuFile.close();
    std::string menuText;
    ifstream MenuReadFile("Menu.txt");
    while(getline (MenuReadFile, menuText))
    {
        cout << menuText << "\n";
    }
    MenuReadFile.close();

    Color::Modifier red(Color::FG_RED);
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier blue(Color::FG_BLUE);
    std::cout << red << "beverage: " << "\n";

    std::cout << blue << std::left << std::setw(15) << name << std::left << std::setw(5) << price <<
    std::left << std::setw(5) << temp << std::left << std::setw(15) << option << std::left << std::setw(5) << calorie << std::endl;
    return 0;
}