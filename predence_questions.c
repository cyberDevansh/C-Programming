#include <stdio.h>
#include <conio.h>
int main()
{
 
// question 1:
// int a = 1, b = 0, c = 1;
// if (a || b && c) {
//     printf("True");
// } else {
//     printf("False");
// }

// question 2:
// int x = 5;
// int y = x++ + ++x;
// printf("%d", y);

//question:
// int p=5;
// printf("%d",++p + ++p);

//questions for each line = What is the value of res?
// int x = 10, y = 20, z = 5; int res = x + y * z;

// int x = 20, y = 10; int res = x / y * y;


 int x = 15, y = 4; int res = x % y + x / y;


// int x = 3, y = 2; int res = x * x / y + y;


// int x = 2; int res = x * 3 + 5 * x;


// Relational and Logical Operators
// int x = 5, y = 10; int res = x < y && y > x;


// int x = 10, y = 20; int res = x < y || y < x;


// int x = 5, y = 10; int res = !(x > y);


// int x = 0, y = 1; int res = x && y || x;


// int x = 5, y = 10, z = 0; int res = x > y || z++;
// What is the value of res and z?

// Bitwise Operators
// int x = 6, y = 3; int res = x & y;


// int x = 5, y = 2; int res = x | y;


// int x = 4, y = 1; int res = x ^ y;


// int x = 5; int res = ~x;


// int x = 8, y = 2; int res = x << y;


// int x = 16, y = 2; int res = x >> y;


// int x = 3, y = 5; int res = x & y | x ^ y;


// Assignment Operators
// int x = 5; x += 3;
// What is the value of x?

// int x = 10; x *= 2 + 3;
// What is the value of x?

// int x = 7, y = 3; x /= y += 2;
// What is the value of x and y?

// int x = 4; x <<= 1;
// What is the value of x?

// int x = 10; x ^= 3;
// What is the value of x?

// Unary Operators
// int x = 5; int res = -x;


// int x = 5; int res = !x;


// int x = 10; int res = ++x;
// What is the value of res and x?

// int x = 10; int res = x--;
// What is the value of res and x?

// int x = 7; int res = ~x;


// Ternary Operator
// int x = 10, y = 20; int res = (x < y) ? x : y;


// int x = 5, y = 3; int res = (x > y) ? (x - y) : (y - x);


// int x = 10, y = 20, z = 30; int res = (x > y) ? x : (y > z ? y : z);


// Comma Operator
// int x = 10, y = 20; int res = (x, y);


// int x = 5; int res = (x += 5, x * 2);


// int x = 1; x = (x++, ++x, x + 5);
// What is the value of x?

// Precedence and Associativity
// int x = 10, y = 20, z = 30; int res = x + y * z;


// int x = 10, y = 20, z = 30; int res = (x + y) * z;


// int x = 5, y = 3; int res = x + y << 2;


// int x = 5, y = 3; int res = (x + y) << 2;


// int x = 10, y = 2; int res = x / y * y;


// int x = 4, y = 2; int res = x / (y * y);


// Logical and Bitwise Combination
// int x = 5, y = 3; int res = x && y;


// int x = 5, y = 3; int res = x || y;


// int x = 0, y = 3; int res = x || y && 0;


// int x = 1, y = 0; int res = x & y || x;


// int x = 0, y = 1; int res = x | y && x;


// Complex Expressions
// int x = 5; int res = x + x * x / x - x;


// int x = 2, y = 3, z = 1; int res = x * y / z % y + z;


// int x = 4, y = 2; int res = (x << y) >> y;


// int x = 5, y = 6; int res = (x & y) | (x ^ y);


// int x = 10, y = 20, z = 5; int res = (x < y && y > z) ? x : z;


// int x = 0, y = 5; int res = x ? x : y;


printf("%d",res);
 
getch();
return 0;
}