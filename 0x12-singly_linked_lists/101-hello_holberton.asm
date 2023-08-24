	Section  .data
		hello db "Hello, Holberton", 0
		format db "%s", 10, 0

	Section  .text
		extern printf
		global main

	Main:
		sub rsp 8
		mov rdi, format
		mov rsi, hello
		call printf
		add rsp, 8
		ret
