//Title: food.cpp
//Author: Celestine Sumah
//Date: 12/18/2024
//Description: implementing the header file

#include "food.h"

// Constructor
Food::Food(){
    m_calories = 0;
    m_protien = 0;
    m_ammount = "";
    m_name = "";
}

//Implement Getters here
string Food::GetName(){
    return m_name;
}
string Food::GetAmmount(){
    return m_ammount;
}
int Food::GetCalories(){
    return m_calories;
}
int Food::GetProtein(){
    return m_protien;
}

//Implement Setters here
void Food::SetName(string name){
    m_name = name;
}
void Food::SetAmmount(string amnt){
    m_ammount = amnt;
}
void Food::SetCalories(int calories){
    m_calories = calories;
}
void Food::SetProtien(int protien){
    m_protien = protien;
}