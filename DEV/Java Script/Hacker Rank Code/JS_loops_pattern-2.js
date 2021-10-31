function processData(input) {
    let nst = ((Math.floor(input/2))+1);
    let nsp = 1;
    for(let r = 1; r<=input; r++){
        for(let c = 1; c<=nst; c++){
            process.stdout.write("*");
        }
        
        for(let c =1; c<=nsp; c++){
            process.stdout.write(" ");
        }
        
        for(let c = 1; c<=nst; c++){
            process.stdout.write("*");
        }
        console.log();
        if(r<=Math.floor(input/2)) {
            nst--;
            nsp += 2;
        }else{
            nst++;
            nsp -= 2;
        }
    }
} 
