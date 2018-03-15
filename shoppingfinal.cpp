#include<iostream>
using namespace std;
#include<string.h>
    class iteam
 {
    protected:
        char name[20][20];
        float price[20];
        int sum,code[20];

    public:
        iteam()
        {
         sum=0;
         temp=0;
        }
        char catagory[20];
        int temp;
        void insert();
        void add();
        void display();
        void search();
        void remove();
        void error1();
        void total_amount();
        void catago_amount();
        void initial_task();
        int function1();
 };
     void iteam::insert()
   {
    int i,n,k;
    cout<<"enter catagory name=";
    cin>>catagory;
    cout<<"how many item do u want to insert =";
    cin>>n;
    for(i=temp;i<n;i++)
    {
      cout<<"enter name of the iteam=";
      cin>>name[temp];
      cout<<"enter code=";
      cin>>code[temp];
      cout<<"enter price=";
      cin>>price[temp];
      temp++;
      sum=sum+price[i];
    }
   }
     void iteam::add()
   {
    int i,n;
    cout<<"enter catagory name=";
    cin>>catagory;
    cout<<"how many item do u want to add =";
    cin>>n;
    for(i=temp;i<n;i++)
    {
      cout<<"enter name of the iteam=";
      cin>>name[temp];
      cout<<"enter code=";
      cin>>code[temp];
      cout<<"enter price=";
      cin>>price[temp];
      temp++;
      sum=sum+price[i];
    }
   }
     void iteam::display()
  {
    int i;
    cout<<"under the "<<catagory<<" catagory the items are:"<<'\n'<<'\n';
    cout<<"item name"<<'\t';
    cout<<"code"<<'\t';
    cout<<"price"<<'\t'<<'\n';
    for(i=0;i<temp;i++)
    {

      cout<<name[i]<<'\t'<<'\t';
      cout<<code[i]<<'\t';
      cout<<price[i]<<'\n'<<'\n';
     }
     cout<<'\n'<<'\n';
   }
    void iteam::error1()
    {
      cout<<"FIRST U NEED TO INSERT ITEAM";
      cout<<'\n'<<'\n';
    }
    void iteam::search()
  {
      int i,m;
      cout<<"enter code:";
      cin>>m;
      for(i=0;i<temp;i++)
      {
    if(code[i]==m)
    {
    cout<<"item name is ="  <<name[i]<<'\n';
    cout<<"price is="<<price[i]<<'\n'<<'\n';
    }
    else
    cout<<"u have entered wrong code"<<'\n'<<'\n';
      }
      cout<<'\n'<<'\n';
  }
     void iteam::remove()
  {
      int i,m;
      cout<<"enter code:";
      cin>>m;
      for(i=0;i<temp;i++)
      {
    if(code[i]==m)
    {
      price[i]=0;
    }
    else
    cout<<"u have entered wrong code"<<'\n'<<'\n';
      }
      cout<<'\n'<<'\n';
  }
    void iteam::total_amount()
    {
     cout<<"the total price of all the items of all catagories is="<<sum<<'\n'<<'\n';
    }
    void iteam :: catago_amount()
    {
    cout<<"under the "<<catagory<<" catagory the total price of the items are="<<sum<<'\n'<<'\n';
    }
    void iteam::initial_task()
    {
  cout<<"What do u want to do ?"<<'\n';
  cout<<"1.if u want to insert press 1"<<'\n';
  cout<<"2.if u want to add press 2"<<'\n';
  cout<<"3.if u want to display press 3"<<'\n';
  cout<<"4.if u want to search press 4"<<'\n';
  cout<<"5.if u want to remove press 5"<<'\n';
    }
     class cloth:public iteam
    {
    private:
        char clt[15],cr[15];
    public:
       void insert_cl();
       void display_cl();
    };
   void cloth::insert_cl()
   {
   cout<<"what type of cloth is this ?(cotton,polyester,......)"<<'\n';
   cin>>clt;
   cout<<"what's the color of the cloth ?"<<'\n';
   cin>>cr;
   cout<<'\n';
   }
    int iteam::function1()
    {
    int a1;
    cout<<"choose a option to enter from the following sites"<<'\n';
    cout<<"1.press 1 for cloths."<<'\n'<<"2.press 2 for daily using thing."<<'\n'
    <<"3.press 3 for raw materials."<<'\n'<<"4.press 0 for exit."<<'\n';
    cin>>a1;
    return a1;
    }
   void cloth::display_cl()
   {
   cout<<"type :"<<clt<<'\n';
   cout<<"color :"<<cr<<'\n';
   }
  int main()
 {
   cloth t[20],f1,ob;
    int i,x=0,n,a,j,k,l,s,m,b,c,q,g=0,a1,y=0,z=0;
    char inp[20];
    for(i=0;;i++)
    {
    a1=ob.function1();
    switch(a1)
    {
    case 1:
    for(i=0;;i++)
     {
       ob.initial_task();
       cin>>a;
       switch(a)
       {
     case 1:
        if(x>0)
         {
           cout<<"YOU CAN NOT INSERT ITEAM MORE THAN ONE TIMES"<<'\n'<<'\n';
           break;
          }
         else
         {
           cout<<"how many catagory do u want to insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              t[x].insert();
             t[x].insert_cl();
               x++;
             }
          }
          //t[x].display();
         break;
      case 2:
        if(x<=0)
        {
            ob.error1();
        break;
        }
         else
         {
           cout<<"how many catagory do u want to add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             t[x].add();
             t[x].insert_cl();
              x++;
             }
          break;
          }
       case 3:
        if(x<=0)
        {
            ob.error1();
        break;
        }
         else
         {
          for(s=0;s<x;s++)
           {
             t[s].display();
             t[s].display_cl();
           }
           break;
         }}
     }}}
     return 0;
     }

