class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>table;
        char ch = 'a';
        for(auto c : key){
            if(c == ' '){
                continue;
            }
            else if(table.find(c) != table.end()){
                continue;
            }
            else{
                table[c] = ch;
                ch++;
            }
        }

        string decode = "";
        for(auto c : message){
            if(c == ' '){
                decode+=' ';
            }
            else{
                decode += table[c];

            }
        }
        return decode;

    }
};