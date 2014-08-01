#include <iostream>

int main(){

	int n, h, w, p, ba;
	long int b, min;

	while(std::cin >> n >> b >> h >> w){
		min = b+1;

	  	while(h--){
	  		f = true;
	  		std::cin >> p;

	  		for(int j = 0; j < w; j++){
	  			std::cin >> ba;
	  			if((ba >= n) && (p*n < min)){
	  				min = p*n;
	  			}
	  		}
	  	}

	  	if(min <= b)
	  		std::cout << min << std::endl;
	  	else
	  		std::cout << "stay home" << std::endl;
	}
}