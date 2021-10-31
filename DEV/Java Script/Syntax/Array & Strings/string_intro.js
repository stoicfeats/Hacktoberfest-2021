// strings 
let a = 10;
// declare 
let str = "Hello I am a string";
console.log(str);

// multi line string 
let str1 = `Hello I am a 
multi-line string` ;
console.log(str1);

// concatinate in multiline is done by ${}
let str2 = `hello I am a template string ${a}` ;
console.log(str2);

// extract char
let char = str.charAt(4);
console.log(char);

// to uppercase 
let upperchar = str1.toUpperCase();
let lowerchar = str1.toLowerCase();

console.log(upperchar);
console.log(lowerchar);

//slicing -> (starting index, ending-1);
let slicedStr = str.slice(4,10)
console.log(slicedStr);

//split on the basis of space
let arraystr = str.split(' ');
console.log(arraystr);

// get length -> spaces are also included 
let length = str.length;
console.log(length);

// trim -> removes the spaces from front and back 
let str4 = "   Hello I will be trimmed   ";
let trimmedstr = str4.trim();
console.log(trimmedstr);

// spliting and trimming 
let arrString = trimmedstr.split(" ");
console.log("Array String :",arrString);

// join different 
let ans = arrString.join("+");
console.log(ans);





