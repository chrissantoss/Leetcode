class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        map <char, bool> isVisited;
        
        for (int i = 0; i < J.size(); i++){
            isVisited[J[i]] = true;
        }
        
        int numJewels = 0;
        
        for (int i = 0; i < S.size(); i++){
        
            if(isVisited[S[i]]){
                numJewels++;
            }
        }
        
        return numJewels;
    }
    
};
