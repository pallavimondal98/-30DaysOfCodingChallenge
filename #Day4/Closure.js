function outer() {
    let outerVar = "I'm from raniganj!";
    function inner() {
      console.log(outerVar); // Inner function can access outer variable
    }
    return inner;
  }
  
  let closureFunc = outer();
  closureFunc(); // Outputs: "I'm from raniganj!"
  