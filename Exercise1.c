#include <stdio.h>
#include <math.h>

/*int main ()
{
    // Ramesh’s basic salary is input through the keyboard.
    // His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
    // Write a program to calculate his gross salary.

    float basic ,dearness ,house_rent ,gross; // Declearing the variables.

    printf("\nInput Ypur Basic Salary :- ");
    scanf("%f",&basic);

    dearness = 0.4 * basic; // 0.4 = 40/100 or 40%

    house_rent = 0.2 * basic; // 0.2 = 20/100 or 20%

    gross = basic + dearness + house_rent; // calculates gross.

    printf("\nThe Gross Salary is %f\n",gross);

    return 0;

}*/

/*int main()
{
    //The distance between two cities (in km.) is input through the keyboard.
    // Write a program to convert and print this distance in meters, feet, inches and centimeters.

    int d_km;
    long int d_u;

    printf("\nEnter the Distance Between Two Cities :- ");
    scanf("%d",&d_km);

    d_u = d_km * 1000; //1km = 1000m
    printf("\nThe Distance in meters is %ld\n",d_u);

    d_u = d_km * 3280.8399; //1km = 3280.8399feet
    printf("\nThe Distance in feet is %ld\n",d_u);

    d_u = d_km * 39370.0787; //1km = 39370.0787in
    printf("\nThe Distance in inches is %ld\n",d_u);

    d_u = d_km * 100000; // 1km = 100000cm
    printf("\nThe Distance in centimeters is %ld\n",d_u);

    return 0;

}*/

/*int main()
{
    // If the marks obtained by a student in five different subjects are input through the keyboard,
    // find out the aggregate marks and percentage marks obtained by the student.
    // Assume that the maximum marks that can be obtained by a student in each subject is 100.

    int marks[4] ,i;
    float uni;

    printf("\nEnter the marks obtained by Students :- "); // Takes entry for the array
    for(i=0; i<5; i++)
    {
        scanf("%d",&marks[i]);
    }

    for(i=0; i<5; i++) // Calculates total marks
    {
        uni = uni + marks[i];
    }

    printf("\nThe Student gained %f out of 500\n",uni);

    uni = uni/500*100;
    printf("\nThe Persentage gained By the student is %f\n",uni);

}*/

/*int main()
{
    // Temperature of a city in Fahrenheit degrees is input through the keyboard.
    // Write a program to convert this temperature into Centigrade degrees.

    float temp_f ,temp_c;

    printf("\nEnter the Temperature of the city in Fahrenheit :- ");
    scanf("%f",&temp_f);

    temp_c = (temp_f -32)*5/9; // Formula

    printf("\nThe Temperature in celcius is :- %f C\n",temp_c);

}*/

/*void rectangle(int len,int bre) // For area and Perimetre of Rectangle
{
    float area = len * bre; // formula

    float peri = 2*(len + bre); // formula

    printf("\nThe Area of the Rectangle is %f\n",area);
    printf("The Perimeter of the Rectangle is %f\n",peri);
}

void circle(float rad) // For circumference and area of circle
{
    float area = 3.14 * rad * rad; // Formula

    float peri = 2 * 3.14 * rad; // Formula

    printf("\nThe Area of the Circle is %f\n",area);
    printf("The Perimeter of the Circle is %f\n",peri); 
}
int main()
{
    // The length & breadth of a rectangle and radius of a circle are input through the keyboard.
    // Write a program to calculate the area & perimeter of the rectangle,
    // and the area & circumference of the circle.
    
    int rec_l, rec_b, cir;

    printf("Enter the Length and Breath of Rectangle respectively :- ");
    scanf("%d %d",&rec_l,&rec_b);

    rectangle(rec_l,rec_b); // using function

    printf("Enter the Radius of the circle :- ");
    scanf("%d",&cir);

    circle(cir); // using function

    return 0;
}*/

/*int main()
{
    // Two numbers are input through the keyboard into two locations C and D.
    // Write a program to interchange the contents of C and D.

    int C, D; // C = 4 ,D =5

    printf("\nEnter the values of C and D :- ");
    scanf("%d %d",&C,&D);

    C = C + D; // 9
    D = C - D; // 4
    C = C - D; // 5 , i.e swap complete

    printf("The swaped Numbers C and D respectively is :- %d %d\n",C,D);

    return 0;
}*/

