var twoSum = function(nums, target) {
    const prevMap = new Map();
    
    for (const [i, num] of nums.entries()) {
        const diff = target - num;
        if (prevMap.has(diff)) {
            return [prevMap.get(diff), i];
        }
        prevMap.set(num, i);
    }
    
    return [];
};