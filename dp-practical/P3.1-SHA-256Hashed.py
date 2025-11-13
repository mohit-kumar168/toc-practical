import hashlib

def hash_password(password: str) -> str:
    # Encode the password to bytes, then apply SHA-256
    hashed = hashlib.sha256(password.encode())
    # Return the hexadecimal representation
    return hashed.hexdigest()


# Main program
if __name__ == "__main__":
    password = input("Enter your password: ")
    hashed_password = hash_password(password)
    print("SHA-256 Hashed Password:", hashed_password)
