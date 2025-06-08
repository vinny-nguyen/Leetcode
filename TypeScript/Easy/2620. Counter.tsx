// https://leetcode.com/problems/counter/

function createCounter(n: number): () => number {
    let count = n; // makes count become mutable since ts function parameters are const by default
    return function() {
        return count++;
    }
}

/* Test:
const counter = createCounter(5);
console.log(counter()); // 5
console.log(counter()); // 6
console.log(counter()); // 7
*/

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */
