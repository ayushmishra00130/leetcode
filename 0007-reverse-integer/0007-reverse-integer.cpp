class Solution {
public:
    int reverse(int x) {
        long int revNum = 0;
        long int temp = x;
        while(temp != 0){
            if((revNum > INT_MAX/10) || revNum < INT_MIN/10)
                return 0;
            revNum = (temp%10) + revNum*10;
            temp =temp / 10;
        }
        return revNum;
    }
};