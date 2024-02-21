#include <iostream>
using namespace std;
class library
{
    public:
    int quantity,bk_id;
    char bk_nm[20];
    void  getdata()
    {
        cout<<"enter book id"<<endl;
        cin>>bk_id;
        cout<<"enter the name of book"<<endl;
        cin>>bk_nm;
        cout<<"Enter the quantity books you  want"<<endl;
        cin>>quantity;
    }
    void display()
    {
      cout<<bk_id<<"\t\t"<<bk_nm<<"\t\t"<<quantity<<"\t\t"<<endl;
    }
};
int main()
{
    library lb[10];
    int num,i,j,k,flag,sno;
    cout<<"enter the number of books you want to issue";
    cin>>num;
    for(i=0;i<num;i++)
    {
        lb[i].getdata();
    }
    cout<<"book id\t\tname\t\tquantity\t\t"<<endl;
    for(j=0;j<num;j++)
    {
       lb[j].display();
    }
   
   cout<<"enter the book id of  the book which you want to issue\n";
    cin>>sno;
    //search of book
    flag=0;//not exist
    for(k=0;k<num;k++)
    {
       if(sno==lb[k].bk_id)
       {
        flag=1;
        break;
       }
    }
    if (flag==1)
    {
        cout<<"\n book is available";
    }
    else
    {
           cout<<"book id does not exist";
    }
    
    return 0;
}