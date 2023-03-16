class Solution {
    private int value(char num){
        if(num == '0'){
            return 1;
        }
        else{
            return num - '0';
        }
    }
    public int minPartitions(String n) {
        int sum = 0;

        for(int i=0; i<n.length(); i++){
            int val = value(n.charAt(i)) - sum;

            if(val < 0){
                sum += 0;
            }
            else{
                sum += val;
            }
        }
        return sum;
    }
}

// Approach 2
class Solution {
    public int minPartitions(String n) {
        return n.chars().max().getAsInt()-'0';
    }
}
