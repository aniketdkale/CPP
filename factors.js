function Displayfactors(no) {
    console.log("The factors of " + no + " are:");
    for (var i = 1; i <= no; i++) {
        if (no % i == 0) {
            console.log(i);
        }
    }
}
var no = prompt('Enter a positive number: ');
Displayfactors(no);
