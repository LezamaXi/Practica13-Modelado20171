#include <stdlib.h> 


void bsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*))
{
    for(int j = 0; j < num -1; j++){ 
        for( int k = 0; k < num-j-1; k++){ 
            if(size == sizeof(double)){
                if((*compar)((double*)base+k+1, (double*)base+k) < 0){
                    double aux = *((double*)base+k+1);
                    *((double*)base+k+1) = *((double*)base+k); 
                    *((double*)base+k) = aux; 
                }
            }
            if(size == sizeof(int)){ 
                if((*compar)((int*)base+k+1, (int*)base+k) < 0){
                    int aux = *((int*)base+k+1); 
                    *((int*)base+k+1) = *((int*)base+k); 
                    *((int*)base+k) = aux; 
                }
            }
        }
    }
}
