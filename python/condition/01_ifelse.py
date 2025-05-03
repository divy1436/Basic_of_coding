# Check if the person is eligible to vote based on age
age = 16
if(age >= 18):
    print("can vote")  # If age is 18 or older, they can vote
else:
    print("can not drive")  # Otherwise, print "can not drive" (though it would be clearer to say "cannot vote")

# Check traffic light color and give instruction
light = "green"
if(light == "red"):
    print("stop")  # If the light is red, instruct to stop
elif(light == "green"):
    print("go")  # If the light is green, instruct to go
elif(light == "yellow"):
    print("wait")  # Ifk the light is yellow, instruct to wait


num = 3  
if(num < 5):
    print("the number is greater")  # (Actually, the message is confusing — number is **less** than 5)
if(num < 1):
    print("the num is not greater than")  # Will not print because 3 is not less than 1
