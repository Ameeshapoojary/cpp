#ifndef PROJECT_H
#define PROJECT_H
#include<iostream>
class Project
{
private:
    std::string _name;
    int _duration_days;
    float _budget;

public:
    Project()=delete;
    Project(const Project&)=delete;
    Project(std::string name,int duration,float budget);
    ~Project() {
        std::cout<<"Project name "<<_name<<" is destroyed"<<std::endl;

    }

    std::string name() const { return _name; }

    int durationDays() const { return _duration_days; }

    float budget() const { return _budget; }
};

#endif // PROJECT_H
