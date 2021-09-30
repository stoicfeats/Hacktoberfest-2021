// path -> paths -> platform independent 

let path = require("path");

// current dir in which we are working 
let curr_path = process.cwd();
console.log("Current Path :", curr_path);

// if we want to add anything in the ending of our path 
let joined_path = path.join(curr_path, "abc", 'dcf', "efg.txt");
console.log("New Path :",joined_path);

// to check last file portion
let last_portion = path.basename(joined_path);
console.log("Last Portion",last_portion);

// path -> extension 
let ext = path.extname(joined_path);
console.log("Extension of Last file is : ", ext);