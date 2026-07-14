#include<iostream>
using namespace std;

class Student{
    private:
    int roll_no;

    public:
    void Set_roll(int r);
    void Get_roll(void);
};

void Student::Set_roll(int r){
    roll_no=r;
}

void Student::Get_roll(void){
    cout<<"The Roll No. for the student is: "<<roll_no<<endl;
}

class Exam:public Student{
    protected:
    float maths;
    float physics;

    public:
    void set_marks(float m, float p);
};

void Exam::set_marks(float m, float p){
    maths=m;
    physics=p;
}

class Result:public Exam{
    
    private:
    float percentage;

    public:
    void Display();
};


void Result::Display(){
    cout<<"The Percentage of the Studen is: "<<(maths+physics)/2;
}

int main(){
    Result Prateek;
    Prateek.Set_roll(5078);
    Prateek.set_marks(89,97);
    // Prateek.maths=34--> this is invalid keep in mind because it is protected as we inherited publicily the protected member
    Prateek.Display();
    return 0;
}