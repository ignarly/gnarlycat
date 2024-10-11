#include <stdio.h>>

    //define function is to declare constants,  can be floats or whatever
    //if (conditions)
    //  function

//basic pay=12$
    //ot 1.5x
    //tax 15% 1st 300$, 20% the next 150$, 25% of the rest
    // set variables
    //no. of hours
    //calcualate gross pay
    //remember to include overtime
int main() {
#define basic 12.00
#define tax1_300 0.15
#define tax2_150 0.20
#define tax3_all 0.25
#define ot 1.5

int h = 0;
float gross = 0;
float total = 0;
float totaltax = 0;
char Y_N;
do {
    printf("how many hours did your work this week?, enter an integer");
    scanf("%d", &h);
    printf("confirm the following, youve worked a total of %dhours [Y/N]\n", h);
    scanf(" %c", &Y_N);
}

while (Y_N == 'N' || Y_N =='n');
//exiting the loop successfully
    if(h > 40) {
        gross = basic*(ot*(h-40) + 40);

}   else {
        gross = h * basic;
}
    //exiting else{}
    printf("gross pay= %f \n", gross);

    if (gross <= 300) {
        totaltax = gross * tax1_300;
        total = gross - totaltax;
    } else if (gross <= 450) {
        totaltax = tax2_150*(gross - 300) + (300*tax1_300);
        total = gross - totaltax;
    } else {
        total = (tax3_all * (gross - 450))+(tax2_150 * 150) + (tax1_300 * 300);
    }


        printf("total hours: %d \ntotaltax: %.2f \ntotal: %.2f\n\n",h, totaltax, total);
        printf("you will receive $%.2f this week \nyou have paid %.2f in taxes,\nthank you for your contribution" , total, totaltax);

    return 0;
}