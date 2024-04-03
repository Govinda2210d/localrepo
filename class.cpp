#include <iostream>
using namespace std;

class complex
{
    private:
    int a,b;
    public:
    void set_data(int x, int y)
    { a=x; b=y;}
    void show_data()
    {
        cout<<"\na="<<a<<"b="<<b;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};
/*void complex:: set_data(int x, int y)
{
    a=x;b=y;
}*/
int main()
{
    complex c,c2,c3;
    c.set_data(3,5);
    c2.set_data(4,6);
    c3=c.add(c2);
    c3.show_data();
    cout<<endl<<sizeof(complex);
    return 0;
}