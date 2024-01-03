 #include <stdio.h>

int factorial(int N) 
{ 
    if (N == 0) 
        return 1; 
  
    // Recursive call 
    return N * factorial(N - 1); 
} 
  
int main() 
{ 
    int n; 
    
    scanf("%d",&n); 
    printf("Factorial of %d using recursion: %d\n", n, factorial(n)); 
  
    return 0; 
}
