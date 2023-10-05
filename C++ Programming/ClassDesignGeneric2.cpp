#include<iostream>
using namespace std;

template <class T>
class Marvellous
{
    private:
        T *Arr;
        int iSize;

    public:
        Marvellous(int Lenght)
        {
            cout<<"Inside Constructor \n";
            iSize = Lenght;
            Arr = new T[iSize];
        }
        ~Marvellous()
        {
            cout<<"Inside Destructor \n";
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter the elements of Array : \n";
            for(int i = 0 ; i<iSize ; i++)
            {
                cin>>Arr[i];
            }
        }    
        int Display()
        {
            cout<<"The elements of Array are : \n";
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
    Marvellous <int>mobj1(3);
    Marvellous <float>mobj2(5);

    mobj1.Accept();
    mobj1.Display();
    mobj2.Accept();
    mobj2.Display();

    int iRet = mobj1.Addition();
    cout<<"Addition is : "<<iRet<<"\n";

    float fRet = mobj2.Addition();
    cout<<"Addition is : "<<fRet<<"\n";

    return 0;
}