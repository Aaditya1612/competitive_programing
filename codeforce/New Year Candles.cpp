/*Vasily the Programmer loves romance, so this year he decided to illuminate his room with candles.

Vasily has a candles.When Vasily lights up a new candle, it first burns for an hour and then it goes out. Vasily is smart, so he can make b went out candles into a new candle. As a result, this new candle can be used like any other new candle.

Now Vasily wonders: for how many hours can his candles light up the room if he acts optimally well? Help him find this number.

Input
The single line contains two integers, a and b (1 ≤ a ≤ 1000; 2 ≤ b ≤ 1000).

Output
Print a single integer — the number of hours Vasily can light up the room for.

Examples
input
4 2
output
7
input
6 3
output
8
Note
Consider the first sample. For the first four hours Vasily lights up new candles, then he uses four burned out candles to make two new ones and lights them up. When these candles go out (stop burning), Vasily can make another candle. Overall, Vasily can light up the room for 7 hours.
*/

/////////////////////////////////// code

#include<iostream>

using namespace std;


int main(){
   int a,b;
   cin>>a>>b;
   int sum = a;
   while(a>=b){
    sum = sum +(a/b);
     a = (a/b) + (a%b);
   }
   cout<<sum<<endl;
}
