//
//  main.cpp
//  sss
//
//  Created by Taron Nersisyan on 4/22/18.
//  Copyright © 2018 Taron Nersisyan. All rights reserved.
//




#include <iostream>
#include <string>
using namespace std;

class Date {
public:
    void set_date(int day, int month, int year);
    void get_date();
private:
    int day, month, year;
    string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
};

void Date::set_date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::get_date() {
    cout << year << "," << months[month - 1] << "-" << day << endl;
}

class Student {
private:
    string first_name;
    string last_name;
    Date birth_date;
    string faculty;
public:
    Student();
    Student(string first_name, string last_name, string faculty);
    void set_birth_date(int day, int month, int year);
    void set_name(string first_name, string last_name);
    void get_birth_date();
    void get_first_name();
    void get_last_name();
};

Student::Student(string first_name, string last_name, string faculty) {
    this->first_name = first_name;
    this->last_name = last_name;
    this->faculty = faculty;
}

void Student::set_name(string first_name, string last_name) {
    this->first_name = first_name;
    this->last_name = last_name;
}

Student::Student() {}

void Student::set_birth_date(int day, int month, int year) {
    this->birth_date.set_date(day, month, year);
}

void Student::get_birth_date() {
    birth_date.get_date();
}

void Student::get_first_name() {
    cout << first_name << endl;
}

void Student::get_last_name() {
    cout << last_name << endl;
}

int main() {
    Student me("Taron", "Nersisyan", "Computer Science");
    me.set_birth_date(25, 8, 2000);
    me.get_birth_date();
    me.get_first_name();
    me.get_last_name();
    return 0;
}
