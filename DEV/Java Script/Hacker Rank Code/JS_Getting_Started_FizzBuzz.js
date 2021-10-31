function processData(input) {
    for(let div = 1; div<=input; div++){
        if(div%3==0 && div%5!=0){
            console.log("Fizz");
        }else if(div%5==0 && div%3!=0){
            console.log("Buzz");
        }else if(div%3 == 0 && div % 5 ==0){
            console.log("FizzBuzz");
        }else{
            console.log(div);
        }
    }
} 
