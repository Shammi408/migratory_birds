#include <bits/stdc++.h>
#include <vector>
using namespace std;

int migratoryBirds(vector<int> arr) {
  int count[5] = {0, 0, 0, 0, 0};

  for (int i = 0; i < arr.size(); i++) {
    switch (arr[i]) {
    case 1:
      count[0] += 1;
      break;
    case 2:
      count[1] += 1;
      break;
    case 3:
      count[2] += 1;
      break;
    case 4:
      count[3] += 1;
      break;
    case 5:
      count[4] += 1;
      break;
    }
  }

  int index = 0;
  int max = count[0];

  for (int i = 0; i < 5; i++) {
    if (max <= count[i]) { //< takes lower index <= takes higher index
      max = count[i];
      index = i;
    }
  }
  return index + 1;
}

void mibirds(vector<int> arr) {
  
  int count[5] = {1, 0, 1, 3, 3};
  // this code can be inserted after line 27 of function migratorybirds()
  vector<int> index;
  int maxspots = 0;

  for (int i = 0; i < 5; i++) { //gives the highest num (more than 1 bird id seen highest will have same value)
    if (maxspots < count[i]) {
      maxspots = count[i];
    }
  }

  for (int i = 0; i < 5; i++) { //we insert the index of count array in index varray if count[i]=maxspots (highest seen bird id)
    if (count[i] == maxspots) {
      index.push_back(i + 1);
    }
  }
  for (int i = 0; i < index.size(); i++) {
    cout << index[i] << " ";
  }
  cout << endl;
}

int main() {
  // int n = 6;
  vector<int> arr = {1, 4, 4, 4, 5, 5, 5, 3};
  int result = migratoryBirds(arr);
  mibirds(arr);

  cout << result << "\n";

  return 0;
}
