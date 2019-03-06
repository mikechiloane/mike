#include<iostream>
using namespace std;

int opt;
void Intro_First();
void Sign_up(int *a,int *b);
void Sign_IN(int *a,int *b);
void Credentials_Verif(int a,int b);


int main(){
    int ID=10111,PIN=3131;
    Intro_First();
    cout<<"Enter choice: ";
    cin>>opt;

    switch(opt){
    case 1:
        Sign_up(&ID,&PIN);
        break;
    case 2:
        Sign_IN(&ID,&PIN);
        break;
    case 3:
        system("break");

}



return 0;
}

void Intro_First(){
    cout<<"......................................................................."<<endl;
    cout<<".........................______________________........................"<<endl;
    cout<<".........................______________________........................"<<endl;
    cout<<".........................____MIKEY__ICKEYTK____........................"<<endl;
    cout<<".........................________ACCONY________........................"<<endl;
    cout<<".........................______________________........................"<<endl;
    cout<<"......................................................................."<<endl;
    cout<<endl<<endl<<"1.Signup\n2.Sign in\n3.Exit()"<<endl;

}

void Sign_up(int *a,int *b){
    cout<<endl<<endl<<"Enter your new ID: ";
    cin>>*a;
    cout<<"Enter your new PIN: ";
    cin>>*b;

}

void Sign_IN(int *a,int *b){
    cout<<"Enter your ID: ";
    cin>>*a;
    cout<<"Enter your PIN: ";
    cin>>*b;
    Credentials_Verif(*a,*b);
}

void Credentials_Verif(int a,int b){

}
