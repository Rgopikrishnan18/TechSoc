#include <iostream>
using namespace std;


//fn for factorial
int factorial(int z){
    int f=1;
    for (int i=1;i<z+1;++i){
        f*=i;
    }
    return f;
}

//fn for power
double power(double base,double exp){
double c=1;
for (int i=1;i<exp+1;++i){
   c*=base;
}
return c;
}

double sin(double x){
    double r;
    for (int i = 0; i< 10; ++i) 
    {
        r+= power(-1, i)*power(x*0.0174533, 2 * i+ 1) / factorial(2 * i + 1);

    }
    return r;
}
double cos(double x){
    double r;
    for (int i = 0; i< 10; ++i) 
    {
        r+= power(-1, i)*power(x*0.0174533, 2 * i) / factorial(2 * i);

    }
    return r;
}





int main(){ 
int c;
double x,y;
cout<<"1.addition\n";
cout<<"2.subtraction\n";
cout<<"3.multiplciation\n";
cout<<"4.division\n";
cout<<"5.exponential\n";
cout<<"6.sine\n";
cout<<"7.cosine\n";
cout<<"8.tangent\n";




//main pgm
cout<<"enter your option :";
cin>>c;



//addition pgm
if (c==1){
cout<<"enter your numbers:\n";
cin>>x;
cin>>y;
cout<<"addition result:"<<x+y<<"\n";
}

//subtraction
else if(c==2){

cout<<"enter your numbers:\n";
cin>>x;
cin>>y;
cout<<"subtraction result"<<x-y<<"\n";
}

//multiplication
else if (c==3){
cout<<"enter your numbers:\n";
cin>>x;
cin>>y;
cout<<"multiplication:"<<x*y<<"\n";
}


//division
else if(c==4){
cout<<"enter your numbers:\n";
cin>>x;
cin>>y;
cout<<"division result:"<<x/y<<"\n";
}

//exponential

else if(c==5){
double x,y;
cout<<"enter base:";
cin>>x;
cout<<"\n"<<"enter exponent:";
cin>>y;

cout<<"result: "<<power(x,y);
}

else if(c==6){
    double x,r;
    cout<<"enter angle; ";
    cin>>x;
    r=sin(x);
    
    cout<<"sin"<<x<<": "<<r;
    }








else if(c==7){
double x,s = 0;
cout<<"enter angle in degrees:";
cin>>x;
s=cos(x);
    cout<<"cos"<<x<<": "<<s;
    
}

else if(c==8){
    double x,t,c,s;
    cout<<"enter angle in degree:";
    cin>>x;
    cout<<"tan"<<x<<sin(x)/cos(x);}


return 0;}

