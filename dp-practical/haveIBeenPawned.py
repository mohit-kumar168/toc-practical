import requests
import hashlib

password_file = 'password.txt'

try:
    with open(password_file, 'r') as f:
        for line in f:
            username, password = line.strip().split(',', 1)
            sha1_obj = hashlib.sha1(password.encode()).hexdigest().upper()
            prefix, suffix = sha1_obj[:5], sha1_obj[5:]
            try:
                response = requests.get(f"https://api.pwnedpasswords.com/range/{prefix}")
                for res_line in response.text.splitlines():
                    res_suffix, count = res_line.split(':')
                    if res_suffix == suffix:
                        print(f"Your password for {username} has been leaked {count} times")
                        break
                else:
                    print(f"{username}: Your username and password are safe")
            except requests.RequestException:
                print("Error reaching the API")
except FileNotFoundError:
    print("No file found named password.txt")
