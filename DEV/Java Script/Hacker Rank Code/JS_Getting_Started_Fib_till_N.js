function processData(input) {
    let prev = 0;
    let cur = 1;
    while(prev<=input){
        process.stdout.write(prev + " ");
        
        let nextfib = prev + cur;
        prev = cur;
        cur = nextfib;
    }
} 
