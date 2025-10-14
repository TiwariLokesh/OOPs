#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int rno;
    float gpa;

    //Constructotr
    Student(string s, int r, float g){
        name = s;
        rno = r;
        gpa = g;
    }

};

int main(){
Student s1("Lokesh",36,8.5);
cout<<s1.name;
}