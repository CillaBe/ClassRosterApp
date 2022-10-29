//
//  student.hpp
//  C867ClassRoster
//
//  Created by Priscilla Hennig on 1/10/22.
//  Copyright © 2022 Wgu. All rights reserved.
//
#define student_hpp
#include <iostream>
#include "degree.hpp"
#include <string>
class Student {
private:
    string ID;
    string firstname;
    string lastname;
    string email;
    string age;
    CourseType degree;
    int days[3];
    
public:
    
    Student();
    ~Student();
    Student(string ID, string firstname, string lastname, string email, string age,int days[], CourseType degree);
    
    void setStudentID( string ID);
    void setFirstName( string firstname);
    void setLastName(string lastname);
    void setEmail (string semail);
    void setAge(string age);
    void setDays( int days[]);
    void setDegree( CourseType degree);
    
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail ();
    string getAge();
    int*   getDays();
    CourseType getDegree();
  
    void Print();
    
    
};