/*int main()
{
    // If a five-digit number is input through the keyboard,
    // write a program to calculate the sum of its digits.
    int num, i;

    printf("\nEnter Your Five digit number :- ");
    scanf("%d",&num);

    int temp ,sum;

    for(i=0; i<5; i++)
    {
        temp = num % 10; // gets the last digit
        sum = sum + temp; // adds it to sum
        num = num / 10; // removes the last digit
    }

    printf("\nThe Sum of the digits is :- %d\n",sum);
    return 0;
}*/

/*int main()
{
    // If a five-digit number is input through the keyboard,
    // write a program to reverse the number.
    int num, rev = 0, rem, i; // num = 12345

    printf("\nEnter your five digit Number :- ");
    scanf("%d",&num);

    for(i=0; i<5; i++)
    {
        rem = num % 10; // 5
        rev = rev * 10 + rem; // 5 and goes on increasing like 50 ,500
        num = num /10; // 1234
    }

    printf("The Reversed Number is %d\n",rev);
    
}*/

/*int main()
{
    // If a four-digit number is input through the keyboard,
    // write a program to obtain the sum of the first and last digit of this number.
    int num, i, rem , sum = 0; // num = 1234

    printf("\nEnter Your four Digit Number :- ");
    scanf("%d",&num);

    rem = num % 10;
    sum = sum + rem;

    while(num != 0) // To get the the last number
    {
        rem = num % 10; // 4
        num = num / 10; // 123
    }

    sum = sum + rem;

    printf("The sum of First and last digit of the number is %d\n",sum);

}*/

int main()
{
    // In a town, the percentage of men is 52.
    // The percentage of total literacy is 48.
    // If total percentage of literate men is 35 of the total population,
    // write a program to find the total number 48 Let Us C of illiterate men and women if the population of the town is 80,000.

    const int total = 80000;
    int men, women, tot_l, lit_m, lit_w;
    int ill_m, ill_w;

    men = 0.52 * total; // total men
    women = total - men; // total women

    tot_l = 0.48 * total; // total literate
    lit_m = 0.35 * total; // literate men
    lit_w = tot_l - lit_m; // literate men

    ill_m = men - lit_m; // illerate men
    ill_w = women -lit_w;// illerate women

    printf("\nThe illeterate Women and Men respectively are %d %d\n",ill_m,ill_w);

    return 0;

}

/*int main()
{
    //A cashier has currency notes of denominations 10, 50 and 100.
    // If the amount to be withdrawn is input through the keyboard in hundreds,
    // find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.

    int num, nt_100, nt_50, nt_10, temp; // num = 1280

    printf("\nEnter Your Number :- ");
    scanf("%d",&num);

    nt_100 = num / 100; // 12
    temp = num - 100*nt_100; // 1280 - 1200

    nt_50 = temp / 50; // 1
    temp = num - (100*nt_100 + 50*nt_50);

    nt_10 = temp / 10; // 3

    printf("Number of Notes of 100 is %d ,50 is %d ,10 is %d\n",nt_100,nt_50,nt_10);
    return 0;

}*/

/*int main()
{
    // If the total selling price of 15 items and the total profit earned on them is input through the keyboard,
    // write a program to find the cost price of one item.

    int sel, cst, pr;

    printf("\nEnter the selling price :- ");
    scanf("%d",&sel);

    printf("\nEnter the profit :- ");
    scanf("%d",&pr);

    cst = (sel - pr) / 15;

    printf("\nThe cost price of one item is :- %d\n",cst);
    return 0;

}*/

/*int main()
{
    // If a five-digit number is input through the keyboard,
    // write a program to print a new number by adding one to each of its digits.
    // For example if the number that is input is 12391 then the output should be displayed as 23402.

    int num, new = 0, rem, i; // num = 12345

    printf("\nEnter your five digit number :- ");
    scanf("%d",&num);

    for(i=0; i<5; i++)
    {
        rem = num % 10; // 5
        new = new + ((rem + 1)*pow(10,i)); // To make the Number again
        num = num / 10;
    }

    printf("\nThe New Number is %d\n",new); // 23456
    return 0;

}*/