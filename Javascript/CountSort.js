let numbers = [1, 4, 1, 2, 7, 5, 2];
let count = [];
let i, z = 0;
let max = Math.max(...numbers);      
// initialize counter
for (i = 0; i <= max; i++) {
    count[i] = 0;
}
for (i=0; i < numbers.length; i++) {
    count[numbers[i]]++;
}
for (i = 0; i <= max; i++) {
    while (count[i]-- > 0) {
        numbers[z++] = i;
    }
}
// output sorted array
for (i=0; i < numbers.length; i++) {
    console.log(numbers[i]);
}