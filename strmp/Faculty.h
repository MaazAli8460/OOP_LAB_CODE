#ifndef FACULTY_H
#define FACULTY_H
#include "Books.h"
#include <iostream>
using namespace std;
#pragma once

class Faculty 
{
private:
    const int max_books_faculty = 5;
    int id;
    string name;
    string phonenumber;
    string address;

    int book_id;
    string book_type;
    Books *Issued;
    int size;

public:
    const string type = "Faculty\0";
    bool regester;
    Faculty();
    Faculty(int idx, string na, string ph, string ad);
    void setna(string na);
    void setidx(int idz);
    void setph(string ph);
    void setad(string ad);
    void addBook(Books b1);
    void remBook(Books b1);

    void setId(int idx);
    void setName(string str);
    void setPhoneNumber(string str);
    void setAddress(string str);
    int getId();
    string getName();
    string getPhoneNumber();
    string getAddress();
    string getna();
    string getph();
    string getad();
    int getidx();

    void wantIssue(string ty, int id1);
    void wantReturn(string ty, int id1);
    void print();
    void set_id(int bookid);
    void set_type(string ty);
    void Regester(bool fl);
    Faculty operator=(Faculty f1);
    ~Faculty();
};

#endif