#pragma once
#include <vector>
#include <student.hpp>
#include <memory>
#include <fstream>
#include <set>

class StudentDatabase
{
private:
    std::vector<std::unique_ptr<Student>> m_students;
    std::string m_studentsFilename = "../output/students.csv";
    std::fstream m_file;

    void appendToCSV(std::fstream& file, const std::vector<std::string>& data);
    bool isCSVFileEmpty(std::fstream& file);
    void readStudentsFromCSV(std::fstream& file);
public:
    StudentDatabase(void);
    ~StudentDatabase(void);

    void saveAllStudentsToCSV(void);

    void addStudent(std::unique_ptr<Student> student);
    bool removeStudentByPesel(const std::string & pesel);
    std::vector<const Student*> findStudentsByLastname(const std::string & lastname);
    bool modifyStudentByPesel(const std::string & pesel);
    void sortStudentByLastname(void);

    std::set<std::string> getFieldsOfStudy(void) const;
    void displayStudents(void) const;
    void displayStudentsByFieldOfStudy(const std::string & fld_of_std) const;
    
};