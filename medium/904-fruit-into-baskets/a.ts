function totalFruit(fruits: number[]): number {
    const count = new Map();
    let left = 0;
    let maxFruits = 0;

    for (let right = 0; right < fruits.length; right++) {
        const fruit = fruits[right];
        count.set(fruit, (count.get(fruit) || 0) + 1);

        while (count.size > 2) {
            const leftFruit = fruits[left];
            count.set(leftFruit, count.get(leftFruit) - 1);
            if (count.get(leftFruit) === 0) {
                count.delete(leftFruit);
            }
            left++;
        }

        maxFruits = Math.max(maxFruits, right - left + 1);
    }

    return maxFruits;
};