#include <stdio.h>
#include <math.h>
int main(void){

double x, f_x, y, f_y, z, f_z;
printf("Use degrees for angle values \n");
printf("Enter 1st flight-path angle and coefficient of lift: \n");
 scanf("%lf %lf",&x,&f_x);
printf("Enter 2nd flight-path angle and coefficient of lift: \n");
scanf("%lf %lf",&z,&f_z);
printf("Enter new flight-path angle: \n");
scanf("%lf",&y);
f_y = (f_x*(z-y) + f_z*(y-x))/(z-x);
//f_y = f_x+(y-x)/(z-x)*(f_z - f_x);
 printf("New coefficient of lift: %lf \n", f_y);
 return 0;
  }
