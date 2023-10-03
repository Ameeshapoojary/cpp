#ifndef FUNCTIONALITIE_H
#define FUNCTIONALITIE_H

#include<iostream>
#include"Car.h"

void CreateObj(Car* arr[3]);

float AvgPrice(Car* arr[3]);

//demo of calculate Tax
void CallCalculateTax(Car* arr[3]);

//Function to delete the memory in the heap
void FreeMemory(Car* arr[3]);

#endif // FUNCTIONALITIE_H
