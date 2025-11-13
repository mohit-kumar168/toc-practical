def encrypt(text, shift):
    result = ""
    for char in text:
        if char.isalpha():
            shift_base = 65 if char.isupper() else 97
            result += chr((ord(char) - shift_base + shift) % 26 + shift_base)
        else:
            result += char
    return result


def decrypt(cipher, shift):
    return encrypt(cipher, -shift)

if __name__ == "__main__":
    message = input("Enter message: ")
    shift = int(input("Enter shift value: "))

    encrypted = encrypt(message, shift)
    print("Encrypted message:", encrypted)

    decrypted = decrypt(encrypted, shift)
    print("Decrypted message:", decrypted)
