function isIsogram(str) {
    // Convert the string to lowercase
    const lowercasedWord = str.toLowerCase();
  
    // Initialize an empty object to track characters
    const characters = {};
  
    // Iterate through each character in the string
    for (let i = 0; i < lowercasedWord.length; i++) {
      // Get the current character
      const character = lowercasedWord[i];
  
      // Check if the character has already been encountered
      if (characters[character]) {
        // If the character is repeated, return false
        return false;
      }
  
      // Mark the character as encountered
      characters[character] = true;
    }
  
    // If no repeated characters are found, return true
    return true;
  }
  