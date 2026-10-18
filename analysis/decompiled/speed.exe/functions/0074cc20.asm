0074cc20  PUSH 0x0
0074cc22  PUSH 0x18
0074cc24  MOV ECX,0x925b30
0074cc29  CALL 0x005d29d0
0074cc2e  TEST EAX,EAX
0074cc30  JZ 0x0074cc60
0074cc32  MOV ECX,dword ptr [ESP + 0x4]
0074cc36  MOV EDX,dword ptr [ESP + 0x8]
0074cc3a  MOV dword ptr [EAX],ECX
0074cc3c  MOV ECX,dword ptr [ESP + 0xc]
0074cc40  MOV dword ptr [EAX + 0x8],ECX
0074cc43  MOV ECX,dword ptr [ESP + 0x10]
0074cc47  MOV dword ptr [EAX + 0x4],EDX
0074cc4a  MOV EDX,dword ptr [ECX]
0074cc4c  MOV dword ptr [EAX + 0xc],EDX
0074cc4f  MOV ECX,dword ptr [ECX + 0x4]
0074cc52  MOV DL,byte ptr [ESP + 0x14]
0074cc56  MOV dword ptr [EAX + 0x10],ECX
0074cc59  MOV byte ptr [EAX + 0x14],DL
0074cc5c  MOV byte ptr [EAX + 0x15],0x0
0074cc60  RET 0x14
