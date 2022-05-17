import turtle
t = turtle.Turtle()

sl = 100
side = 4

t.speed(5)
for i in range(side):
	for j in range(1):
		t.forward(100)
		t.left(90)
		t.forward(50)
		t.left(90)
	t.forward(sl)
	t.left(90)

#center position

t.left(45)
t.forward(71)
t.left(135)
t.forward(50)
t.left(90)
t.forward(50)
t.left(90)
t.forward(50)
t.left(135)
t.forward(71)
t.left(135)

#leftside boxes

t.forward(16.8)
t.right(90)
t.forward(50)
t.left(90)
t.forward(16.8)
t.left(90)
t.forward(50)
t.right(90)
t.forward(16.7)

#lower box

t.left(90)
t.forward(16.8)
t.right(90)
t.forward(50)
t.left(90)
t.forward(16.8)
t.left(90)
t.forward(50)
t.right(90)
t.forward(16.7)

#rightside box

t.left(90)
t.forward(16.8)
t.right(90)
t.forward(50)
t.left(90)
t.forward(16.8)
t.left(90)
t.forward(50)
t.right(90)
t.forward(16.7)

#upper box

t.left(90)
t.forward(16.8)
t.right(90)
t.forward(50)
t.left(90)
t.forward(16.8)
t.left(90)
t.forward(50)
t.right(90)

#upper inner boxes

t.forward(16.8)
t.right(90)
t.forward(8.3)
t.right(90)
t.forward(50)
t.left(90)

t.forward(8.3)
t.left(90)
t.forward(50)
t.right(90)

t.forward(8.3)
t.right(90)
t.forward(50)
t.left(90)

t.forward(8.3)
t.left(90)
t.forward(50)
t.right(90)

t.forward(8.3)
t.right(90)
t.forward(50)
t.right(90)

#lower inner boxes

t.forward(92)

t.forward(8.3)
t.right(90)
t.forward(50)
t.left(90)

t.forward(8.3)
t.left(90)
t.forward(50)
t.right(90)

t.forward(8.3)
t.right(90)
t.forward(50)
t.left(90)

t.forward(8.3)
t.left(90)
t.forward(50)
t.right(90)

t.forward(8.3)
t.right(90)
t.forward(50)
t.right(90)

#left inner boxes

t.forward(42)
t.left(90)

t.forward(8.3)
t.right(90)
t.forward(50)
t.left(90)

t.forward(8.3)
t.left(90)
t.forward(50)
t.right(90)

t.forward(8.3)
t.right(90)
t.forward(50)
t.left(90)

t.forward(8.3)
t.left(90)
t.forward(50)
t.right(90)

t.forward(8.3)
t.right(90)
t.forward(50)
t.right(90)

#right inner boxes

t.forward(42)
t.forward(50)

t.forward(8.3)
t.right(90)
t.forward(50)
t.left(90)

t.forward(8.3)
t.left(90)
t.forward(50)
t.right(90)

t.forward(8.3)
t.right(90)
t.forward(50)
t.left(90)

t.forward(8.3)
t.left(90)
t.forward(50)
t.right(90)

t.forward(8.3)
t.right(90)
t.forward(50)
t.right(180)

#right edges

t.forward(15)
t.right(25)
t.forward(20)
t.left(110)
t.forward(8)
t.left(120)
t.forward(18)

t.right(25)
t.forward(18)
t.right(90)
t.forward(41)
t.left(90)
t.forward(8)
t.right(90)
t.forward(7)

#lower edges

t.forward(18)
t.left(90)
t.forward(41)
t.right(110)
t.forward(18)
t.left(110)
t.forward(8)
t.left(120)
t.forward(20)
t.left(60)
t.forward(33)

t.left(90)
t.forward(42)

#all corner edges

t.right(90)
t.forward(7)
t.forward(60)
t.right(90)
t.forward(67)
t.right(90)
t.forward(67)


#left edges

t.right(90)
t.forward(67)
t.right(90)
t.forward(8)
t.left(90)
t.forward(42)

t.right(90)
t.forward(18)
t.right(20)
t.forward(18)
t.left(20)
t.forward(15)
t.left(90)
t.forward(7)
t.left(90)
t.forward(15)
t.left(25)
t.forward(19)
t.right(25)
t.forward(18)


t.left(90)
t.forward(42)

#upper edges

t.left(90)
t.forward(100)

t.right(90)
t.forward(15)
t.right(20)
t.forward(21)
t.left(110)
t.forward(7)
t.left(110)
t.forward(21)


input()