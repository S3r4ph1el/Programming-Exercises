a = int(input())
b = int(input())
c = int(input())

p1 = str(input())
p2 = str(input())

sequencia1 = p1 * (a + b)
sequencia2 = p2 * (b + c)
sequencia3 = (sequencia1 + sequencia2)
sequencia4 = sequencia3 * (a + c)

print(f'{sequencia4}')