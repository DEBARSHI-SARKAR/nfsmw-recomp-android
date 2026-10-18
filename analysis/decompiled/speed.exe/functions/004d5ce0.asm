004d5ce0  MOV EAX,dword ptr [ESP + 0x14]
004d5ce4  CMP EAX,0x1
004d5ce7  JNZ 0x004d5d10
004d5ce9  MOV EAX,dword ptr [ESP + 0x10]
004d5ced  MOV ECX,dword ptr [ESP + 0x4]
004d5cf1  MOV EDX,dword ptr [ESP + 0x8]
004d5cf5  MOV [0x009145e4],EAX
004d5cfa  MOV EAX,dword ptr [ESP + 0xc]
004d5cfe  MOV dword ptr [0x009145d8],ECX
004d5d04  MOV dword ptr [0x009145dc],EDX
004d5d0a  MOV [0x009145e0],EAX
004d5d0f  RET
004d5d10  CMP EAX,0x2
004d5d13  JNZ 0x004d5d3c
004d5d15  MOV ECX,dword ptr [ESP + 0x10]
004d5d19  MOV EDX,dword ptr [ESP + 0x4]
004d5d1d  MOV EAX,dword ptr [ESP + 0x8]
004d5d21  MOV dword ptr [0x009145f4],ECX
004d5d27  MOV ECX,dword ptr [ESP + 0xc]
004d5d2b  MOV dword ptr [0x009145e8],EDX
004d5d31  MOV [0x009145ec],EAX
004d5d36  MOV dword ptr [0x009145f0],ECX
004d5d3c  RET
