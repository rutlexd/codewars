int FindOutlier(std::vector<int> arr)
{
    int count = 0;
    for(unsigned long i = 0; i < arr.size(); i++){
      if (arr[i] % 2 == 0){
        count++;
      }
    }
     for(unsigned long i = 0; i < arr.size(); i++){
       if (count >= 2){
         if (arr[i] % 2 == 1 || arr[i] % 2 == -1){
           return arr[i];
         }
       }
       else if(count <2 && arr[i] % 2 == 0){
         return arr[i];
       }
     }
    return 0;
}
