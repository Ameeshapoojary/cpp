#include "Car.h"
std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "carChassisNumber: " << rhs.carChassisNumber
       << " carBrand: " << rhs.carBrand
       << " carModel: " << rhs.carModel
       << " carCategory: " << DisplayEnum(rhs.carCategory)
       << " carPrice: " << rhs.carPrice
       << " carSeatCount: " << rhs.carSeatCount
       << " carFuelCapacity: " << rhs.carFuelCapacity;
    return os;
}
std::string DisplayEnum(const CarCategory value)
{
    if(value==CarCategory::SEDAN)
    {
        return "SEDAN";
    }
    else if(value==CarCategory::SPORTS_HATCHBACK)
    {
        return "SPORTS_HATCHBACK";
    }
    else
    {
        return "SUV";
    }
}

Car::Car(std::string chassisNumber, std::string brand, std::string model, CarCategory category, float price, int seatCount, int fuelCapacity)
:carChassisNumber(chassisNumber),carBrand(brand),carModel(model),carCategory(category),carPrice(price),carSeatCount(seatCount),carFuelCapacity(fuelCapacity)
{
}

Car::Car(std::string chassisNumber, std::string brand, std::string model, float price)
:carChassisNumber(chassisNumber),carBrand(brand),carModel(model),carPrice(price)

{
}
