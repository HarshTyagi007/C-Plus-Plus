//Program For Merging Two Integer Arrays Of Size M and N.
#include <iostream>
int main()
{
  int m, n, i = 0, j = 0;
  //Getting Size Of Array 1
  cout << "Enter size of 1st array: ";
  cin >> m;
  //Getting Size Of Array 2
  cout << "\nEnter size of 2nd array: ";
  cin >> n;
  int a[m];
  int b[n];
  //Getting M Elements Of First Array
  cout << "Enter elements of array 1:";  
  for (i = 0; i < m; i++)
    cin >> a[i];
  //Getting N Elements Of Second Array
  cout << "Enter elements of array 2:";
  for (i = 0; i < n; i++)
    cin >> b[i];
//Now Merging Both arrays..
  i = 0;
  j = 0;
  while ((i < m) && (j < n))
  {
    if (a[i] < b[j])
      cout << a[i++] << " ";
    else if (a[i] > b[j])
      cout << b[j++] << " ";
    else
    {
      cout << a[i++];
      j++;
    }
  }
  while (i < m)
    cout << a[i++] << " ";
  while (j < n)
    cout << b[j++] << " ";
  return 0;
}
