/*
pass by value:
    is what I am acustomed to according to bucky
    for example:
        sqrt(81)
            81 is consideed a pass by value
    We pass a copy of that variable into the function so the
    original varibale itself; cannot be changed until we set it equal toa nother value so that
    way the function has access to the copy of that variable not the original itself.

    in.short: passing in the copy

pass by reference:
    whenever you pass in a variable by reference, you pass in the 
    variables address. Whenever we do this, we give the function direct acess to that variable.
    The ORIGINAL variable can be modified inside your

why:
    - It causes less stress on the computer
    - If we pass 100,000 variables, it dont have to make Nth ammount of copies with reference.
*/