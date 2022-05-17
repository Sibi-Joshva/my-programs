import turtle
t = turtle.Turtle()

# t.goto(-500,50)
sides = 4
l = 50
# for side in range(sides):
t.speed(1)
#for j in range(sides):
for i in range(sides):
	for i in range(5):#loop iterate five time 
		t.forward(l)
		t.left(144)
	t.forward(l)#after iteration program will execute this one 
	t.right(360/sides)
t.forward(l)
t.left(360/sides)

	#t.home()

input()