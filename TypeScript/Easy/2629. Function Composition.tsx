// https://leetcode.com/problems/function-composition/

/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    if (functions.length == 0) {
        return function(x) { return x; }
    }
    
    return function(x) {
        var len = functions.length;
        var result = functions[len - 1](x);
        for (var i = len - 2; i >= 0; --i) {
            result = functions[i](result);
        }
        return result;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */
