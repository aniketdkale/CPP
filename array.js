function Summation(array) {
    var sum = 0;
    var i = 0;
    for (i = 0; i < array.length; ++i) {
        sum += array[i]; // add each element in an array to total
    }
    return sum; // return sum of elements in array
}
var array = [23, 6, 7, 4, 5, 7];
var ret = Summation(array);
console.log("Addition is: ", ret);
