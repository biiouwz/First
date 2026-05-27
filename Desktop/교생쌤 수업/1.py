# 재귀 사용
def factorial(n):
  if n==1:
    return 1
  return n*factorial(n-1)
  
print(factorial(3))


# def factorial(n):
#   return n*factorial(n-1)
  
# print(factorial(3))

# 기저 조건이 없어서 에러가 남



# 반복문 사용
def factorial_loop(n):
  result = 1

  for i in range(1, n+1):
    result *= i

  return result

print(factorial_loop(4))

