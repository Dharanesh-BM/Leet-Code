class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        HashMap <Character, Integer> jewel_types = new HashMap<>();

        for(Character a: jewels.toCharArray()){
            // System.out.println(a);
            jewel_types.put(a, 1);
        }
        
        // System.out.println(jewel_types);
        int count=0;
        for(char a: stones.toCharArray()){
            // System.out.println(a);
            if(jewel_types.get(a) != null){
                count++;
            }
        }

        return count;
    }
}