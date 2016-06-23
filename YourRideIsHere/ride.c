/*
ID: liyongf1
LANG: C
TASK: ride
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fin  = fopen ("ride.in", "r");
    FILE *fout = fopen ("ride.out", "w");    

    char c1, c2, c3, c4, c5, c6;
    fscanf (fin, "%c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6  );
    int value1 = c1 - 64;
    int value2 = c2 - 64;
    int value3 = c3 - 64;    
    int value4 = c4 - 64;
    int value5 = c5 - 64;
    int value6 = c6 - 64;
    int cometValue = value1 * value2 * value3 * value4 * value5 * value6;
    printf("cometValue \n%c %d \n%c %d \n%c %d \n%c %d \n%c %d \n%c %d\n%d\n", c1, value1, c2, value2, c3, value3, c4, value4, c5, value5, c6, value6, cometValue);

    char temp;
    fscanf (fin, "%c", &temp);
    fscanf (fin, "%c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6  );
    value1 = c1 - 64;
    value2 = c2 - 64;
    value3 = c3 - 64;
    value4 = c4 - 64;
    value5 = c5 - 64;
    value6 = c6 - 64;
    int groupValue = value1 * value2 * value3 * value4 * value5 * value6;
    printf("groupValue \n%c %d \n%c %d \n%c %d \n%c %d \n%c %d \n%c %d\n%d\n", c1, value1, c2, value2, c3, value3, c4, value4, c5, value5, c6, value6, groupValue);

    int cometRem = cometValue % 47;
    int groupRem = groupValue % 47;    
    fprintf (fout, "%s\n", (cometRem - groupRem ? "STAY" : "GO"));
    exit (0);
}

