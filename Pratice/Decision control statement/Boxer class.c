#include<stdio.h>

void main() {
int w;
printf("Enter Boxer's Weight (Kg) :");
scanf("%d",&w);
/* given less than 115 */
if(w < 115) {
    printf("Boxer is in flyweight class");
/* given greater than 115 and less than 121*/
} else if(w>115 && w<121) {
    printf("Boxer is in bantamweight class");
/* given greater than 122 and less than 153*/
} else if(w>122 && w<153) {
    printf("Boxer is in featherweight class");
/* given greater than 154 and less than 189*/
} else if(w>154 && w<189) {
    printf("Boxer is in middleweight class");
/* given greater than equal to 190*/
} else if(w>= 190){
    printf("Boxer is in heavyweight class");
} else {
/* according question boxer class is not defined for 115 121 122 153 154 189*/
    printf("Boxer class is unknown");
}
}
