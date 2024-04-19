#include <stdio.h>
#include <math.h>

int main() {
    // Task 1 - 1st var
    enum week {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday
    };
    printf("%d\n", monday);
    // Task 2 - 2nd var
    struct segment {
        int  x1, y1, x2, y2;
        int length;
    } mySegment;
    mySegment.x1 = 2; mySegment.y1 = 3;
    mySegment.x2 = 4; mySegment.y2 = 5;
    printf("%d\n", mySegment.length = sqrt((mySegment.x2 - mySegment.x1)*(mySegment.x2 - mySegment.x1)+(mySegment.y2-mySegment.y1)*(mySegment.y2 - mySegment.y1))
    );
    // Task 3 - 3rd var
    union u {
        int request;
        struct status {
            unsigned int Empty: 1;
            unsigned int NumLock: 1; // 0-1
            unsigned int CapsLock: 1;
            unsigned int ScrollLock: 1;
        } kstatus;
    } keyboard;

    printf("Insert the number in hexadecimal number system:");
    scanf("%x", &keyboard.request);
    printf("Status: \nE N C S\n");
    printf("%u %u %u %u\n", keyboard.kstatus.Empty, keyboard.kstatus.NumLock, keyboard.kstatus.CapsLock, keyboard.kstatus.ScrollLock);

    return 0;
}