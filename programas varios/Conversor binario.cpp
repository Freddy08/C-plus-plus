#include <iostream> 
#include <math.h> 
using namespace std; 
bool esBinario(int); 
int BinarioDecimal(int); 
int main(){ 
int n; 
do{ 
cout<<"ingrese numero binario "; 
cin>>n; 
}while(!esBinario(n)); 
cout<<"El "<<n<< 
" es igual a "<< 
BinarioDecimal(n)<<endl;	
system("pause"); 
return 0; 
} 
bool esBinario(int n){ 
bool r=true; 
while (n>=10){	
if(n%10!=1 && n%10!=0) 
{r=false;break;}	
n=n/10;}	
if(n!=1 && n!=0)r=false; 
return r; 
} 
int BinarioDecimal(int n){ 
int d=0,p=0; 
while (n>=10){	
if(n%10==1) 
d+=pow(2,p); 
n=n/10; 
p+=1; 
} 
if(n%10==1) 
d+=pow(2,p); 
return d; 
} 

