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
    demo obj(11 , 21 , 51);
    cout<<"Value of a "<<obj.a<<"\n";
    cout<<"Value of b "<<obj.b<<"\n";
    cout<<"Value of c "<<obj.c<<"\n";
}

void hello::gun()
{
    demo obj(11 , 21 , 51);
    cout<<"Value of a "<<obj.a<<"\n";
    cout<<"Value of b "<<obj.b<<"\n";
    cout<<"Value of c "<<obj.c<<"\n";
}

void marvellous::sun()
{
    demo obj(11 , 21 , 51);
    cout<<"Value of a "<<obj.a<<"\n";
    cout<<"Value of b "<<obj.b<<"\n";
    cout<<"Value of c "<<obj.c<<"\n";    

}

void marvellous::run()
{
    demo obj(11 , 21 , 51);
    cout<<"Value of a "<<obj.a<<"\n";
    cout<<"Value of b "<<obj.b<<"\n";
    cout<<"Value of c "<<obj.c<<"\n";
    
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