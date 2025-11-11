#include<iostream> 
using namespace std;

int main(){
    double a,b;
    char op;
    cout<<"enter expression(eg: 9+2):  ";
    cin>>a>>op>>b;
    switch(op){
        case '+' : cout<<"result = "<<a+b;
                break;
        case '-'  : cout<<"result = "<<a-b;
                break;

        case '*' : cout<<"result = "<<a*b;
                break;

        case '/': 
                if(b==0)
                 cout<<"invalid";
                else
                 cout<<"result = "<<a/b; 
          break;
   }
    

}