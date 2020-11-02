#include <stdio.h>
struct TIME{
  int seconds;
  int minutes;
  int hours;
};
void diffTime(struct TIME t1, struct TIME t2, struct TIME *diff);
int main(){
    struct TIME firstTime, secondTime, diff;
    printf("Enter the time for the first time: \n");
    printf("Enter hours, minutes and seconds respectively:");
    scanf("%d %d %d", &firstTime.hours, &firstTime.minutes, &firstTime.seconds);
    printf("Enter the time for the second time:\n");
    printf("Enter hours, minutes and seconds respectively:");
    scanf("%d %d %d", &secondTime.hours, &secondTime.minutes, &secondTime.seconds);
    // Calculate the difference between the start and stop time period.
    diffTime(firstTime,secondTime, &diff);
    printf("\nTime Differences: %d:%d:%d - ",firstTime.hours,firstTime.minutes,firstTime.seconds);
    printf("%d:%d:%d ",secondTime.hours,secondTime.minutes,secondTime.seconds);
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
    return 0;
}
void diffTime(struct TIME start, struct TIME stop, struct TIME *diff){
    if(stop.seconds > start.seconds){
        start.minutes--;//­É¦ì 
        start.seconds += 60;
    }
    diff->seconds = start.seconds - stop.seconds;
    if(stop.minutes > start.minutes){
        start.hours--;//­É¦ì
        start.minutes += 60;
    }
    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}
