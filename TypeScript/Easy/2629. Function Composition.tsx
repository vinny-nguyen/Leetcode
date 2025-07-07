// https://leetcode.com/problems/function-composition/

// Function type:
type F = (x: number) => number;

// Composition function:
function compose(functions: F[]): F {
    var len = functions.length;
    if (len == 0) {
        return function(x) {
            return x;
        }
    }
    
    return function(x) {
        var vincent = functions[len - 1](x);
        for (var i = len - 2; i >= 0; --i) {
            vincent = functions[i](vincent);
        }
        return vincent;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */
