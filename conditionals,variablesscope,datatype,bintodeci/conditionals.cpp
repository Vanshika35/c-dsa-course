#include<iostream>
using namespace std;

int main(){
    /*int a;
    cin>>a; 
    //cout << "value of n is : " << n << endl;
    if(a>0){
        cout << "A is positive" << endl;
    }
    else{
        cout << "A is negative" << endl;

    }
    int a,b;
    cout << "enter the value of a : " << endl;
    cin >> a;
    cout << "enter the value of b : " << endl;
    cin >> b;
    if(a > b){
        cout << "A is greater "<< endl;
    }
    if(b > a){
        cout << "B is greater " << endl;
    }

    // a = cin.get();
    // cin.get() takes the character value so it took the value of '1'
    // a = '1'value got mapped with ->49 ascii value 
   // we got to know that cin doesnot read tab(\t), enter(\n), space(_)
    //cin.get()->reads space, enter, tab
    // cout << " value of a is : " << a << endl;
    // this is not a right way to code if->else->(if->else)inside of else then inside of another else things are getting too complicated...
    // lets do it in another way;
    int a;
    cout << "enter the value of a ";
    cin>>a;
    if(a>0){
        cout << " a is positive " << endl;
    }
    else{
        if(a<0){
            cout << " a is negative " << endl;
        }
        else{
            cout << "a is 0 " << endl;
        }
    }
    int c;
    cin >> c;
    if(c>0){
        cout << "number is positive ";
    }
    else if(c<0){
        cout << "number is negative ";
    }
    else{
        cout << "number is 0 ";
    }*/
    
    /*int a = 9;
    if(a==9){
        cout <<"NINEY"<<" ";
    }
    if(a>0){
        cout << "POSITIVE";
    }
    else{
        cout <<"NEGATIVE";
    }
    int a = 2;
    int b = a+1;
    if((a=3)==b){
        cout <<a;
    }
    else{
        cout << a+1;
    }
    int a = 24;
    if(a>20){
        cout << "LOVE ";
    }
    else if(a==24){
        cout << "Lovely";
    }
    else
    {
        cout <<"Babbar";
    }
    cout <<a;
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout << "This is lowercase alphabet" << endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout << "This is uppercase alphabet" << endl;
    }
    else if(ch>='0' && ch<='9'){
        cout << "This is numeric" << endl;

    }
    else{
        cout << "This is neither uppercase, lowercase, numeric" << endl;
    } 
    int n;
    cin >> n;
    int i = 0;
    while(i<=n){
        cout << i << " ";
        i++;
    }
    int n;
    cin >> n;
    int sum=0;
    int i = 1;
    while(i<=n){
        sum += i;
        i++;
    }
    cout << sum << endl;
    // formula to calculate sum of n numbers is sum = n/2(a+l),a=1st no.,l=last no.,
     //Q->calculating the sum of all even numbers, first n natural even numbers sum is n(n+1)formula wise
    int n;
    cin >> n;
    int i = 2;
    int sum = 0;
    while(i<=n){
        sum +=i;
        i = i+2;
    }
    cout << sum << endl;*/
    //Q-> farheniet to celsius 
    //Q->given number is prime or not
    int n;
    cin >> n;
    int i = 2;
    while(i<n){
        if((n%i == 0)){
            cout << "not prime for "<< i <<endl;
        }
        else{
            cout << "prime number for " << i <<endl;
        }
        i++;
    }
            
    



     
}

