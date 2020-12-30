def is_prime(n):
    if n == 2:
        return True
    if n % 2 == 0 or n <= 1:
        return False

    x = int(n**0.5) + 1
    for c in range(3, x, 2):
        if n % c == 0:
            return False
    return True
def generate_primes(x):
    if(x<2):
        return []
    y=2
    primes=[]
    while(y<=x):
        if(is_prime(y)):
            primes.append(y)
        y+=1
    return primes
