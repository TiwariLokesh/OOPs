#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    string name;
    int runs;
    float avg;

    Cricketer(string name,int runs,float avg){
        this->name  = name;
        this->runs=runs;
        this->avg=avg;
    }
};

void change(Cricketer* c){
    (*c).avg = 100.0; //c->avg = 100.0;
}

int main(){
Cricketer c1("Virat Kohli",12000,55.2);
Cricketer c2("Rohit Sharma",9000,48.5);
cout<<c1.avg<<endl;
change(&c1);
cout<<c1.avg<<endl;

// Cricketer* p1 = &c1;
// cout<<(*p1).name<<endl;
// (*p1).name = "King Kohli";
// cout<<(*p1).name<<endl;
}