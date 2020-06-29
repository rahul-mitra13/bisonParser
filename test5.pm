/* test1.pm -- testing if statement */

program myprog
    i, j, k : int 
    a, b : bool
    a,b,c : float 
    a : int
    a: bool
    a: int
    procedure p(&e, &f : int; q, f : int)
        begin
        end
    function q() : int
        a, b, i : int
        c : array[1:10] of int 
        begin
            a = 0
            for i in 1:10
                a = a + i
                write("%d\n", a)
            end
            return a
        end
        function q() : int
        a, b, i : int
        c : array[1:10] of int
        begin
            a = 0
            for i in 1 : 10
                a = a + i
                write("%d\n", a)
            end
            return a
        end
    begin
    if ( a > 0 || b > 0) then
    a = a + 5
    end
    while (i != 0 || j != 0)
     if (i > 10.0 || i < 1.1 && k == 0) then
            write("i = %d\n", i)
        elif (j > 10.0 && k == 0 || j < 1.5) then
            write("j = %d\n", j)
        else
            write("k = %d\n", k)
        end if (i > 10.0 || i < 1.1 && k == 0) then
            write("i = %d\n", i)
        elif (j > 10.0 && k == 0 || j < 1.5) then
            write("j = %d\n", j)
        else
            write("k = %d\n", k)
        end
     end
end
