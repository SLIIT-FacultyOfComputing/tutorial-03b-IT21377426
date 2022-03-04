#include <iostream>

using namespace std;

struct Box
{
  int Height;
  int Width;
  int Length;
};

int volume(Box B);

int main() {

    struct Box B1;
    struct Box B2;
  
    cout << "Enter Box 1 Height : ";
    cin >> B1.Height;
    cout << "Enter Box 1 Width : ";
    cin >> B1.Width;
    cout << "Enter Box 1 Length : ";
    cin >> B1.Length;
    
    cout << "Enter Box 2 Height : ";
    cin >> B2.Height;
    cout << "Enter Box 2 Width : ";
    cin >> B2.Width;
    cout << "Enter Box 2 Length : ";
    cin >> B2.Length;
    
    // 5. Replace the coding below to pass the Box type structure
  int totalVolume;
    totalVolume = volume(B1)
             + volume(B2);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(Box B)
{
  return B.Height * B.Width * B.Length;
}