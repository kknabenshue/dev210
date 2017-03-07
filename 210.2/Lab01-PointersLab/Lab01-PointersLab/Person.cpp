#include "stdafx.h"
#include "Person.h"
#include <iostream>
#include <string>


Person::Person()
{

}

Person::Person(std::string name,int age, int height, int weight)
{
  this->name = name;
  this->age = age;
  this->height = height;
  this->weight = weight;
}

Person::~Person()
{
  std::cout << "Person destructor called" << std::endl;
}

void Person::SetName(std::string name)
{
  this->name = name;
}

std::string Person::GetName()
{
  return this->name;
}

void Person::SetAge(int age)
{
  this->age = age;
}

int Person::GetAge()
{
  return this->age;
}

void Person::SetHeight(int height)
{
  this->height = height;
}

int Person::GetHeight()
{
  return this->height;
}

void Person::SetWeight(int weight)
{
  this->weight = weight;
}

int Person::GetWeight()
{
  return this->weight;
}
