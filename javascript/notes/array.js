// ARRAY

// type is an object
// index

// to create an array

const arr1 = [];
const arr2 = [0, '1', true, {}, undefined];
const arr3 = [1, 2, 3];
let str = 'Hello! How are you?';

// to change an element of an array

arr[index] = value;
arr2[0] = 'Hello!';

// methods and functions

arr2.length; // length of an array

arr2.push('el'); // add elemenet(s) to the end 
arr2.unshift('el'); // add element(s) in the begining

arr2.pop(); // delete the last element and return it
arr2.shift(); // delete the first element and return it

arr3.toString(); // array -> string // 1,2,3
String(arr3); // array -> string // 1,2,3
arr3.join(); // array -> string // 1,2,3

arr3.join(', '); // 1, 2, 3
str.split(); // ['Hello! How are you?']
str.split(' '); // string -> array of strings // ["Hello!", "How", "are", "you?"]

// array iteration

for (let index = 0; index < array.length; index++) {
    console.log(arr2[index]);
}

for (let value of array) {
    console.log(value);
}

// MULTI ARRAYS (arrays of arrays)

let array = [
    [1, 2, 3],
    [4, 5, 6]
];

console.log(array[0]); // [1, 2, 3]