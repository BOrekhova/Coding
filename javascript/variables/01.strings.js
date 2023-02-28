// STRINGS

// quotes: ('' == "") + (``)
const company = '"company"'; // "company"
const company1 = "\"company\""; // "company"

// transfer: \n
console.log("first string\nsecond string"); // > first string second string
console.log("first string\\nsecond string"); // > first string\nsecond string
console.log(`first string
second string`);

// concatenation (summ of strings)
console.log("hi, " + "petr"); // hi, petr

const name = "petr";
const greeting1 = "hi, " + name + "!"; // hi, petr!
const greeting = `hi, ${name}!`;

// methods
let str = "hi";
alert(str.length); // length of the string // 2
alert(str.charAt(1)); // index // i // you can go beyound
alert(str[0]); // index // h // you can not go beyond

str.toLowerCase(); // all symbols are lowercase
str.toUpperCase(); // all symbols are uppercase

str.trim(); // to get fid of unnecessary space

parseFloat(str); // string -> float
parseInt(str);  // string -> integer
let num = String(null); // "null"
nums.toString(); // "100"
null.toString() // ERROR!

console.log(String.fromCharCode(63)); // ?