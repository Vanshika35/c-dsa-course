#include<iostream>
using namespace std;

int main(){

    // written a code for fehrenheit to celcius conversion

   /* double tempF;
    cout << "enter temperature in fehrenheit : ";
    cin >> tempF;

    double tempC;
    tempC = (tempF - 32)*5/9;

    cout << "The temperature in celcius is : " << tempC << " degree celcius." << endl; */

    // code for prime numbers

    /*int n;
    
    cout << "enter the number : ";
    cin >> n;

    int i = 2;
    bool isPrime = 1;
    while(i < n){

        if(n%i == 0){
            isPrime = 0;
            break;
        }
        i++;
    }

    if(isPrime){
        cout << "Prime number " << endl;
    }
    else{
        cout << "not a prime number " << endl;
    } */

    //patterns question 
    /*Q1 -> ****
            ****
            ****
            ****      
    
    int n;
    cin >> n;
     int row = 1;
     while(row <= n){
        int col = 1;
        while(col <= n){
            cout << '*' << " ";
            col++;
        }
        cout << endl;
        row++;
        
     }      */

     /*111
       222
       333

        int n;
        cin >> n;
         
        int i = 1;
        while(i <= n){
            int j = 1;
            while(j <= n){
                cout << i << " ";
                j = j + 1;
            }
            cout << endl;
            i = i + 1;

        }      */

        /* 1234
           1234
           1234
           1234   

           int n;
           cin >> n;

           int i = 1;
           while(i <= n){
                int j = 1;
                while(j <= n){
                    cout << j << " ";
                    j = j + 1;
                }
                cout << endl;
                i = i + 1;
           }  */


/* 3 2 1
   3 2 1
   3 2 1


   int n;
   cin >> n;
   int i = 1;
   while(i <= n){
    int j = 1;
    while(j <= n){
        cout << n-j+1 << " ";
        j = j + 1;
    }
    cout << endl;
    i = i + 1;
   }            */

   /*Q 123
       456
       789

       int n;
       cin >> n;

       int count = 1;
       int i = 1;

       while(i <= n){
        int j = 1;
        while(j <= n){
            cout << count << " ";
            count++;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
       }                      */

       /* *
          ** 
          ***
          ****       

         int n;
         cin >> n;

         int i = 1;
         while(i <= n){
            int j = 1;
            while(j<=i){
                cout << "*" << " ";
                j = j + 1;
            }
            cout << endl;
            i = i + 1;
         }              */

/* 1
   2 2
   3 3 3
   4 4 4 4

   int n;
   cin >> n;

   int row = 1;
   while(row <= n){
    int col = 1;
    while(col <= row){
        cout << row << " ";
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
   }                */

   /* 1
      2 3
      4 5 6
      7 8 9 10 

    int n;
    cin >> n;

    int row = 1;
    int count = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << count << " ";
            count = count + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }           */

    /*  1
        2 3
        3 4 5
        4 5 6 7
        

       int n;
       cin >> n;

       int row = 1;

       while(row <= n){
        int col = 1;
        int value = row;
        while(col <= row){
            cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
         
       }     

       int n;
       cin >> n;

       int row = 1;
       while(row <= n){
        int col = 1;
        while(col <= row){
            cout << row+col-1 << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
       }                        */
    
    /* 1
       2 1
       3 2 1
       4 3 2 1
    
    int n;
    cin >> n;
    
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << row-col+1 << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }               */

    /* A A A
       B B B
       C C C 

       int n;
       cin >> n;

       int row = 1;
       char ch = 'A';
       while(row <= n){

        int col = 1;

        while(col <= n){
            cout << ch << " ";
            col = col + 1;
            
        }
        cout << endl;
        ch++;
        row = row + 1;
       }                   

       // Another way to solve this problem

       int n;
       cin >> n;

       int row = 1;

        while(row <= n){

            int col = 1;
            while(col <= n){
                char ch = 'A' + row - 1;
                cout << ch << " ";
                col = col + 1;
            }
            cout << endl;
            row = row + 1;
        }      */

        /* A B C
           A B C
           A B C

    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = 'A' + col - 1;
            cout << ch << " ";
            col = col + 1;

        }cout << endl;
        row = row + 1;
    }   */

    /* A B C
       D E F
       G H I
    
    int n;
     cin >> n;

     int row = 1;
     char count = 'A';
     
     while(row <= n){
        int col = 1;
        while(col <= n){
            cout << count << " ";
            count = count + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
     }  */
    

/* A B C
   B C D
   C D E

     
   int n;
    cin >> n;

int row = 1;
while(row <= n){
    int col = 1;
    while(col <= n){
        char ch = 'A' + row + col - 2;
        cout << ch << " ";
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
}     */
/* 1 2 3
   2 3 4
   3 4 5

   int n ;
   cin >> n;

   int row = 1;
   while(row <= n){
    int col = 1;
    while(col <= n){
        cout << row + col - 1 << " ";
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
   }*/
/* A
   B B
   C C C

int n;
cin >> n;
int row = 1;
while(row <= n){
    int col = 1;
    while(col <= row){
        char ch = 'A' + row - 1;
        cout << ch << " ";
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
} */

/* A 
   B C
   D E F
   G H I J 

   int n;
   cin >> n;

   int row = 1;
   char ch = 'A';
   while(row <= n){
    int col = 1;
    while(col <= row){
        cout << ch << " ";
        ch = ch + 1;
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
   }          
    */

/* A
   B C
   C D E
   D E F G 

   int n;
   cin >> n;
   int row = 1;
   while(row <= n){
    int col = 1;
    while(col <= row){
        char ch = 'A' + row + col - 2;
        cout << ch << " ";
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
   }   */

/*
D
C D
B C D
A B C D


int n;
cin >> n;

int row = 1;
while(row <= n){
    int col = 1;
    char ch = 'A' + n - row;

    while(col <= row){
        
        cout << ch << " ";
        ch = ch + 1;
        col = col + 1;

    }
    cout << endl;
    row = row + 1;
}   */

/*int n;
cin >> n;

int row = 1;
while(row <= n){
    int space = n - row;
    while(space){
        cout << " ";
        space = space - 1;
    }
    int col = 1;
    while(col <= row){
        cout << "*" ;
        col = col + 1;
    }
    cout << endl;
    row = row + 1; 

}*/

/*int n;
cin >> n;

int row = 1;
while(row <= n){
    int col = 1;
    while(col <= n-row+1){
        cout << "*";
        col = col + 1;
    }
   
    cout << endl;
    row = row + 1;

}*/

/*int n;
cin >> n;

int row = 1;
while(row <= n){
    int space = row - 1;
    while(space){
        cout << " ";
        space = space - 1;
    }
    int col = 1;
    while(col <= n-row+1){
        cout << "*";
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
}*/

/* 1111
    222
     33
      4

int n;
cin >> n;
int row = 1;

while(row <= n){
    
    // printing spaces
    int space = row - 1;
    while(space){
        cout << " ";
        space = space - 1;
    }
    //printing numbers
    int col = 1;
    while(col <= n - row + 1){
        cout << row ;
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
}       */

/*   1
    22
   333
  4444
    
 int n;
 cin >> n;

 int row = 1;
 while(row <= n){

    // printing spaces
    int space = n - row;
    while(space){
        cout << " ";
        space = space - 1;
    }
    int col = 1;
    while(col <= row){
        cout << row;
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
 }  */

 /* 1 2 3 4
      2 3 4
        3 4
          4

int n;

cin >> n;
int row = 1;

while(row <= n){
    int space = row - 1;
    while(space){
        cout << " ";
        space = space - 1;
    }
    int col = 1;
    int value = row;
    while(col <= n - row + 1){
        cout << value;
        value = value + 1;
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
} 

// another way to solve this question
int n;

cin >> n;
int row = 1;

while(row <= n){
    int space = row - 1;
    while(space){
        cout << " ";
        space = space - 1;
    }
    int col = 1;
    // int value = row;
    while(col <= n - row + 1){
        // cout << value;
        // value = value + 1;
        cout << row + col - 1;
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
}

int n;
cin >> n;
int row = 1;
int count = 1;
while(row <= n){
    int space = n - row;
    while(space){
        cout << " ";
        space = space - 1;
    }
    int col = 1;
    while(col <= row){
        cout << count;
        count = count + 1;
        col = col+1;
    }
    cout << endl;
    row = row + 1;
}*/

/*int n;
cin >> n;

int row = 1;
while(row <= n){
    // spaces
    int space = n - row;
    while(space){
        cout << " ";
        space = space - 1;
    }
    int col = 1;
    while(col <= row){
        cout << col ;
        col = col+1;
    }
    int k = row - 1;
    while(k){
        cout << k;
        k = k - 1;
    }
    cout << endl;
    row = row + 1;


}*/

// dabang pattern

int n;
cin >> n;

int row = 1;
while(row <= n){
    int col = 1;
    while(col <= n - row + 1){
        cout << col;
        col = col + 1;
    }
    int k = 2*(row - 1);
    while(k){
        cout << "*";
        k = k - 1;
    }
    int j = n - row + 1;
    while(j){
        cout << j;
        j = j - 1;

    }
    cout << endl;
    row = row + 1;
}


}