#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void f1(int **q){
    q=q+1;
}
void f2(int **q){
    *q=*q+1;
}
void f3(int **q){
    **q=**q+1;
}
void workingOnF1(){
        int a=5;
    int *p=&a;
    int **q= &p;
cout<<"Before f1 call"<<endl; 
cout<<"value of a="<<a<<endl;  //5
cout<<"value of **q="<<**q<<endl; //5
cout<<"value of *q="<<*q<<endl; //address1
cout<<"value of q="<<q<<endl;   // address2
cout<<"value of p="<<p<<endl; //address1
cout<<"value of *p="<<*p<<endl; //5
cout<<"value of &q="<<&q<<endl; //address3
cout<<"value of &a="<<&a<<endl; //address1
cout<<"value of &p="<<&p<<endl; //address2
f1(q);
cout<<"After f1 call"<<endl;  
cout<<"value of a="<<a<<endl; //5
cout<<"value of **q="<<**q<<endl; //5
cout<<"value of *q="<<*q<<endl; //address1
cout<<"value of q="<<q<<endl; //address2
cout<<"value of p="<<p<<endl; //address1
cout<<"value of *p="<<*p<<endl; //5
cout<<"value of &q="<<&q<<endl; //address3
cout<<"value of &a="<<&a<<endl; //address1
cout<<"value of &p="<<&p<<endl; //address2
    }
void workingOnF2(){
        int a=5;
    int *p=&a;
    int **q= &p;
cout<<"Before f2 call"<<endl; 
cout<<"value of a="<<a<<endl; //5
cout<<"value of **q="<<**q<<endl; //5
cout<<"value of *q="<<*q<<endl; //address11
cout<<"value of q="<<q<<endl; //address2
cout<<"value of p="<<p<<endl; //address1
cout<<"value of *p="<<*p<<endl; //5
cout<<"value of &q="<<&q<<endl; //addreess3
cout<<"value of &a="<<&a<<endl; //address1
cout<<"value of &p="<<&p<<endl; //address2
f2(q);
cout<<"After f2 call"<<endl;
 cout<<"value of a="<<a<<endl; //5
cout<<"value of **q="<<**q<<endl; //garbage value because of address is still same for a but p has been changed for 1 or increased for 1
cout<<"value of *q="<<*q<<endl; //address 1+1(+4 on bit level) 
cout<<"value of q="<<q<<endl; //address3
cout<<"value of p="<<p<<endl; //address 1+1(+4 on bit level) 
cout<<"value of *p="<<*p<<endl; //garbage value because of address is still same for a but p has been changed for 1 or increased for 1
cout<<"value of &q="<<&q<<endl; //address3
cout<<"value of &a="<<&a<<endl; //adress1
cout<<"value of &p="<<&p<<endl; //address2
    }
    void workingOnF3(){
        int a=5;
    int *p=&a;
    int **q= &p;
    cout<<"Before f3 call"<<endl;
cout<<"value of a="<<a<<endl;  //5
cout<<"value of **q="<<**q<<endl; //garbage value because of address is still same for a but p has been changed for 1 or increased for 1
cout<<"value of *q="<<*q<<endl; //address 1+1(+4 on bit level) 
cout<<"value of q="<<q<<endl; //address2
cout<<"value of p="<<p<<endl; //address 1+1(+4 on bit level) 
cout<<"value of *p="<<*p<<endl;//garbage value because of address is still same for a but p has been changed for 1 or increased for 1
cout<<"value of &q="<<&q<<endl;//address3
cout<<"value of &a="<<&a<<endl; //address1
cout<<"value of &p="<<&p<<endl; //address2
f3(q);
cout<<"After f3 call"<<endl; 
cout<<"value of a="<<a<<endl;//6
cout<<"value of **q="<<**q<<endl;//6
cout<<"value of *q="<<*q<<endl; //address1
cout<<"value of q="<<q<<endl; ////address2
cout<<"value of p="<<p<<endl;  ////address1
cout<<"value of *p="<<*p<<endl; //6
cout<<"value of &q="<<&q<<endl; //addresss3
cout<<"value of &a="<<&a<<endl; //address1
cout<<"value of &p="<<&p<<endl; //address2
    }

int main(){
    int a=5;
    int *p=&a;
    int **q= &p;
   





 cout<<"************************f1***********************"<<endl;
workingOnF1();
 cout<<"************************f2***********************"<<endl;
workingOnF2();
 cout<<"************************f3***********************"<<endl;
workingOnF3();




return 0;
}
