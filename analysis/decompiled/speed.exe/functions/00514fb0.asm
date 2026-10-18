00514fb0  MOV EAX,dword ptr [ESP + 0x4]
00514fb4  TEST EAX,EAX
00514fb6  JZ 0x00514fcc
00514fb8  MOV ECX,dword ptr [EAX + 0x2c]
00514fbb  MOV EDX,dword ptr [ESP + 0x8]
00514fbf  MOV dword ptr [ECX + 0x8c],EDX
00514fc5  OR dword ptr [EAX + 0x1c],0x400000
00514fcc  RET
