/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let missing = 0;
    nums.forEach((num, index) => {
        missing ^= num^(index+1);
    })
    return missing;
};