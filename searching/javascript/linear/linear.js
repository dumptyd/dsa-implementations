function linearSearch(elemToFind, arr) {
  for(let i =0;  i < arr.length; ++i) {
    if(arr[i] == elemToFind)
      return i;
  }
  return -1;
}

let arr = [0, 1, 2, 8, 13, 17, 19, 32, 42, 46];

arr.forEach( (val, i) => {
  let index = linearSearch(val, arr);
  console.log(`linearSearch(${val}, arr): ${index} \narr[${index}]: ${arr[index]}\n--------------`);
});