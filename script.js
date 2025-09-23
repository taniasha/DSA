let n = [1, 2, 3];

let square = n.map(function(num){
    return num*num;
})
console.log(square)

let arr = [1, 2, 3, 4, 5];

let newArr = arr.filter(no => no % 2 == 0);

console.log(newArr); // Output: [2, 4]


setTimeout(()=>{
    console.log("helo")
},2000)

console.log("by")


setInterval(()=>{
    console.log("run")
},1000