#include<bits/stdc++.h>
using namespace std;

class Student{
public:
string name;
int rno;



Student(string name, int rno, float marks){
this->name = name;
this->rno = rno;
this->marks = marks;
}

// void display(){
//     cout<<"Name: "<<name<<endl;
//     cout<<"Roll No: "<<rno<<endl;
//     cout<<"Marks: "<<marks<<endl;
// }

float getMarks(){
    return marks;
}

float setMarks(float m){
    marks = m;
}

private:
float marks;

};

int main(){
Student s1("Alice",101,95.5);
// s1.display();
s1.setMarks(753.5);
cout<<s1.getMarks();

}