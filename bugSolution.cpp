std::vector<int> vec; 
for (int i = 0; i < 10; ++i) { 
  vec.push_back(i); 
}

if (vec.size() > 10) { 
  int* ptr = &vec[0]; 
  int val = ptr[10]; // This is now safe if the vector has more than 10 elements
} else {
  //Handle the case when the vector is smaller than 10 elements
  //Example:
  std::cerr << "Error: Vector is smaller than 10 elements.\n";
}
//or use at() method which does bounds checking:
//int val = vec.at(10); //This throws an exception if index out of range.