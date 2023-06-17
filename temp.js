let arr = [10,20,30,40,50];

let ans = arr.reduce(function(prev,curr,idx){
    return prev*curr;
})

console.log(ans);