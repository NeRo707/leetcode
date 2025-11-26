/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let a = [];
    for(let k = 0; k < arr.length; k++){
        if(fn(arr[k], k)){
            a.push(arr[k]);
        }
    }
    return a;
};
