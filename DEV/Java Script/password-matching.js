// To check New Password and Retype Password on a webpage

//fetching the form DOM element
let form = document.getElementById('ChangePWD');

form.addEventListener('submit', event => {
    let p1 = form.elements['newPwd1'];
    let p2 = form.elements['newPwd2'];

    console.log(p1.value);
    console.log(p2.value);

    if (p1.value != p2.value) {
        // perform function if values don't match
        event.preventDefault();
    } else {
        // code to run when both passwords are match
        console.log("Password Match");
    }
});