/*
      Net Salary Calculate
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    float bs, tax, ns, all;
    printf("Enter Basic Salary: ");
    scanf("%f", &bs);

    if(bs>=10000){
        tax = bs*0.15;// All income tax inlcuded: %15.
       
        all = bs*0.10;//Allowence: 10%.
       
        ns = (bs + all) - tax;
    }
    if(bs<10000){
        
        all = bs*0.05; // Allowence 5% without tax.

        ns = (bs + all);
    }

    printf("Net Salary: Rs. %0.2f\n", ns);
    return 0;
}