class Solution {
    func lengthOfLongestSubstring(_ s: String) -> Int {
        var maxLength = 0;
        let chars = Array(s);
        
        var left = 0;
        var right = 0;
        var records:[Character: Int] = [:]
        
        while(right < chars.count) {
            let char = chars[right];
            
            if(records[char] != nil) {
                left = max(records[char]! + 1, left);
            }
            
            records[char] = right;
            maxLength = max(maxLength, right - left + 1);
            right += 1;
            
        }
        return maxLength;
        
        
        
    }
}