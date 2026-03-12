#include <math.h>

//This function will add one number to another
float addition(float n, float m)
{
	return (n + m);
}
//This function will subtract one number from another
float subtraction(float n, float m)
{
	return (n - m);
}
//This function will divide one number by another
float division(float n, float m)
{
	return (n / m);
}
//This function will multiply one number with another
float multiplication(float n, float m)
{
	return (n * m);
}
//This funcion will return de square root of one number
float squareroot(float n)
{
	return (sqrtf(n));
}
//This function will elevate one number to another (I've made it my way)
float exponenciate(float n, float m)
{
	float expo = n;
	for (int i = 0; i < m; i++) {
		expo = expo * n;
	}
	return expo;
}
//This main is to make Falcon stop whining about "maemrmsmarae you need a main"
int main(void){
	
}
