/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

char* initializeINTAL(){
    char* intal = (char*)malloc(1001*sizeof(char);
    int i;
    for (i = 0;i<1001;i++){
            intal[i] = '0';
    }
    intal[1000] = '\0';    
    return intal;
}
int compareINTAL(intal_a, intal_b){
    int i;
    if (intal_a.length() >intal_b.length())
        return 1;
    if (intal_a.length() <intal_b.length())
        return -1;
    i = intal_a.length();
    while (i > -1){
        if (intal_a[i] > intal_b[i])
            return 1;
        if (intal_a[i] < intal_b[i])
            return -1;
        i-=1
    }
    return 0;
    }
int addINTAL((intal_c, intal_d)){
    int i=compareINTAL(intal_c,intal_d);
    int carry=0,l;
    string str="";
    if(i==1||i==0){
        swap(intal_c,intal_d);
    }
    int n1 = intal_c.length(), n2 = intal_d.length();
reverse(intal_c.begin(), intal_c.end()); 
reverse(intal_d.begin(), intal_d.end()); 
for (int i=0; i<n1; i++) 
{ 
int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
str.push_back(sum%10 + '0'); 
carry = sum/10; 
} 
for (int i=n1; i<n2; i++) 
{ 
int sum = ((str2[i]-'0')+carry); 
str.push_back(sum%10 + '0'); 
carry = sum/10; 
}
if (carry) 
str.push_back(carry+'0');
reverse(str.begin(), str.end()); 
return str; 
} 

int subintal(intal_e,int intal_f){
    int i=compareINTAL(intal_e,intal_f);
    int carry=0,l;
    string str="";
    if(i==-1){
        swap(intal_e,intal_f);
    }
    int n1 = intal_e.length(), n2 = intal_f.length();
reverse(intal_e.begin(), intal_e.end()); 
reverse(intal_f.begin(), intal_f.end());
}
for(i=0;i<n1;i++){
    if(intal_e[i]>intal_f[i])
    dif=intal_e[i]-intal_f[i];
    else{
        intal_e[i+1]=intal[i+1]-1;
        intal_e[i]=10+intal_e[i];
        dif=intal_e[i]-intal_f[i];
    }
}
int main()
{

    return 0;
}
