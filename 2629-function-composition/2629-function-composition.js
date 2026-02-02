/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    
    return x=> functions.reduceRight((value,fn)=> fn(value),x);
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */