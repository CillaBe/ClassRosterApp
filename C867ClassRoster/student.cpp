//
//  student.cpp
//  C867ClassRoster
//
//  Created by Priscilla Hennig on 1/10/22.
//  Copyright © 2022 Wgu. All rights reserved.
//

#include "student.hpp"
#include "degree.hpp"


#include <string>
#include <iostream>
using namespace std;
Student::Student() {
this -> ID = 1;
this ->firstname = "";
this ->lastname = "";
this-> email = "";
this-> age = 1;
for (int i = 0; i < 3; i++) this->days[i] = 0;
this-> degree = CourseType:: SOFTWARE;
    
}
void Student::setStudentID (string studentID) {
    this ->ID = studentID;
}
void Student::setFirstName( string firstname){
    this -> firstname = firstname;
}
void Student:: setLastName(string lastname){
    this ->lastname = lastname;
}
void Student::setEmail (string email){
    this ->email = email;
    
}
void Student::setAge(string age){
    this -> age = age;
}
void Student::setDays( int days[]){
    this->days[0] = days[0];
    this->days[1] = days[1];
    this->days[2] = days[2];
}
void Student::setDegree( CourseType degree){
    this ->degree = degree;
}








string Student::getStudentID(){
    return this -> ID;
}
string Student::getFirstName()
{
    return this-> firstname;
}
string Student::getLastName() {
    return this -> lastname;
}
string Student::getEmail (){
    return this-> email;
}
string Student:: getAge() {
    return this -> age;
}
int* Student::getDays(){
    return this -> days;
}
CourseType Student:: getDegree(){
    return this -> degree;
    
}

void Student::Print() {
    cout << this->getStudentID()<< '\t' ;
    cout << "First Name:"  << this->getFirstName()<< '\t';
    cout <<  "Last Name:" << this ->getLastName()<< '\t';
    cout << "Age:" << this->getAge() << '\t';
    
    cout << "Days in Course: {";
    cout<< this->getDays()[0]<< ",";
    cout <<this->getDays()[1] << ",";
    cout <<this->getDays()[2]  <<"}" << '\t';
    cout <<  "Degree Program:" << courseTypeStrings[this->getDegree()] << endl;
}
    
 Student::Student(string studentID, string firstname, string lastname, string email, string age,int days[], CourseType degree) {
        
       this-> ID = studentID;
       this-> firstname = firstname;
       this-> lastname = lastname;
       this-> email = email;
       this-> age = age;
       for( int i = 0; i < 3; i++)
      this ->days[i] = days[i];
     this ->degree = degree;
    }
Student::~Student(){}
    

