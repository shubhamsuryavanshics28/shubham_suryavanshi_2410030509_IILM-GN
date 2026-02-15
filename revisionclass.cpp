#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int rollno;
    float marks;

    student(string name,int rollno,float marks){
        this->name = name;
        this->rollno = rollno;
        this->marks = marks;
    }
};
void change(student* s){
    s->name = "harsh";
}

int main(){
    student s("shubham",76,94);
    //student* ptr = &s;
    cout<<s.name<<"\n";
    //(*ptr).name = "sanket";
    //ptr->name = "shubham";
    change(&s);
    cout<<s.name<<"\n";

    return 0;
}
