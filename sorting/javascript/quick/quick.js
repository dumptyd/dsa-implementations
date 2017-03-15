"use strict";
// sorts the array in place
function quickSort(arr, low, high) {
  if (low < high) {
    let partitionIndex = partition(arr, low, high);
    quickSort(arr, low, partitionIndex-1);
    quickSort(arr, partitionIndex+1, high);
  }
}

function partition(arr, low, high) {
  let pivot = arr[high]; //use last element as pivot
  let idxOfSmallerElement = low - 1;
  
  for(let i = low; i < high; ++i) {
    if(arr[i] < pivot) {
      idxOfSmallerElement++;
      [arr[i], arr[idxOfSmallerElement]] = [arr[idxOfSmallerElement], arr[i]];
    }
  }
  let partitionIndex = idxOfSmallerElement + 1;
  [arr[partitionIndex], arr[high]] = [arr[high], arr[partitionIndex]];
  return partitionIndex; 
}


let arr = [5, 9, 7, 6, 2, 1, 10, 8];
console.log(`Unsorted: ${arr}`);
quickSort(arr, 0, arr.length-1);
console.log(`Sorted: ${arr}`);