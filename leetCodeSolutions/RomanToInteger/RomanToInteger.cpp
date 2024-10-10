#include <iostream>
#include <string>

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int prevValue = 0; // önceki degeri tutmasi icin


        for (int i = s.length() - 1; i >= 0; i--) {
            int currValue;

            if (s[i] == 'I') {
                currValue = 1;
            }
            else if (s[i] == 'V') {
                currValue = 5;
            }
            else if (s[i] == 'X') {
                currValue = 10;
            }
            else if (s[i] == 'L') {
                currValue = 50;
            }
            else if (s[i] == 'C') {
                currValue = 100;
            }
            else if (s[i] == 'D') {
                currValue = 500;
            }
            else if (s[i] == 'M') {
                currValue = 1000;
            }

            if (currValue < prevValue) {
                sum -= currValue; // sonraki deger önceki degerden kucukse toplamdan cýkart
            }
            else
                sum += currValue; // sonraki deger onceki degerden buyukse toplamaya devam et

            prevValue = currValue; // önceki degeri guncelleme


        }
        return sum;
    }

};

