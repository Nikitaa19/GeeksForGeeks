class Solution {
  public:
    int divisibleBy5(string N) {
        // code here
        char lastDigit=N.back();
        if(lastDigit == '0' || lastDigit == '5'){
            return 1;
        }
        else{
            return 0;
        }
    }
};