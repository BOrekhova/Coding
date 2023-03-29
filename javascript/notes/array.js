// ARRAY

// type is an object
// index

// to create an array

const arr1 = [];
const arr2 = [0, '1', true, {}, undefined];

// to change an element of an array

arr[index] = value;
arr2[0] = 'Hello!';

// methods

arr2.length; // length of an array

arr2.push('el'); // add elemenet(s) to the end 
arr2.unshift('el'); // add element(s) in the begining

arr2.pop(); // delete the last element and return it
arr2.shift(); // delete the first element and return it

// array iteration

for (let index = 0; index < array.length; index++) {
    console.log(arr2[index]);
}

for (let value of array) {
    console.log(value);
}