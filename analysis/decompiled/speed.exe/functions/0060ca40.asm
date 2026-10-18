0060ca40  PUSH 0x0
0060ca42  PUSH 0xc
0060ca44  MOV ECX,0x925b30
0060ca49  CALL 0x005d29d0
0060ca4e  TEST EAX,EAX
0060ca50  JZ 0x0060ca68
0060ca52  MOV ECX,dword ptr [ESP + 0x4]
0060ca56  MOV EDX,dword ptr [ESP + 0x8]
0060ca5a  MOV dword ptr [EAX],ECX
0060ca5c  MOV ECX,dword ptr [ESP + 0xc]
0060ca60  MOV dword ptr [EAX + 0x4],EDX
0060ca63  MOV EDX,dword ptr [ECX]
0060ca65  MOV dword ptr [EAX + 0x8],EDX
0060ca68  RET 0xc
