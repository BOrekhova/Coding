#include <iostream>

int main ()
{
    int now, a = 1, b = 0, index = 0;
    std::cin >> now;
    while (now != b)
    {
        a = a + b;
        b = a - b;
        ++index;
        if (now < b)
        {
            index = -1;
            break;
        }
    }
    std::cout << index ;
}##
Assign(input, '17-1.txt');
var (a, b) := ReadlnInteger2;             // первая пара точек
var up := b > a;                          // проверка на up
var k := 0;                               // счетчик локальных максимумов
var (pos, posb, dmin) := (2, 0, MaxInt);  // текущая точка, точка с максимумом, минимальное расстояние
while not eof do
begin
  a := b;
  b := ReadlnInteger;
  Inc(pos);
  if up then
    if b < a then
    begin
      Inc(k);
      if posb <> 0 then dmin := Min(dmin, pos - posb);
      posb := pos;
    end;
  up := b > a  
end;
Print(k, dmin)   // будет выведено 3316 2