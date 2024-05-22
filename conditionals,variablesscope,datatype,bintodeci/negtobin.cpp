#include<iostream>
#include<math.h>
using namespace std;
/*The code is not correct -- you used pow, a floating point function. 
When you introducing floating point into an integer-only solution, the code is broken, even though 
you may get the right results now. – PaulMcKenzie
*/
/*int decimalToBinary(int n){
    int ans = 0;
    int i = 0;
    while(n != 0){
        int digit = n&1;
        ans = (digit * pow(10, i)) + ans;
        n = n>>1;
        i++;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    // int a = decimalToBinary(n);
    // cout << "decimal to binary version " << a << endl;
    // int comp1 = (~a);
    // cout << "comp 1 is " << comp1 << endl;
    // int comp2 = comp1 + 1;
    // cout << "comp2 is " << comp2;
    if(n<0){
        // n is negative
        n = n *(-1);
        int ans = decimalToBinary(n);
        cout << "decimalToBinary conversion " << ans << endl;
        // 1's complement
        int newAns = (~ans);
        cout << "1's complement is " << newAns << endl;
        //2's complement
         newAns = (newAns+1);
        cout << "2's complement is " << newAns << endl;
        int a = (~newAns);
        a = a+1;
        cout << " again taking 2's complement gives : " << a << endl;
    }
    else{
        // if n is positive
        int ans = decimalToBinary(n);
        cout << ans << endl;
    }

}*/



void print_binary(int num)
{
    // `result` stores the binary notation of `num` in decimal format
    int result = 0;

    // It ignores leading zeros and leading ones
    int place_value = 1;
    while (!(num == 0 | num == -1))
    {
        // Extracting the rightmost bit from `num`
        int bit = num & 1;

        // appending `bit` to `result`
        result += bit * place_value;

        // Shifting `num` to the right
        // so that second bit (from right) now become the rightmost bit
        num = num >> 1;
        place_value *= 10;
    }

    cout << result << endl;
}

int main()
{
    int number = -6;
    int neg_number = ~number + 1; // Took 2's compliment of number

    print_binary(number);
    print_binary(neg_number);
}