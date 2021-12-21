#include<iostream>
#include<string.h>

using namespace std;

// Bài này chưa làm được đâu, đừng có mơ. Leuleu!!! 

int kiem_tra_chia_het(string number, int so_bi_chia){
    int index = 0;
    int temp = number[index] - '0';

    while(temp < so_bi_chia){
        temp = temp*10 + (number[++index] - '0');
    }

    string answer = "";
    while(index < number.size()){
        answer += (temp/so_bi_chia) + '0';
        temp = (temp%so_bi_chia)*10 + (number[++index] - '0');
    }
    if(temp == -48) return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int chu_so, so_bi_chia;
        cin >> chu_so >> so_bi_chia;
        string number;
        cin >> number;
        int count = 0;

        for(int i = 0; i < number.length(); i++){
            string s = "";
            s += number[i];
            if(number[i] == 0 ) count++;
            else if(kiem_tra_chia_het(s, so_bi_chia)) count++;
        }

        string s = "";

        for(int i = 0; i < number.length(); i++){
            if(number[i] == 0) continue;
            int size = i + 1;
            while(size <= number.length()){
                
            }
        }

        cout << endl;
    }
    return 0;
}