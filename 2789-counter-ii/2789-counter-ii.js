/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
 let save=0;
var createCounter = function(init) {
    save=init;
    return {
        increment:()=>{
            return ++init;
        },
        decrement:()=>{
            
            return --init;
        },
        reset:()=>{
            init=save;
            return init;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */