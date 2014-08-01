#include <iostream>

int compare(int a, int b){
	if(a>b)
		std::cout << '>' << std::endl;
	else if(a<b)
		std::cout << '<' << std::endl;
	else
		std::cout << '=' << std::endl;
}

int main(){

	int n, a, b;
  	std::cin >> n;

  	for(int i = 0; i < n; i++){
  		std::cin >> a >> b;
  		compare(a,b);
  	}
}