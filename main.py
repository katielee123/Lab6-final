def encode(password):
	encoded_pass = ""
	for digit in password:
		# Shift the digit up by 3 numbers
		shifted_digit = str((int(digit) + 3) % 10)
		encoded_pass += shifted_digit
	return encoded_pass

def decode(encoded):
    decoded_pass = ""
    for digit in encoded:
        # Shift down by 3 numbers
        temp = int(digit) - 3
        if temp < 0:
            temp += 10
        decoded_pass += str(temp % 10)
    return decoded_pass

if __name__ == '__main__':
	encoded_pass = None
	while True:
		print("""Menu
-------------
1. Encode
2. Decode
3. Quit""")
		print()
		menu_sel = int(input("Please Enter an option: "))
		if menu_sel == 1:
			encoded_pass = encode(input("Please enter your password to encode: "))
			print("Your password has been encoded and stored!")
			print()
		elif menu_sel == 2:
			decoded_pass = decode(encoded_pass)
			print(f"The encoded password is {encoded_pass}, and the original password is {decoded_pass}.")
			print()
		else:
			break



