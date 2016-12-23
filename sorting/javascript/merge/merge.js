let unsortedArr = [3,2,1,4,5,6,7,4,2,1,4,6,8,0,6,4,3];

function mergeSort(arr) {
  if(arr.length == 1)
    return arr;
  let mid = Math.floor(arr.length * 0.5);
  let arr1 = arr.slice(0, mid);
  let arr2 = arr.slice(mid);
  return merge(mergeSort(arr1), mergeSort(arr2));
}

function merge(arr1, arr2){
  let arr = [];
  while(arr1.length && arr2.length){
    if(arr1[0] > arr2[0]){
      arr.push(arr2[0]);
      arr2.splice(0,1);
    }
    else {
      arr.push(arr1[0]);
      arr1.splice(0,1);
    }
  }
  
  arr.push(...arr1);
  arr.push(...arr2);
  return arr;
}

console.log(`Unsorted: ${unsortedArr}`);
console.log(`Sorted: ${mergeSort(unsortedArr)}`);
