function Summation(array):number
{
    var sum:number = 0;
    var i:number = 0;
    for (i = 0; i < array.length; ++i) {
         sum += array[i]; // add each element in an array to total
    }
    return sum;// return sum of elements in array
}

const array = [23, 6, 7, 4, 5, 7];
var ret:number = Summation(array);
console.log("Addition is: ",ret);