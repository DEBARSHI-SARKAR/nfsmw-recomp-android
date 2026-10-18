00705cd0  PUSH 0x0
00705cd2  PUSH 0xc
00705cd4  MOV ECX,0x925b30
00705cd9  CALL 0x005d29d0
00705cde  TEST EAX,EAX
00705ce0  JZ 0x00705cf8
00705ce2  MOV ECX,dword ptr [ESP + 0x4]
00705ce6  MOV EDX,dword ptr [ESP + 0x8]
00705cea  MOV dword ptr [EAX],ECX
00705cec  MOV ECX,dword ptr [ESP + 0xc]
00705cf0  MOV dword ptr [EAX + 0x4],EDX
00705cf3  MOV EDX,dword ptr [ECX]
00705cf5  MOV dword ptr [EAX + 0x8],EDX
00705cf8  RET 0xc
