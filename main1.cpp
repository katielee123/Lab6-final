# creating the built ins
def encode(password):
	encoded_password = ""

	# Loops
	for digit in password:
		shifted = str(int(digit) + 3)
		encoded_password += shifted

	return encoded_password


def decode(encoded_password):
	decoded = ""
	for digit in encoded_password:
		# makes sure it is not neg
		shifted = str((int(digit) - 3) % 10)
		decoded += shifted

	return decoded

# creating the menu


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
			user_password = input("Please enter your password to encode: ")
			e_pass = encode(user_password)
			print("Your password has been encoded and stored!")
			print()
		elif menu_sel == 2:
			encoded = encode(user_password)
			print(f"The encoded password is {encoded}, and the original password is {user_password}")
			print()
			break


