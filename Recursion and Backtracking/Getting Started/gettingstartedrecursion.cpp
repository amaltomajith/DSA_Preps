#include <bits/stdc++.h>
using namespace std;
void func1(int count)
{
     if (count==5)
     return ;
     cout<<"amal"<<endl;
     func1(count+1);


}
void func2(int count)
{
     if (count==5)
     return ;
     cout<<count<<endl;
     func2(count+1);


}
void func3(int countn)
{
     if (countn==-1)
     return ;
     cout << countn<<endl;
     func3(countn-1);


}
void func4(int countn)
{
     if (countn==-1)
     return ;
     func4(countn-1);
     cout << countn<<endl;


}
int main()
{
    int count = 0;
    int countn = 5;
    func1(count);
    func2(count);
    func3(countn);
    func4(countn);

}