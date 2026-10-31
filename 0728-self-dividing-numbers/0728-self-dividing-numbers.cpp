class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        // we need only 1 wrong value to get the whole num false
        // so assume true first and check for false instead of vice versa
        vector<int> arr;
        for(int i=left;i<=right;i++){
            if(i!=0){
                bool flag = true;
                int conI = i;
                while(conI!=0){
                    int temp = conI%10;
                    conI = conI/10;
                    if (temp!=0 && i % temp == 0) continue;
                    else flag=false;
                }
                if (flag) arr.push_back(i);
            }
        }
        return arr;

    }
};