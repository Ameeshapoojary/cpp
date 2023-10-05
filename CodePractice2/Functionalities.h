#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include"Car.h"

void CreateObj(Car* arr[3]);


float AvgFuelCapacity(Car* arr[3]);

int FindCountOfGivenBrand(Car* arr[3],CarCategory category );

void FindBestPassengerCar(Car* arr[3],CarCategory category );

void FreeMemory(Car* arr[3]);


#endif // FUNCTIONALITIES_H
