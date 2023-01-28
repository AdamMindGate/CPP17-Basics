## Problem #2: Explaination

b is either 1 or -1 right? so in this case we need to make a decision if b is 1 or -1, in this case <br>
we will make a <strong>variable</strong> for each case (-1, 1) and in each case theres a different solution right? <br>
we will also make a <strong>variable</strong> for each solution
```cs
    //solution one
    int sol_one = 2*a+1;
    //solution two
    int sol_two = a*a;

    int case_one;
    int case_nigative; 
```
Now we need equation to exclude one of the cases based on the b value.
```cs
    // case_one is either 1 or 0
    int case_one = (b+1)/2;
    // case_negative is either 1 or 0
    int case_nigative =  1 - case_one; 
```
if case_one = 1 , case_negative will be equal to 0 and the vise verse this way we can exclude the other equation
```cs
    cout<<case_one * sol_two + sol_one * case_nigative;
```


## (Problem #3: Helping Notes / Resources)<br>

Sum of first n natural numbers: https://youtu.be/aaFrAFZATKU

###


