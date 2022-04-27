Division

#include <iostream>

main() 
{
  
  Postitive division
    int a, b;  // there are two positive integers
    c = a / b; // c - the quotient (positive)
    d = a % b; // d - the reminder is discarded (positive)
  
            // int / int = int
            // int % int = int
            // float / float = float
            // int / float = float
  Negative division
    int x, y;  // x - negative, y - positive
    c = a / b; // c - the quotient (negative)
    d = a % b; // d - the reminder is discarded (negative!!)
  
  For the "math-right" answer you can use:

    d = (a % b + b) % b
    c = (a - d) / b
  
}


        
