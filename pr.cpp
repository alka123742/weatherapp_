[1,2,3,4]  1

let a = [1,2,3,4]
let carry = 0;

for(let i= 0;i<a.length;i++)
{
    let num = a[i]+carry;
    carry = num
}