const rank = 2;

switch (rank) {
  case 1:
    console.log("You won a gold medal!");
    break;

  // Add a case for when rank is 2
  case 2:
    console.log("You won a silver medal!");
    break;
  
  // Add a case for when rank is 3
  case 3:
    console.log("You won a bronze medal!");
    break;
}


------------------------------------------------------------------------------------------------------------------

const rank = 5;

switch (rank) {
  case 1:
    console.log("You won a gold medal!");
    break;
  case 2:
    console.log("You won a silver medal!");
    break;
  case 3:
    console.log("You won a bronze medal!");
    break;
  // Add a default case
  default:
    console.log("Better luck next time");
    break;
}
