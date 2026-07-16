#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_no;

    public:
    void set_rollno(int r){
        roll_no=r;
    }

    void printnum(){
        cout<<"Roll number of the Student is: "<<roll_no<<endl;
    }
};

class Test:public  virtual Student{
    protected:
    float physics;
    float maths;

    public:
    void set_marks(float m, float p){
        maths=m;
        physics=p;
    }

    void print_marks(){
        cout<<"The Marks of the Student is: "<<physics+maths<<endl;
    }
};

class sports:virtual public  Student{
    protected:
    float sports_score;

    public:
    void set_score(float marks){
        sports_score=marks;
    }

    void print_score(){
        cout<<"The Score for Sports are: "<<sports_score<<endl;
    }
};

class Result:public sports, public Test{
    protected:

    public:
    void Display(){
        printnum(); // ----> Remove virtual Keyword and face the error
        print_marks();
        print_score();
        cout<<"The Total Marks in the Results are: "<<sports_score+maths+physics<<endl;
    }
};

int main(){
    Result Prateek;
    // R1.set_rollno(101); -----> Invalid: It will give me Error Because there will be having 2 different copies of Student Object
    Prateek.set_rollno(1010);
    Prateek.set_marks(90.8,56);
    Prateek.set_score(190);
    Prateek.Display();
    return 0;
}