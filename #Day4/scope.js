function outerScope() {
    let outerVar = "I'm in outer scope!";
    function innerScope() {
      let innerVar = "I'm in inner scope!";
      console.log(outerVar); // Accessible due to lexical scope
    }
    innerScope();
    console.log(innerVar); // Error, innerVar is not accessible here
  }
  outerScope();
  