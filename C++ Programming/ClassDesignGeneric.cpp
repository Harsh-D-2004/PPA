#include<iostream>
using namespace std;

template<class T>
class MarvellousArray
{
    private:
        T *Arr;
        int iSize;

    public:
        MarvellousArray(int  Length)
        {
            cout<<"Inside Constructor"<<"\n";
            iSize = Length;
            Arr = new T[iSize];
        }    
        ~MarvellousArray()
        {
            cout<<"Inside Destructor"<<"\n";
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter the Values: "<<"\n";
            for(int i = 0 ; i<iSize ; i++)
            {
                cin>>Arr[i];
            }
        }
        void Display()
        {
            cout<<"Elements of Array are: "<<"\n";
            for(int i = 0 ; i<iSize ; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        T Addition()
        {
            T iSum = 0;
            for(int i = 0 ; i<iSize ; i++)
            {
                iSum = iSum + Arr[i];
            }
                return iSum;
        }
};

int main()
{
    MarvellousArray <int>mobj1(6);
    MarvellousArray <float>mobj2(4);
    // MarvellousArray <double>mobj2(3);

    mobj1.Accept();
    mobj1.Display();
    
    int iRet = 0;
    iRet = mobj1.Addition();
    cout<<"Addition is : "<<iRet<<"\n";


    mobj2.Accept();
    mobj2.Display();

    float fRet = 0.0f;
    fRet = mobj2.Addition();
    cout<<"Addition is : "<<fRet<<"\n";
    
    return 0;
}