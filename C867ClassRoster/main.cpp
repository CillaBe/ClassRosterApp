//
//  main.cpp
//  C867ClassRoster
//
//  Created by Priscilla Hennig on 1/9/22.
//

#include <iostream>
#include <string>
#include "roster.hpp"
using namespace std;

int main() {
    const string studentData[] =
    {
    "A1,John,Smith,John1989@g mail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Priscilla,Hennig,phennig@wgu.edu,29, 20,30,40,SOFTWARE"
    };
    cout << "Course Title: Scripting and Programming - Applications – C867" << endl;
    cout << "Language used: C++" << endl;
    cout << " WGU Student ID: PHennig" << endl;
    cout << " Student Name: Priscilla Hennig" << endl;
    
    int studentNum = 5;
    Roster classRoster;
    
    cout << "All Students:" << endl;
    for ( int i = 0; i < studentNum; i++)
    classRoster.parse(studentData[i]);
    
    classRoster.printAll();
    cout << endl;
        
        
    cout << " Invalid Emails:" << endl;
    
    classRoster.printInvalidEmails();
    
    cout<< endl;
    cout << " Average Days in Course" << endl;
    
    for (int i = 0; i < studentNum; i++){
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
    }
    cout << endl;
    cout << "All Software Students:" << endl;
    
    classRoster.printByDegreeProgram(SOFTWARE);
    
    
    cout << "Remove A3" << endl;
    
    if(classRoster.remove("A3")) cout << "Successfully Removed A3" << endl;
    else cout << "A3 not located." << endl;
    
    
    classRoster.printAll();
        
    cout << "After Removing A3" << endl;
     

    
    cout << " Try to Remove A3:" << endl;
    classRoster.remove("A3");
    
  
    classRoster.~Roster();
return 0;
}
