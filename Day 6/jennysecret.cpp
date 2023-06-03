std::string greet(std::string name) 
{ 
  // Check if the name is "Johnny"
  if(name == "Johnny") {
    return "Hello, my love!";  // If the name is "Johnny", return a special greeting
  }
  
  return "Hello, " + name + "!";  // Return a generic greeting with the name
}