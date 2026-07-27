class Solution {
public:
    int bestClosingTime(string customers) {
        int minPen = 0;
        for(int i = 0;i < customers.size();i++){
            if(customers[i] == 'Y'){
                minPen++;
            }
        }

        int index = 0;
        int pen = minPen;
        for(int i = 0;i < customers.size();i++){
            if(customers[i] == 'Y'){
                pen--;
            }
            else{
                pen++;
            }

            if(pen < minPen){
                minPen = pen;
                index = i+1;
            }
        }
        return index;
    }
};