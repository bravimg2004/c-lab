#include <iostream>
using namespace std;
class bank
{
   public:
   int acc_no,balance;
   char c_name[30],acc_typ[30];
   
   void getdata()
   {
    cout<<"enter the name of customer\t";
    cin>>c_name;
     cout<<"enter the account number\t";
     cin>>acc_no;
     cout<<"enter the type of account\t";
     cin>>acc_typ;
     cout<<"enter the balance ammount\t";
     cin>>balance;
   }
   void display()
   {
     
     cout<<c_name<<"\t"<<acc_no<<"\t\t"<<acc_typ<<"\t\t"<<balance<<endl;
   }
   void deposit()
   {
      int amnt;
      cout<<"enter the ammount which you want to deposit:"<<endl;
      cin>>amnt;
      balance=balance+amnt;
      cout<<"new balance is:"<<balance<<endl;
   }
   void withdraw()
   {
    int amnt;
    cout<<"enter the ammount you want to withdraw:"<<endl;
    cin>>amnt;
    if(amnt<=balance)
    {
      balance=balance-amnt;
      cout<<"new balance is:"<<balance<<endl;
    }
    else
    {
      cout<<"your balance is insufficient!!"<<balance<<endl;
    }
   }
};
int main()
{
  bank bk[10];
  int i,n,ano,flag;
  int u;
  char ch;
  cout<<"enter no. of customers";
  cin>>n;
  for(i=0;i<n;i++)
  {
    bk[i].getdata();
  }
  cout<<"name \taccount no. \t type of a/c \t balance ammount "<<endl;
 for(i=0;i<n;i++)
  {
    bk[i].display();
  } 
  cout<<"enter account number in which you want to do transaction"<<endl;
  cin>>ano;
  //search
   flag=0; //not exist
  for(i=0;i<n;i++)
  {
    if(ano==bk[i].acc_no)
    { 
      flag=1;
      break;
    }
  }
 if(flag==0)
 {
  cout<<"a/c no. does not exist";
 }
 else
 {
 do{
   cout<<"press 1 to display rsult"<<endl;
  cout<<"press 2 to display result 2"<<endl;

   cout<<"enter your choice"<<endl;
   cin>>u;
  switch(u)
  {
     case 1:
    bk[i].deposit();
      break;
      
      case 2:
     bk[i].withdraw();
    break;
    
    default:
    cout<<"invlalid"<<endl;
   
  }
  cout<<"do you want to continue yes or no"<<endl;
  cin>>ch;
 }while (ch=='y' or ch=='a');
 }
  return 0;
}
