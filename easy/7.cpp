// 35. Search Insert Position

var searchInsert = function(nums, target) {
    let l = 0, r = nums.length - 1, m = 0;
    while (l <= r) {
        m = Math.floor(l + (r - l) / 2);
        
        if(target == nums[m]) {
            return m;
        }
        else if (target > nums[m]) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return l;
}