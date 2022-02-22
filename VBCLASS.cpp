#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void set_num(int a)
    {
        roll = a;
    }
    void print_num(void)
    {
        cout << "your roll number is " << roll << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    };
    void print_marks(void)
    {
        cout << "you have obtained: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class sport:virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score= sc;
    }
    void print_score(void){
        cout<<"your PT score is "<<score<<endl;
    }
};
class result : public test, public sport{
private:
float total;
public:
void display(void){
    total= maths+physics+score;
    print_num();
    print_marks();
    print_score();
    cout<<"Your total score is "<<total<<endl;
}


};
int main()
{
    result devleena;
    devleena.set_marks(78.5,45.6);
    devleena.set_num(450);
    devleena.set_score(9);
    devleena.display();

    return 0;
}