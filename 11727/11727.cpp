#include <iostream>

int lesser(int a, int b){
	if(a<b)
		return a;
	else
		return b;
}

int greater(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}

int checkSurvivor(int a, int b, int c){
	if(greater(c, lesser(a,b)) == lesser(a,b))
		return lesser(a,b);
	else
		return lesser(greater(a,b),c);
}

int main(){

	int n, a, b, c;
  	std::cin >> n;

  	for(int i = 0; i < n; i++){
  		std::cin >> a >> b >> c;
  		std::cout << "Case " << i+1 << ":" << " " << checkSurvivor(a,b,c) << std::endl;
  	}
}