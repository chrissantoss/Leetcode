class Solution {
public:
    string defangIPaddr(string address) {
        
        string toReturn = "";
        
        for (int i = 0; i < address.size(); i++){
            
            if (address[i] == '.'){
                toReturn += "[.]";
            } else {
                
            toReturn += address[i];
            }
        }
        return toReturn;
    }
};
