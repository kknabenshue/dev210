#pragma once
#include <string>

class Person
{

private:
  std::string name;
  int age;
  int height;
  int weight;

public:
  Person();

  Person(std::string name, int age, int height, int weight);

  ~Person();

  void SetName(std::string name);
  std::string GetName();

  void SetAge(int age);
  int GetAge();

  void SetHeight(int height);
  int GetHeight();

  void SetWeight(int weight);
  int GetWeight();
};

