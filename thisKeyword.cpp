#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    string name;
    int runs;

    Cricketer(string name , int runs){
        this->name = name;
        this->runs = runs;
    }
};


int main(){
Cricketer c1("Virat Kohli",12000);
Cricketer c2("Rohit Sharma",9000);
cout<<c1.name<<" "<<c1.runs;

}