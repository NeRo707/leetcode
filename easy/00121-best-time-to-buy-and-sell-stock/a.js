/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
  let minPrice = prices[0];
  let maxProfit = 0;
  for (let i = 1; i < prices.length; i++) {
      if (prices[i] < minPrice) {
        //console.log("if minPrice:", minPrice , "< Prices:", prices[i])
          minPrice = prices[i];
        //console.log("MIN PRICE: =",minPrice);
        //console.log('\n');
      } else {
          //console.log("before max: ",maxProfit);
          maxProfit = Math.max(maxProfit, prices[i] - minPrice);
          //console.log("after max: ",maxProfit);
          //console.log('\n');
      }
  }
  return maxProfit;
};
console.log(maxProfit([7,10,1,3,6,4]));
