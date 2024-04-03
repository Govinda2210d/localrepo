#include<iostream>
using namespace std;
struct book{
    int bookid;
    char title[20];
    float price;
    
};
int main()
{
    
    book b;
    cout<<"enter the bookid,  tilte and pricr:  ";
    cin>>b.bookid>>b.title>>b.price;
    cout<<b.bookid<<" "<<b.title<<" "<<b.price;
    cout<<endl;
    cout<<sizeof(book);
    return 0;
}
