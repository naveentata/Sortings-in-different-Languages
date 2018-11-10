function swap(array, IndexA, IndexB) {
    var temp = array[IndexA];
    array[IndexA] = array[IndexB];
    array[IndexB] = temp;
  }
  
  function heapify(array, index, max) {
    var currentIndex, leftChild, righChild;
    
    while(index < max) {
      currentIndex = index;
      leftChild = 2*index + 1;
      righChild = 2*index + 2;
  
      if (leftChild < max && array[leftChild] > array[currentIndex]) {
        currentIndex = leftChild;
      }

      if (righChild < max && array[righChild] > array[currentIndex]) {
        currentIndex = righChild;
      }
        
      if (currentIndex == index) {
        return;
      }
      swap(array,currentIndex, index);
      i = index;
    }
  }
  
  function buildMaxHeap(array) {
    var index;
    index = array.length / 2 - 1;
    index = Math.floor(index);
    while (index >= 0) {
      heapify(array, index, array.length);
      index -= 1;
    }
  }
  
  function heapSort(array) {
    buildMaxHeap(array);
    lastElement = array.length - 1;
    while(lastElement > 0) {
      swap(array, 0, lastElement);
      heapify(array, 0, lastElement);
      lastElement -= 1
    }
  }
