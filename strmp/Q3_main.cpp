#include <iostream>
#include "Books.h"
#include "Books.cpp"
#include "Library.h"
#include "Library.cpp"
#include "Admin.h"
#include "Admin.cpp"
#include "Person.h"
#include "Person.cpp"
#include "Faculty.h"
#include "Faculty.cpp"
#include "Students.h"
#include "Students.cpp"

using namespace std;

int main()
{

    Admin a1;
    //             int id1, string na1, string ad1, int num1, string date1, string ty
    a1.addRecord(1,"40 rules of love","xyz",211,"20-aug-2019","Magzine");
    a1.addRecord(2,"Mien Kamph","Adolf Hittler",221,"20-aug-2019","Story-book");
    a1.addRecord(3,"Differential Equations","Zill",21,"23-aug-2019","Story-Book");
    a1.addRecord(4,"Strating with c++","Tony Gadis",2113,"20-aug-2019","Story-Book");
    a1.addRecord(5,"Digital Electronics","Morris Manno",214,"20-sep-2019","Story-book");
    a1.addRecord(6,"Hillal","Pakistan Army",215,"20-aug-2019","Magzine");
    a1.addRecord(7,"Time","BBC",216,"20-aug-2019","Magzine");
    a1.addRecord(8,"Life at fast","ttt",217,"20-aug-2019","Journal");
    a1.addRecord(9,"13 reasons why","txy",218,"20-aug-2019","Journal");
    a1.addRecord(10,"TLP","Army",219,"20-aug-2019","Journal");
    a1.addRecord(11,"40 rules of love","xyz",21122,"20-aug-2019","Magzine");//11 entry by admin will give error
    a1.displayLibrary();
    Faculty f1(22,"Maaz","034567777777","iwbbe ewhdew qiuhdiuh"),f2(33,"Ali","223333333333","dewfwef");
    Students s1(302,"Kaf","747474747474","iwuhediu wiuhdui,wiwi"),s2(432,"Ahmad","030303030","jsjsjs bew sj"),s3(213,"Huzaifa","032244543","jnkjcskjd sef,Jhelum");
    //Before regestring
    
    cout<<"\n---------------------Before regestring_____________________________________";
    //f1.addBook(a1.issueBookfac(8,"Journal"));//Will not Issue book because f1 didnot regester
    f1.Regester(true);
    a1.regesterMember(f1);
    cout<<"\nError.1";
    f1.addBook(a1.issueBookfac(8,"Journal"));//will issue book and update the faculty record of issued books.
    f1.addBook(a1.issueBookfac(2,"Story-Book"));//will issue book and update the faculty record of issued books.
    f2.Regester(true);
    a1.regesterMember(f2);
    cout<<"\nError.2";
    f2.addBook(a1.issueBookfac(9,"Journal"));//will issue book and update the faculty record of issued books.
    f2.addBook(a1.issueBookfac(3,"Story-Book"));//will issue book and update the faculty record of issued books.
    // s1.Regester(true);
    // a1.regesterMember(s1);
    // cout<<"\nError.3";
    // s1.addBook(a1.issueBookstu(1,"Magzine"));//will issue book and update the faculty record of issued books.
    // s1.addBook(a1.issueBookstu(4,"Story-Book"));//will issue book and update the faculty record of issued books.
    // s2.Regester(true);
    // a1.regesterMember(s2);
    // cout<<"\nError.4";
    // s2.addBook(a1.issueBookstu(5,"Story-book"));//will issue book and update the faculty record of issued books.
    // s2.addBook(a1.issueBookstu(6,"Magzine"));//will issue book and update the faculty record of issued books.
    s3.Regester(true);
    a1.regesterMember(s3);
    cout<<"\nError.5";
    //s3.addBook(a1.issueBookstu(7,"Magzine"));//will issue book and update the faculty record of issued books.
    s3.addBook(a1.issueBookstu(1,"Magzine"));//will issue book and update the faculty record of issued books.
    //After regestring
    cout<<"\n---------------------After regestring_____________________________________";
    


    
    
    

    

    

    a1.viewRecord();
    return 0;
}