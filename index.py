from tracemalloc import start
import turtle



counter = 0
check_num = 0
stzrt_num = 0

check_num = int(input("start num?: "))

for i in range(check_num):
    start_num = int(input("your num?: "))
    if start_num // 6 and start_num % 10 == 4:
        counter += 1

print("result",counter)
