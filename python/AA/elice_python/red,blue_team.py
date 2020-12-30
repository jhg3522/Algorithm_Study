a,b,c,d = map(int, input().split())
e,f,g,h = map(int, input().split())
blue = a+b+c+d
red = e+f+g+h
if (blue>=red):
    print(blue)
else:
    print(red)