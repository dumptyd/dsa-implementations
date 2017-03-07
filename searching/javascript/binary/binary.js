function binarySearch(elemToFind, arr) {
  let start = 0, end = arr.length-1;
  let mid = 0;
  while (start <= end) {
    mid = Math.floor((start + end) / 2);
    if (arr[mid] == elemToFind) {
      return mid;
    }
    if(arr[mid] < elemToFind) {
      start = mid + 1;
    }
    if(arr[mid] > elemToFind) {
      end = mid - 1;
    }
  }
  return -1;
}

let arr = [0, 1, 2, 8, 13, 17, 19, 32, 42, 46];

arr.forEach( (val, i) => {
  let index = binarySearch(val, arr);
  console.log(`binarySearch(${val}, arr): ${index} \narr[${index}]: ${arr[index]}\n--------------`);
});
