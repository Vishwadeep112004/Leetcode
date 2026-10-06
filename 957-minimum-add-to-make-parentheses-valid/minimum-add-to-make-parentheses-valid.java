class Solution {
    public int minAddToMakeValid(String s) {
        int c1=0;
        int c2=0;

        for(int i=0;i<s.length();i++){
            char a=s.charAt(i);
            if(a=='('){
                c1++;
            }
            else{
                if(c1>0){
                    c1--;
                }
                else{
                    c2++;
                }
            }
        }
        return c1+c2;
    }
}