#include "Bike.h"

Bike::Bike(std::string id, std::string brand, float price, VehicleType type, float milage, BikeType btype)
    :Vehicle(id,brand,price,type),_bike_mileage(milage),_bike_type(btype)
{
}

Bike::Bike(std::string id, std::string brand, VehicleType type, float milage, BikeType btype)
    :Vehicle(id,brand,type),_bike_mileage(milage),_bike_type(btype)
{
}

std::ostream &operator<<(std::ostream &os, const Bike &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _bike_mileage: " << rhs._bike_mileage
       << " _bike_type: " << DisplayEnum(rhs._bike_type);
    return os;
}

std::string DisplayEnum(const BikeType value)
{
    if(value==BikeType::SPORTS)
    {
        return "SPORTS";
    }
    else if(value==BikeType::ATV)
    {
        return "ATV";
    }
    else 
    {
        return "COMMUTE";
    }
}

float Bike::CalculateTax()
{
    
    return 0.0f;
}
