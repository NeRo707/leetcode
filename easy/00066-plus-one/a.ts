function plusOne(digits: number[]): number[] {
    return String((BigInt(digits.join('')) + 1n)).split('').map(Number)
}

// https://leetcode.com/problems/plus-one/submissions/1888949992