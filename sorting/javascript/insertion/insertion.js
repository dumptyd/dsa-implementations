let unsortedArr = [3,2,1,4,5,6,7,4,2,1,4,6,8,0,6,4,3];

function insertion(arr) {
  for(let i = 1; i < arr.length; ++i) {
    for(let j = i; j >= 0; --j) {
      if(arr[j] > arr[j+1]){
        [arr[j], arr[j+1]] = [arr[j+1], arr[j]];
      }
    }
  }
  return arr;
}

console.log(`Unsorted: ${unsortedArr}`);
console.log(`Sorted: ${insertion(unsortedArr)}`);
