// for loop
for (let i = 0; i < 5; i++) {
    console.log(i);
  }
  
  // forEach loop (on an array)
  let colors = ["red", "green", "blue"];
  colors.forEach(function(color) {
    console.log(color);
  });
  
  // for...of loop (iterating over an iterable)
  let iterable = [1, 2, 3];
  for (let element of iterable) {
    console.log(element);
  }
  
  // for...in loop (iterating over object properties)
  let person = { name: "Alice", age: 30 };
  for (let key in person) {
    console.log(key + ": " + person[key]);
  }
  