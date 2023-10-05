#include<iostream>
using namespace std;

class demo
{
    public:
        int a , b;
        demo(int i = 10 , int j = 20)
        {
            a = i;
            b = j;
        }

        friend demo operator + (demo op1 , demo op2);         
        friend demo operator - (demo op1 , demo op2);
        friend demo operator * (demo op1 , demo op2);
        friend demo operator / (demo op1 , demo op2);
                
};

demo operator + (demo op1 , demo op2)
{
    cout<<"Inside + operator \n";
    return demo(op1.a + op2.a , op1.b + op2.b);
}

demo operator - (demo op1 , demo op2)
{
    cout<<"Inside - operator \n";
    return demo(op1.a - op2.a , op1.b - op2.b);
}

demo operator * (demo op1 , demo op2)
{
    cout<<"Inside * operator \n";
    return demo(op1.a * op2.a , op1.b * op2.b);
}

demo operator / (demo op1 , demo op2)
{
    cout<<"Inside / operator \n";
    return demo(op1.a / op2.a , op1.b / op2.b);
}

int main()
{
    demo obj1(11 , 21);
    demo obj2(51 , 101);
    demo obj(0,0);

    obj = obj1 * obj2;

    cout<<obj.a<<"\n";
    cout<<obj.b<<"\n";

    return 0;
}