function processData(input) {
    //Enter your code here
    let isPrime = true;
    for(let div = 2; div*div<=input; div++){
        if(input % div == 0){
            isPrime = false;
            break;
        }
    }
    
    if(isPrime == true){
        console.log("Prime");
    }else{
        console.log("Not Prime")
    }
}
