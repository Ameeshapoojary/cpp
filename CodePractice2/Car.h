#ifndef CAR_H
#define CAR_H
#include<iostream>
#include"CarCategory.h"
class Car
{
private:
    std::string carChassisNumber;
    std::string carBrand;
    std::string carModel;
    CarCategory carCategory;
    float carPrice;
    int carSeatCount;
    int carFuelCapacity;
public:
    Car()=delete;//default constructor is disabled
    Car(const Car& )=default;//defaulted copy constructor
    Car(std::string chassisNumber,std::string brand,std::string model,
    CarCategory category,float price,int seatCount,int fuelCapacity);
    Car(std::string chassisNumber,
    std::string brand,
    std::string model,
    float price);
    ~Car() {
        std::cout<<"chasses number"<<carChassisNumber<<"is destroyed"<<std::endl;
    }
    
    //Overload of + operator
   float  operator+(Car car )
    {   
        return this->carPrice+ car.carPrice;   
    }
    

    std::string getCarChassisNumber() const { return carChassisNumber; }
    void setCarChassisNumber(const std::string &carChassisNumber_) { carChassisNumber = carChassisNumber_; }

    std::string getCarBrand() const { return carBrand; }
    void setCarBrand(const std::string &carBrand_) { carBrand = carBrand_; }

    std::string getCarModel() const { return carModel; }
    void setCarModel(const std::string &carModel_) { carModel = carModel_; }

    CarCategory getCarCategory() const { return carCategory; }
    void setCarCategory(const CarCategory &carCategory_) { carCategory = carCategory_; }

    float getCarPrice() const { return carPrice; }
    void setCarPrice(float carPrice_) { carPrice = carPrice_; }

    int getCarSeatCount() const { return carSeatCount; }
    void setCarSeatCount(int carSeatCount_) { carSeatCount = carSeatCount_; }

    int getCarFuelCapacity() const { return carFuelCapacity; }
    void setCarFuelCapacity(int carFuelCapacity_) { carFuelCapacity = carFuelCapacity_; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};
std::string DisplayEnum(const CarCategory value);
#endif // CAR_H
