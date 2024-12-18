//Title: food.h
//Author: Celestine Sumah
//Date: 12/18/2024
//Description: This is the header file for food.cpp

#ifndef FOOD_H
#define FOOD_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Food{
    public:
    // Name: Recipe (default constructor)
    // Desc: Creates a new recipe
    // Preconditions: None
    // Postconditions: Creates a new recipe with empty values
    Food();

    void SetName(string name);
    void SetAmmount(string amnt);
    void SetCalories(int calories);
    void SetProtien(int protien);
    string GetName();
    string GetAmmount();
    int GetCalories();
    int GetProtein();

    private:
        string m_name; // The name of the recipie
        string m_ammount; // The ammount like 1/H cup or teaspoon
        int m_calories; // The ammount of calories
        int m_protien; // The ammount of protien in grams

};


#endif //FOOD_H
