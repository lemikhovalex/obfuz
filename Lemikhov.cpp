#include <iostream> 
using namespace std; 
																																																										

void chat(int mes[]																																																					, int n, int i) 
{
    int lil = 
    i; 
    int l = 
    2 
    * 																																																			i + 1; 
    int r = 
    2 
    * i 
    +
     2; 
    
    
    
    
    
    
    
    if (l < n && mes[																																																				l] > mes[lil]) 
	lil = l; 
  
		if (r < n && mes[r] > mes[lil]) 
			lil = r; 
   
				if (lil != i) { 
					swap(mes[i], mes[lil]); 
   
						chat(mes, n, lil); 
			} 	
} 
 
void send(int arr[], int n) 
{  
    for (int i = n / 2 - 1;																																																		 i >= 0; i--) 
        chat(arr, n, i); 
  
    for (int i = n - 1; i >= 0; i--) { 
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
        swap(arr[0], arr[i]); 
   
        chat(arr, i, 0); 
    } 
}
																																																											int pepe = sizeof(int);
void gook(int arr[]																																																						, int n) 
{ 
	cout << arr[0];
    for (int i = 1; i < n; ++i) 
    {
        cout <<" " 																																																								<< arr[i]; 
	}
    cout << "\n"; 
} 
   
int main() 
{ 
    int mes[] = { 'k', ',', ';', 'u'}; 
    int n = sizeof(mes) / pepe; 
  
    send(mes, n); 
  
    gook(mes, n); 
} 
