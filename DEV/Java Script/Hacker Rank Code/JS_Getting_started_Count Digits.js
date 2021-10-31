function processData(input) 
{
    let count = 0;
    while(input>0)
    {
        input = Math.floor(input/10);
        count = count+1;
    }
    console.log(count);
} 
