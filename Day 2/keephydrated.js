function litres(time) {
    drink_amnt = time * 0.5;
    x = Math.floor(drink_amnt)  
    return x;
  }

const time = 6.7;
const water = litres(time);
console.log(water); // Output: 3
