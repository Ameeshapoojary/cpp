/*
A function to create the 3 onj on the heap
*/

#ifndef FUNCTIONALITITIES_H
#define FUNCTIONALITITIES_H
#include<iostream>
#include"vehicle.h"

/*
Function to create 3 obj on the heap and store their address in the container array
*/
void CreateObjects(Vehicle* container[3]);
/*
function to find avg of price values of 3 obj in the container array
*/
float AveragePrice(Vehicle* container[3]);
#endif // FUNCTIONALITITIES_H
