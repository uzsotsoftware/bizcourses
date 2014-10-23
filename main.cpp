/* 
 * File:   main.cpp
 * Author: software
 *
 * Created on October 23, 2014, 9:18 AM
 */

#include <cstdlib>
#include<iostream>
#include<string>

using namespace std;

/*
 * 
 */
class ECommerce;
class Students{
    string name;
    int ecomA1;
    int ecomA2;
    int ecomT1;
    int ecomT2;
    int ecomExam;
    friend class ECommerce;
public:
    int getEcomA1(){return ecomA1;}
    int getEcomA2(){return ecomA2;}
    int getEcomT1(){return ecomT1;}
    int getEcomT2(){return ecomT2;}
    int getEcomExam(){return ecomExam;}
};

class ECommerce{
public:
    Students setMarks(Students student){
        cout<<"E-Commerce Assignment 1...";
        cin>>student.ecomA1;
        cout<<"E-Commerce Assignment 2...";
        cin>>student.ecomA2;
        cout<<"E-Commerce Test 1...";
        cin>>student.ecomT1;
        cout<<"E-Commerce Test 2...";
        cin>>student.ecomT2;
        cout<<"E-Commerce Exam...";
        cin>>student.ecomExam;
        return student;
    }
};

int main(int argc, char** argv) {
    Students student;
    ECommerce ecommerce;
    student=ecommerce.setMarks(student);
    cout<<"************STUDENT E-COMMERCE MARKS*******"<<endl;
    cout<<student.getEcomA1()<<endl;
    cout<<student.getEcomA2()<<endl;
    cout<<student.getEcomT1()<<endl;
    cout<<student.getEcomT2()<<endl;
    cout<<student.getEcomExam()<<endl;
    return 0;
}

