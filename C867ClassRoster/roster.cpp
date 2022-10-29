//
//  roster.cpp
//  C867ClassRoster
//
//  Created by Priscilla Hennig on 1/10/22.
//  Copyright © 2022 Wgu. All rights reserved.
//

#include "roster.hpp"
#include "degree.hpp"

#include <iostream>

#include <string>

using namespace std;

void Roster::parse(string row) {

    size_t rhs = row.find(",");
    string stdID = row.substr(0,rhs);
    
    size_t lhs = rhs + 1;
    rhs = row.find(",",lhs);
    string fname = row.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = row.find(",", lhs);
    string lname = row.substr(lhs, rhs - lhs);
    
    
    lhs = rhs + 1;
    rhs = row.find(",",lhs);
    string emailadd = row.substr(lhs, rhs - lhs);
    
    
    lhs = rhs + 1;
    rhs = row.find(",",lhs);
    string ageofstn = row.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = row.find(",",lhs);
    int day1  = stoi(row.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = row.find(",",lhs);
    int day2  = stoi(row.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = row.find(",",lhs);
    int day3  = stoi(row.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = row.find(",",lhs);
    string strdegree  = row.substr(lhs, rhs - lhs);
    
    CourseType course = NETWORK;
    if (strdegree == "SECURITY") {
        course = SECURITY;
    }
    else if (strdegree == "NETWORK"){
        course = NETWORK;
    }
    else if (strdegree == "SOFTWARE") {
        course = SOFTWARE;
    }
     add(stdID, fname, lname, emailadd, ageofstn, day1, day2,day3, course);
}


void Roster::add(string studentID, string firstName, string lastName, string emailAddress, string age, int daysInCourse1, int daysInCourse2, int daysInCourse3, CourseType degreeprogram)
{
    int daysInCourse[3] = {daysInCourse1, daysInCourse2,daysInCourse3};
    classRosterArray[++last] = new Student(studentID,firstName,lastName,emailAddress,age, daysInCourse,degreeprogram);
}
bool Roster::remove(string studentID){
    bool studentHere = false;
    int numStudents = 5;
    for(int i = 0; i <= Roster::last; i++){
        if (classRosterArray[i]->getStudentID() == studentID) {
            studentHere = true;
            if ( i < numStudents -1 ){
                Student* k = classRosterArray[i];
                classRosterArray[i] = classRosterArray[numStudents -1];
                classRosterArray[numStudents - 1] = k;
            }
            Roster::last--;
        }
    }
        if(studentHere) {
            cout << "Removed: " << studentID << endl;
        }
        else
            cout << studentID << " not found." << endl;
            return studentHere;
    }
void Roster::printAll(){
   
    for ( int i = 0; i <= Roster::last; i++)
    (this->classRosterArray[i]->Print());
        cout << "\t";
     
    
}
void Roster::printAverageDaysInCourse(string studentID){
    cout << "Student ID:" << studentID <<"," << endl;
        for (int i = 0; i < Roster::last; i++) {
            if (classRosterArray[i]->getStudentID() == studentID) {
                cout  <<"average days in course is:"<< (classRosterArray[i]->getDays()[0]
                    + classRosterArray[i]->getDays()[1]
                    + classRosterArray[i]->getDays()[2]) / 3 << endl;
            }
        }
 }

void Roster::printInvalidEmails(){
    for (int i = 0; i < 5; i++){
        string checkemail = classRosterArray[i]->getEmail();
        if ((checkemail.find('@') == string::npos) || (checkemail.find('.')== string::npos) || (checkemail.find(' ')!= string::npos)){
            cout << checkemail << endl;
        }
        
    }
    
}
void Roster::printByDegreeProgram(CourseType coursetype){
    for (int i = 0; i <= Roster::last; i++){
        if (Roster::classRosterArray[i]->getDegree() == coursetype) classRosterArray[i]->Print();
        }
    cout << endl;
    }

Roster::~Roster() {

    for (int i = 0; i < 5; i++){
        delete classRosterArray[i];
        classRosterArray[i] = nullptr;
    }
   
    }
