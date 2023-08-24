	Section  .data
		hello db "Hello, Holberton\n", 0

	Section  .text
		extern printf
		global main

	Main:
		mov edi, format
		xor eax, eax
		call printf
		mov eax, 0
		ret
