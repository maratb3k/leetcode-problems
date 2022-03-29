// 278. First Bad Version

var solution = function(isBadVersion) {
    /**
     * @param {integer} n Total versions
     * @return {integer} The first bad version
     */
    return function(n) {
        let l = 1, r = n;
        while(l < r) {
            m = Math.floor(l + (r - l) / 2);
            if(isBadVersion(m)) {
            r = m - 1;
            }
            else { 
                l = m + 1;
            }
        }
        if (isBadVersion(l) ) {
            return l;
        } 
        else {
            return l + 1;
        }
    };
};