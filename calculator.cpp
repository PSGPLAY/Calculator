#include<iostream>
#include<cmath>
using namespace std;

int sum(int a,int b){
    return a+b;
}
int sub(int a, int b){
    return (a-b);
}
int product(int a, int b){
    return (a*b);
}
int divide(int a, int b){
    return (a/b);
}
int power(int a, int b){
    return (pow(a,b));
}
int main(){
    
    int x,y;
    char op;
    cout<<"**********Calculator**********"<<endl;

    bool stop = false;
    char con;
    while (stop == false)
    {
        cout<<"Enter the operation to perform: ";
        cin>>x>>op>>y;
        
        switch (op)
        {
            case '+':
                cout<<x<<" "<<op<<" "<<y <<" = "<<sum(x,y);
                break;
            
            case '-':
                cout<<x<<" "<<op<<" "<<y<<" = "<<sub(x,y);
                break;

            case '*':
                cout<<x<<" "<<op<<" "<<y<<" = "<<product(x,y);
                break;

            case '/':
                cout<<x<<" "<<op<<" "<<y<<" = "<<divide(x,y);
                break;

            case '^':
                cout<<x<<" "<<op<<" "<<y<<" = "<<power(x,y);
                break;
            default:
                cout<<"Unsupported operators"<<endl;
                break;
        }
        cout<<"Do you want to continue?(y/n)";
        cin>>con;
        if(con == 'N' || con == 'n'){
            stop = true;
        }
        else if(con =='y' || con == 'Y'){
            cout<<endl;
            stop = false;
        }
    }
    
    return 0;
}