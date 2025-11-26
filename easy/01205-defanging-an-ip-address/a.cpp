class Solution {
public:
        string defangIPaddr( string adr) {
              string ans = "";
  for(int i = 0; i < adr.length(); i++){
    if(adr[i] == '.'){
      ans += "[.]";
    }
    else{
      ans += adr[i];
    }
  }
  return ans;
        }
};
