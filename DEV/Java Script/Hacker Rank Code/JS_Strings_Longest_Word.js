function processData(input) {
    let arraystr = input.split(" ");
    let max = "";
    for(let i = 0; i<arraystr.length; i++){
        if(arraystr[i].length> max.length){
            max = arraystr[i];
        }
    }
    console.log(max);
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
