#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter the cost price: ");
    scanf("%d",&cp);
    printf("Enter the selling price: ");
    scanf("%d",&sp);
    if(cp>sp){
        float loss=(cp-sp)*100/cp;
        printf("The loss percentage is %f",loss);}

    else{
        float profit=(sp-cp)*100/cp;
        printf("The profit percentage is %f",profit,'%');
    }



    return 0;
}