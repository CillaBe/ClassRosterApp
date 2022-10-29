//
//  roster.hpp
//  C867ClassRoster
//
//  Created by Priscilla Hennig on 1/10/22.
//  Copyright © 2022 Wgu. All rights reserved.
//

#ifndef roster_hpp
#define roster_hpp
#include "student.hpp"
#include <stdio.h>

#endif /* roster_hpp */
class Roster {
private:
    const static int totalstudents = 5;
    int last = -1;
public:
    Student* classRosterArray[totalstudents];
    void parse(string row);
    
    void add(string studentID, string firstName, string lastName, string emailAddress, string age, int daysInCourse1, int daysInCourse2, int daysInCourse3, CourseType degreeprogram);
    bool remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(CourseType coursetype);
    ~Roster();
    
    
    

    
};
