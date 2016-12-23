let unsortedArr = [3,2,1,4,5,6,7,4,2,1,4,6,8,0,6,4,3];

function selection(arr) {
  for(let i = 0; i < arr.length-1; ++i) {
    let min = i;
    for(let j = i+1; j < arr.length; ++j) {
      if(arr[j] < arr[min]){
        min = j;
      }
    }
    [arr[i], arr[min]] = [arr[min], arr[i]];
  }
  return arr;
}

console.log(`Unsorted: ${unsortedArr}`);
console.log(`Sorted: ${selection(unsortedArr)}`);
