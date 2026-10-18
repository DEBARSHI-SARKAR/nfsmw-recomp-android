007c51b2  XOR EAX,EAX
007c51b4  MOV ECX,dword ptr FS:[0x0]
007c51bb  CMP dword ptr [ECX + 0x4],0x7c5128
007c51c2  JNZ 0x007c51d4
007c51c4  MOV EDX,dword ptr [ECX + 0xc]
007c51c7  MOV EDX,dword ptr [EDX + 0xc]
007c51ca  CMP dword ptr [ECX + 0x8],EDX
007c51cd  JNZ 0x007c51d4
007c51cf  MOV EAX,0x1
007c51d4  RET
