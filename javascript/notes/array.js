// ARRAY

// type is an object
// index

// to create an array

const arr1 = [];
const arr2 = [0, '1', true, {}, undefined];
const arr3 = [1, 2, 3];

// to change an element of an array

arr2[0] = 'Hello!';

// methods and functions

arr2.push('el'); // add elemenet(s) to the end 
arr2.unshift('el'); // add element(s) in the begining
arr2.pop(); // delete the last element and return it
arr2.shift(); // delete the first element and return it
arr2.splice(0, 1) // arr2.splice(index [, deleteCount, item1, item2, item3...])

const ARR1 = arr3.slice(1, 2); // ARR1 = [2]
const ARR2 = arr3.slice(-1);  // ARR2 = [3]
const ARR3 = arr3.slice();   // ARR3 = [1, 2, 3]

const ARR4 = arr1.concat(ARR1, ARR2, ARR3); // ARR4 = [2, 3, 1, 2, 3]

const ARR5 = ARR4.filter(e => e > 2); // ARR5 = [3, 3]

const ARR6 = arr3.map(e => e + 1) // ARR6 = [2, 3, 4]

arr2.length; // length of an array
arr3.toString(); // array -> string // 1,2,3
String(arr3); // array -> string // 1,2,3
arr3.join(); // array -> string // 1,2,3
arr3.join(', '); // 1, 2, 3
str.split(); // ['Hello! How are you?']
str.split(' '); // string -> array of strings // ["Hello!", "How", "are", "you?"]

// array iteration

for (let i=0; i<arr2.length; i++) {
    console.log(arr2[i]);
}

for (let value of array) {
    console.log(value);
}

// MULTI ARRAY (array of arrays)

let array = [
    [1, 2, 3],
    [4, 5, 6]
];

console.log(array[0]); // [1, 2, 3]