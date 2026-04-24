class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        int count = 0;
        int c = 0;

        for(int i = 0 ; i < moves.length() ; i++){
            char ch = moves.charAt(i);

            if(ch == 'L') count++;
            else if(ch == 'R') count--;
            else c++;
        }

        return Math.abs(count) + c;
    }
}