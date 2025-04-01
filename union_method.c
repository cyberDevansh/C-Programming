#include <stdio.h>
#include <conio.h>
// Define a union with two data types
union Data {
    int i;
    float f;
};

int main() {
    union Data m;

 
    m.i = 10;
    printf("data.i = %d\n", m.i);

  
    m.f = 220.5;
    printf("data.f = %f\n", m.f);

    
    printf("data.i = %d\n", m.i);  // This value is likely invalid now it is unnpredictable value or say garbage value
    getch();
    return 0;
}
