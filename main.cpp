def encode(password):
	encoded_pass = ""
	for digit in password:
		# Shift the digit up by 3 numbers
		shifted_digit = str((int(digit) + 3) % 10)
		encoded_pass += shifted_digit
		encoded_pass = encode(password)
	return encoded_pass


if __name__ == '__main__':
	while True:
		print("""Menu
-------------
1. Encode
2. Decode
3. Quit""")
		print()
		menu_sel = int(input("Please Enter an option: "))
		if menu_sel == 1:
			password = int(input("Please enter your password to encode: "))
			print("Your password has been encoded and stored!")
			print()
		elif menu_sel == 2:
			encoded_pass = encode(password)
			print(f"The encoded password is {encoded_pass}, and the original password is")
			print()




