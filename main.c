#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void unitati(int n)
{

 switch (n)

 {
 case 1 : printf("unu");break;
 case 2 : printf("doi");break;
 case 3 : printf("trei");break;
 case 4 : printf("patru");break;
 case 5 : printf("cinci");break;
 case 6 : printf("sase");break;
 case 7 : printf("sapte");break;
 case 8 : printf("opt");break;
 case 9 : printf("noua");break;
 }
}
void sprezece(int n)
{
 switch (n%10)
 {
 case 0 : printf("zece");break;
 case 1 : printf("unsprezece");break;
 case 4 : printf("paisprezece");break;
 case 6 : printf("saisprezece");break;
 default: unitati(n%10);printf("sprezece");
 }
}
void zeci(int n)
{
 switch(n/10)
 {
 case 2 : printf("douazeci");break;
 case 6 : printf("saizeci");break;
 default: unitati(n/10);
 printf("zeci");
 }
 if(n%10) {printf(" si ");unitati(n%10);}
}
void sub100(int n)
{
 if (n<10) unitati(n);
 else if(n<20) sprezece(n%10);
 else zeci(n);
}

void sute(int x){
if(x < 100)
    sub100(x);
else
   {

    switch(x / 100){
case 1: printf("o suta ");break;
case 2: printf("doua sute ");break;
case 3: printf("trei sute ");break;
case 4: printf("patru sute ");break;
case 5: printf("cinci sute ");break;
case 6: printf("sase sute ");break;
case 7: printf("sapte sute ");break;
case 8: printf("opt sute ");break;
case 9: printf("noua sute ");break;

}
if (x % 100 )
    sub100(x%100);
}
}
void mii (int x){
if(x < 1000)
    sute(x);
else
    switch(x / 1000){
case 1: printf("o mie ");break;
case 2: printf("doua mii ");break;
case 3: printf("trei mii ");break;
case 4: printf("patru mii ");break;
case 5: printf("cinci mii ");break;
case 6: printf("sase mii ");break;
case 7: printf("sapte mii ");break;
case 8: printf("opt mii ");break;
case 9: printf("noua mii ");break;

}
if (x / 1000)
    sute(x%1000);
}
void zeciDeMii(int x){
if(x < 10000)
    mii(x);
else
    if(x / 10000 == 1){
    sprezece(x / 1000);
    printf(" mii ");
    sute(x%1000);
}else{
sub100(x / 1000);
printf(" de mii ");
sute(x % 1000);
}
}

void suteDeMii(int x){
if(x < 100000)
    zeciDeMii(x);

  else{
    sute(x / 1000);
    printf(" de mii ");
    sute(x % 1000);
  }

}


int main()
{

 int n;
 printf("Introduceti numarul: ");
 scanf("%d", &n);
 if (n == 0)
    printf("zero");
 if (n < 1000000)
    suteDeMii(n);
 else
    printf("fatal error ! number too high ! try numbers below 1000000");

 return 0;

 }
