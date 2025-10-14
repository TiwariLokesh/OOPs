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



int main(){
Cricketer c1("Virat Kohli",12000,55.2);
Cricketer* c2 = new Cricketer("Rohit Sharma",9000,48.5);

cout<<c1.name<<endl;
cout<<c2->name<<endl;

}