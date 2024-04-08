#pragma once
#include <string>

class Student
{
public:
    virtual std::string getName(void) const = 0;
    virtual void setName(const std::string & name) = 0;

    virtual void showStudent(void) const = 0;

    virtual void showSubjects(void) const = 0;
    virtual bool addSubject(const std::string & subjectName) = 0;
    virtual bool removeSubject(const std::string & subjectName) = 0;

    virtual void showGrades(void) const = 0;
    virtual bool addGrade(const std::string & subject, const std::string & comment, float grade) = 0;
    virtual bool removeGrade(const std::string & subject, const std::string & comment) = 0;
};