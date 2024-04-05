import time

def fib(n):
    if n < 2:
        return n
    return fib(n-1) + fib(n-2)

if __name__ == "__main__":
    n = 35  # Change this for different inputs
    start_time = time.time()
    result = fib(n)
    duration = time.time() - start_time
    print(f"Result: {result}")
    print(f"Python execution time: {duration}")
