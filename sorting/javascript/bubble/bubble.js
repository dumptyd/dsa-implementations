let unsortedArr = [3,2,1,4,5,6,7,4,2,1,4,6,8,0,6,4,3];

function bubble(arr) {
  let swapped = true;
  let indexOflastUnsortedElement = unsortedArr.length - 1;
  while(swapped){
    swapped = false;
    for(let i = 1; i <= indexOflastUnsortedElement; ++i){
      if(arr[i] < arr[i-1]){
        [arr[i], arr[i-1]] = [arr[i-1], arr[i]];
        swapped = true;
      }
    }
    indexOflastUnsortedElement--;
  }
  return arr;
}

console.log(`Unsorted: ${unsortedArr}`);
console.log(`Sorted: ${bubble(unsortedArr)}`);

