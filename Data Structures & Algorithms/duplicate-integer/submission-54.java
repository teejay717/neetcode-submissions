

class Solution {
    public boolean hasDuplicate(int[] nums) {
         HashSet<Integer> numsNoDupe = new HashSet<>(); 

        for (int num: nums) {
            boolean hasDuplicate = !numsNoDupe.add(num);
            if (hasDuplicate) {
                return true;
            }
        }
        return false;
    }
}