#include<bits/stdc++.h>
using namespace std;

class Student { //Student is a new data type
    public:
    string name;
    int rno;
    float gpa;
};

void print(Student c){
    cout<<c.name<<" "<<c.rno<<" "<<c.gpa<<endl;
}

int main(){
    Student s1;
    s1.name = "Lokesh";
    s1.rno = 36;
    s1.gpa = 8.5;

    Student s2;
    s2.name = "John";
    s2.rno = 38;
    s2.gpa = 7.5;

   print(s1);
   print(s2);
}