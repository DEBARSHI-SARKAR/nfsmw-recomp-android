0041c630  PUSH 0x0
0041c632  PUSH 0x10
0041c634  MOV ECX,0x925b30
0041c639  CALL 0x005d29d0
0041c63e  TEST EAX,EAX
0041c640  JZ 0x0041c66c
0041c642  MOV ECX,dword ptr [ESP + 0x4]
0041c646  MOV EDX,dword ptr [ESP + 0x8]
0041c64a  MOV dword ptr [EAX],ECX
0041c64c  MOV ECX,dword ptr [ESP + 0xc]
0041c650  MOV dword ptr [EAX + 0x4],EDX
0041c653  MOV EDX,dword ptr [ESP + 0x10]
0041c657  MOV dword ptr [EAX + 0x8],ECX
0041c65a  MOV CX,word ptr [EDX]
0041c65d  MOV DL,byte ptr [ESP + 0x14]
0041c661  MOV word ptr [EAX + 0xc],CX
0041c665  MOV byte ptr [EAX + 0xe],DL
0041c668  MOV byte ptr [EAX + 0xf],0x0
0041c66c  RET 0x14
