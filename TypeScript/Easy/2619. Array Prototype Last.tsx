// https://leetcode.com/problems/array-prototype-last/

interface Array<T> {
    last(): T | -1;
}

Array.prototype.last = function() {
    if (this.length == 0) return -1;
    else return this[this.length - 1];
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */
