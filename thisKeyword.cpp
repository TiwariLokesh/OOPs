#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    string name;
    int runs;
    float avg;

    Cricketer(string name , int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void print(){
        cout<<name<<" "<<runs<<" "<<avg<<endl;
    }

    int matches(){
        return runs/avg;
    }
};

// void print(Cricketer c){
//     cout<<c.name<<" "<<c.runs<<endl;
// }


int main(){
Cricketer c1("Virat Kohli",12000,55.2);
Cricketer c2("Rohit Sharma",9000,48.5);
c1.print();
c2.print();
cout<<c1.matches()<<endl;

}