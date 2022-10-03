class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        bool flag=true;
        bool uppercase=false;
        bool lowercase=false;
        bool onedigit=false;
        bool specialcharacter=false;
        int k=1;
        if(password.length()<8) return false;
        for(int i=0;i<password.length();i++){
            char c=password[i];
            if(isdigit(c)) onedigit=true;
            if(c>='A' && c<='Z') uppercase=true;
            if(c>='a' && c<='z') lowercase=true;
            if(c=='!'||c=='@'||c=='#'||c=='$'||c=='%'||c=='^'||c=='&'||c=='*'||c=='('||c==')'||c=='-'||c=='+'){
                specialcharacter=true;
            }
            if(password[i]==password[k]) flag=false;
            k++;
        }
        if(flag&&lowercase&&uppercase&&onedigit&&specialcharacter) return true;
        return false;
        
    }
};