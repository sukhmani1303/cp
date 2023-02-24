#include<bits/stdc++.h>
using namespace std;


int main(){

    /// digits ///

    /*
    
    we divide the number by 10 until it becomes 0
    at each division save the remainder, which is a digit

    TC : O(log10(N))

    void digit_rev(int N){
        while(N>0){
            cout<<N%10;
            N = N/10;
        } 
    } 

    for count of digits add a counter inside while loop

    or

    void counter(int N){
        int num_digits = (int)(log10(N)+1)
        cout<<"The count is "<<num_digits<<endl;
    }

    */


    /// reverse of number ///

    /*
    
    void rev_int(int N){
        int s = 0;
        while(N>0){
            s = s*10 + N%10;
            N = N/10
        }
        cout<<"reverse is "<<s<<endl;
    }

    */


    /// palindrome ///

    /*
    
    we have to generate a reverse number and check it with the original number
        
    */


    /// armstrong number ///

    /*
    
    if the sum if cubes of digits is equal to the number -> armstrong number
    we have to get to every digit and cube it and sum it with the cubes of previous digits
    finally we compare the 2 numbers

    */


    /// print all divisions ///

    /*
    
    TC : O(sqrt(N))

    we can also use vector to store the numbers and sort and print them

    void all_divs(int N){
        for(int i = 1; i*i <= N; i++){
            if (N%i==0){
                cout<<"divisor is "<<i<<endl;
                if(N/i != i){
                    cout<<"divisor is "<<N/i<<endl;
                }
            }
        }
    }
    
    */


    /// prime ///

    /*
    Brute Force Approach: O(sqrt(N))
    we just have to find the number of divisors of the number and if it is more than 2, its not a prime number
    so, using the above logic we get the count of factors and finally check the number

    */


    /// GCD / HCF ///

    /*
   
    the will always be a GCD as 1 is common factor

    TC : O(min(n1, n2))
    we will start with lowest of the 2 numbers and check divisibility of both numbers
    after each step we will decrease the number and check divisibility again

    Better Approach: O(log(min(N1,N2)))

    Euclidean Algorithm

        for N1, N2; gcd(N1, N2) = gcd(N1-N2, N2)

        Eg: gcd(15,5) = gcd(10,5) = gcd(5,5) = gcd(0,5) = 5
        
        Thus, gcd(N1, N2) = gcd(N1 % N2, N2)
            if 0 < N1 % N2 < N2 ; gcd(N2, N1 % N2)


    def gcd(int a, int b){
        while(a>0 && b>0){
            if(a>b) a = a%b;
            else b = b%a;
        }
        if(a==0) return b;
        return a;
    }


   
   */


    return 0;
}