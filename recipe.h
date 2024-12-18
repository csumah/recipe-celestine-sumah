//Title: recipe.h
//Author: Celestine Sumah
//Date: 12/18/2024
//Description: driver of the recipie projects

#ifndef RECIPE_H
#define RECIPE_H

#include <fstream>
#include <iostream>
#include <string>
#include "food.h"

using namespace std;

//Constants
const int ITEM_COUNT = 20; // Max number of items in the recipe

class Recipe{
    public:
        Recipe();
        void LoadRecipe();
        void AddItem();
        void DisplayRecipeItems();
        int MainMenu();
        void RecipeTitle(){
            cout << "RRRRRR    EEEEEE  CCCCCC  IIIIII  PPPPPP  EEEEEE " << endl;
            cout << "RR  RR    EE      CC        II    PP  PP  EE     " << endl;
            cout << "RRRR      EEEE    CC        II    PPPPPP  EEEE   " << endl;
            cout << "RR  RR    EE      CC        II    PP      EE     " << endl;
            cout << "RR    RR  EEEEEE  CCCCCC  IIIIII  PP      EEEEEE " << endl;
        }
    private:
        Food m_items [ITEM_COUNT]; // items for the recipe (can be loaded or saved and written to a txt file)
};

#endif //UNTITLED_RECIPE_H
