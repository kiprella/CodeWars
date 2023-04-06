function reverseWords(str) {
    const words = str.split(' ');
    const reversedWords = words.map(word => word.split('').reverse().join(''));
    const reversedString = reversedWords.join(' ');
    return reversedString;
  }
  
  // Example usage:
const originalString = "This is an example!";
const reversedString = reverseWords(originalString);
console.log(reversedString);
