#ifndef FUNCTIONALITIE_H
#define FUNCTIONALITIE_H

#include<iostream>
#include"Car.h"
#include"Vehicle.h"

void CreateObj(Vehicle* arr[3]);

float AvgPrice(Vehicle* arr[3]);

//demo of calculate Tax
void CallCalculateTax(Vehicle* arr[3]);

//Function to delete the memory in the heap
void FreeMemory(Vehicle* arr[3]);

#endif // FUNCTIONALITIE_H
