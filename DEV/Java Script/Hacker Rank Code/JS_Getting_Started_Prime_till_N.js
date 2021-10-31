function isPrime(n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (let i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

function processData(input) 
{

    for (let i = 2; i <= input; i++) {
        if (isPrime(i)) 
            process.stdout.write(i + " ");
    }
    
} 