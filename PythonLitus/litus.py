a= "Hello, World!"
print(a[2:5])

b = "Hello, World!"
print(b[:5])

c = "Hello, World!"
print(c[2:])

d = "Hello, World!"
print(d[-5:-2])

e = "Hello, World!"
print(e.upper())

f = " Hello, World! "
print(f.strip()) #The strip() method removes any whitespace from the beginning or the end:

u = "Hello, World!"
print(u.replace("o", "J"))

p = "Hello, World!"
print(p.split(",")) # returns ['Hello', ' World!']

t = "Hello"
y = "World"
m = a + b
print(m)

quantity = 3
itemno = 567
price = 49.95
myorder = "I want to pay {2} dollars for {0} pieces of item {1}."
print(myorder.format(quantity, itemno, price))