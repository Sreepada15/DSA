#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int n;
	cin>>n;
	    int star = 0;
	    int space = 0;
	for(int i=0;i<2*n;i++){
	    if(i<=n)  star = 2*n-(2*i+1);
	    else star = (2*i+1)-2*n;
	    //space.  
	    
	    if (i<n){
	        space = i;
			
	    }
	    else{
	        space = i-star;
	        
	    }
	    for(int j=0;j<space;j++){
	        cout<<" ";
	    }
	    
	    //star
	    for(int k=0;k<star;k++){
	        cout<<"*";
	    }
		if(i !=n-1)
	   cout<<endl;
	    
	    
	    //space
	}

}


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter an odd positive integer: ";
//     cin >> n;

//     // Ensure the input is valid
//     if (n <= 0 || n % 2 == 0)
//     {
//         cout << "Please enter a positive odd integer." << endl;
//         return 1;
//     }

//     int mid = n / 2; // Middle row index

//     // Generate pattern
//     for (int i = 0; i < n; i++)
//     {
//         int stars;
//         if (i <= mid)
//         {
//             // Upper half: stars decrease
//             stars = n - 2 * i;
//         }
//         else
//         {
//             // Lower half: stars increase
//             stars = 2 * (i - mid) + 1;
//         }

//         int spaces = (n - stars) / 2; // Spaces on each side

//         // Print spaces
//         for (int j = 0; j < spaces; j++)
//         {
//             cout << " ";
//         }

//         // Print stars
//         for (int j = 0; j < stars; j++)
//         {
//             cout << "*";
//         }

//         cout << endl; // Move to the next row
//     }

//     return 0;
// }
