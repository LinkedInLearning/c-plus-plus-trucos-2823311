int factorial(int);

int main(){

    // 7! = 7*6*5*4*3*2*1
    int n, resultado;
	resultado = factorial(n);
	return 0;

    return 0;
}

int factorial(int n){
	if(n==0) return 1;
	else return (n*factorial(n-1));
}