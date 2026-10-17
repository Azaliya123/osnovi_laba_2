n = input("Введите число: ")
q = int(input("Введите исходную систему счисления: "))
x = int(input("Введите новую систему счисления: "))
digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
parts = n.upper().split(".")
integer_part = parts[0]
if len(parts) > 1:
    fractional_part = parts[1]
else:
    fractional_part = ""
M = 0
for digit in integer_part:
    M = M * q + digits.index(digit)
fraction = 0
for i, digit in enumerate(fractional_part, start=1):
    fraction += digits.index(digit) / q ** i
if M == 0:
    result = "0"
else:
    result = ""
    while M > 0:
        result = digits[M % x] + result
        M //= x
fraction_result = ""
for i in range(10):
    fraction *= x
    digit = int(fraction)
    fraction_result += digits[digit]
    fraction -= digit
    if fraction == 0:
        break
if fractional_part:
    result += "." + fraction_result
print("Результат:", result)
