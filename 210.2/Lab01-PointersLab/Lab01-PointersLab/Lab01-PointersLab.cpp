// Lab01-PointersLab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Person.h"

using namespace std;

void passByValue(int);
void passByRef(int &);
void ModifyPerson(Person &);
void ModifyAge(Person *);


int main()
{
  cout << "In main()" << endl;
  
  // Variable declarations. Step 2.
  int num1;
  int * pNum = new int;
  
  // Assign to num1. Step 3.
  num1 = 3;
  
  // Assign to mem location in pNum. Step 4.
  *pNum = 5;

  // Call passByValue. Step 7.
  passByValue(num1);

  // Step 9.
  cout << "Back in main()" << endl;
  cout << "num1 = " << num1 << endl;

  // Step 11.
  passByRef(*pNum);

  // Step 14.
  cout << "Back in main()" << endl;
  cout << "*pNum = " << *pNum << endl;

  // Step 15.
  passByValue(*pNum);
  cout << "Back in main()" << endl;
  cout << "*pNum = " << *pNum << endl;

  // Step 17.
  double * pDouble = new double;

  // Step 18.
  *pDouble = 5.0;

  // Step 19.
  cout << "*pDouble = " << *pDouble << endl;
  cout << endl;

  // Step 20.
  delete pDouble;

  // Step 21. Can't perform due to errors.
  // cout << "*pDouble = " << *pDouble << endl;

  // Step 26.
  Person *pPerson1 = new Person("Kory Knabenshue", 25, 65, 140);

  // Step 27.
  cout << endl;
  cout << "Person1 name = " << pPerson1->GetName() << endl;
  cout << "Person1 age = " << pPerson1->GetAge() << endl;
  cout << "Person1 height = " << pPerson1->GetHeight() << endl;
  cout << "Person1 weight = " << pPerson1->GetWeight() << endl;
  cout << endl;

  // Step 28.
  ModifyPerson(*pPerson1);

  // Step 30.
  cout << "Person1 name = " << pPerson1->GetName() << endl;
  cout << "Person1 age = " << pPerson1->GetAge() << endl;
  cout << "Person1 height = " << pPerson1->GetHeight() << endl;
  cout << "Person1 weight = " << pPerson1->GetWeight() << endl;
  cout << endl;

  // Pass by pointer test.
  ModifyAge(pPerson1);
  cout << "Person1 name = " << pPerson1->GetName() << endl;
  cout << "Person1 age = " << pPerson1->GetAge() << endl;
  cout << "Person1 height = " << pPerson1->GetHeight() << endl;
  cout << "Person1 weight = " << pPerson1->GetWeight() << endl;
  
  return 0;
}


void passByValue(int num1) {
  // Step 6.
  cout << "In passByValue()" << endl;

  // Step 8.
  num1 = 6;

  cout << "num1 = " << num1 << endl;
}

void passByRef(int &num1) {
  //Step 12.
  cout << "In passByRef()" << endl;

  //Step 13.
  num1 = 50;
  
  cout << "num1 = " << num1 << endl;
}

void ModifyPerson(Person &person1) {
  person1.SetName("Alice Bob");
}

void ModifyAge(Person * person1) {
  person1->SetAge(26);
}
