import datetime

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def next_prime(n):
    while True:
        n += 1
        if is_prime(n):
            return n

def rod(date, dow, n):
    date_obj = datetime.datetime.strptime(date, '%Y%m%d')
    cd = date_obj
    dtc = 1
    while dtc <= n:
        if is_prime(dtc) and cd.strftime('%b') in ['Feb', 'Mar', 'May', 'Jul', 'Nov']:
            return f'Yes {dtc}'
        cd += datetime.timedelta(days=1)
        dtc += 1
    
    p = 2
    while True:
        if is_prime(p) and cd.strftime('%b') in ['Feb', 'Mar', 'May', 'Jul', 'Nov']:
            return f'No {p}'
        p = next_prime(p)

    return 'No 0'

def main():
    date, dow, n = input().split()
    result = rod(date, dow, int(n))
    print(result)

if __name__ == "__main__":
    main()
