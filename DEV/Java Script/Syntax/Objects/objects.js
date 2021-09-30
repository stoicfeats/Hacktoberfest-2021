// key -> string, number
// object -> key : value pair

let obj = {}
let cap = {
    name : "Steve",
    // space in key 
    "last name" : "Rogers",
    friends : ['Peter','Tony','Bruce'],
    age : 34,
    isAvenger : true,
    // function inside an object

    sayHi : function(){
        console.log("Hey, everyone");
    },
    // number as a key 
    10: "My id number is 10",
    // object in object
    address : {
        state : "Ney York", 
        city : 'NYC'
    },
}

// print 
console.log(obj);
console.log(cap);

console.log("First Name : ",cap.name);
console.log("Friend : ",cap.friends[0]);
console.log("City : ",cap.address.city);
console.log("is avenger : ",cap.isAvenger);

// two edge cases
// 1. if key contains spaces
// 2. if key is a number

console.log("last name :", cap["last name"]);
console.log("10 : ", cap[10]);

// when passing a variable in an object

let varName = 10;
console.log("Value is", cap[varName]);
varName = "address"
console.log("Value is", cap[varName]);

// loop over an object
for(let cheese in cap){
    console.log(cheese, " : ", cap[cheese]);
}

// if we use dot(.) then it searches for the literal value in object but if we use 
// square brackets [] it searches the values of the thing which is being passed inside the square bracket


// adding new properties in object 
// before adding
console.log(cap)
// adding a movies property
cap.movies = ["first avenger","civil war","avengers"];
// adding another
cap.age = 45;
// deleting friends property
delete cap.friends
console.log('`````````````````````````')
console.log(cap);
