/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dice.cpp
 * Author: Juan
 * 
 * Created on July 27, 2018, 1:12 PM
 */

#include "Dice.h"

//Default Constructor
Dice::Dice() {
    d1=d2=d3=d4=d5=0;
}

Dice::Dice(const Dice& orig) {
}

Dice::~Dice() {
    
}

//Setter Functions
void Dice::setD1(){
   d1=rand()%6+1; 
}
void Dice::setD2(){
    d2=rand()%6+1;
}
void Dice::setD3(){
    d3=rand()%6+1;
}
void Dice::setD4(){
    d4=rand()%6+1;
}
void Dice::setD5(){
    d5=rand()%6+1;
}

//Getter Functions
int Dice::getD1(){
    return d1;
}
int Dice::getD2(){
    return d2;
}
int Dice::getD3(){
    return d3;
}
int Dice::getD4(){
    return d4;
}
int Dice::getD5(){
    return d5;
}


//Game Functions
void Dice::roll(){
    int dice1=rand()%6+1;
    int dice2=rand()%6+1;
    int dice3=rand()%6+1;
    int dice4=rand()%6+1;
    int dice5=rand()%6+1;
    
    d1=rand()%6+1;
    d2=rand()%6+1;
    d3=rand()%6+1;
    d4=rand()%6+1;
    d5=rand()%6+1;
}
void Dice::display(){
    cout<<d1<<" "<<d2<<" "<<d3<<" "<<d4<<" "<<d5<<endl;
}
int Dice::sum(){
   int sum;
   sum+=d1+d2+d3+d4+d5;
   return sum;
}


