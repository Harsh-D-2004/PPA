#include<iostream>
using namespace std;

class hello
{
    public:
        void gun();
};

class marvellous
{
    public:
        void sun();
        void run();
};

class demo
{
    public:
        int a;
    private:
        int b;
    protected:
        int c;

    public:
        demo(int i , int j , int k)
        {
            a = i;
            b = j;
            c = k;
        } 
    friend void fun();  
    friend void hello::gun();  
    friend class marvellous;           
};

void fun()
{
    demo obj1(11 , 22 , 33);
    cout<<"value of a in fun "<<obj1.a<<"\n";
    cout<<"value of b in fun "<<obj1.b<<"\n";
    cout<<"value of c in fun "<<obj1.c<<"\n";
}

void hello::gun()
{
    demo obj2(88 , 99 , 66);
    cout<<"value of a in gun "<<obj2.a<<"\n";
    cout<<"value of b in gun "<<obj2.b<<"\n";
    cout<<"value of c in gun "<<obj2.c<<"\n";            
}

void marvellous::sun()
{
    demo obj2(880 , 990 , 660);
    cout<<"value of a in sun "<<obj2.a<<"\n";
    cout<<"value of b in sun "<<obj2.b<<"\n";
    cout<<"value of c in sun "<<obj2.c<<"\n";            
}

void marvellous::run()
{
    demo obj2(888 , 999 , 666);
    cout<<"value of a in run "<<obj2.a<<"\n";
    cout<<"value of b in run "<<obj2.b<<"\n";
    cout<<"value of c in run "<<obj2.c<<"\n";            
}

int main()
{
    fun();

    hello hobj;
    hobj.gun();

    marvellous mobj;
    mobj.sun();
    mobj.run();

    return 0;
}