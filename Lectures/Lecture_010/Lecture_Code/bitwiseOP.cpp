#include <iostream>
using namespace std;

int main()
{
    //-------BITWISE OP  ------//

    // &(and) operator , |(or), ^(xor), <<(left shift), >>(right shift), (~)compliment;
    int ans = ~22;
    cout << "The answer is: " << ans;

    return 0;
}

/*  for me
    steps below
    1: 000...010110
    2: after compliment: 111..101001 (store in that manner)
    While receiving a negative number from memory:
    3: 111..101001 starts with 1 so negative;
    4: 1's compliment: 000...010110
    5: 2'S compliment: 000...010111 = 23
    6: final answer = -23
*/