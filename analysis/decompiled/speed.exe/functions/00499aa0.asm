00499aa0  MOV EAX,dword ptr [ESP + 0xc]
00499aa4  XOR EDX,EDX
00499aa6  SUB EAX,EDX
00499aa8  PUSH ESI
00499aa9  JZ 0x00499aef
00499aab  DEC EAX
00499aac  JZ 0x00499ad0
00499aae  DEC EAX
00499aaf  JNZ 0x00499b0b
00499ab1  MOV ECX,dword ptr [ESP + 0x8]
00499ab5  MOV ESI,dword ptr [ECX + 0x20]
00499ab8  MOV EAX,dword ptr [ESP + 0xc]
00499abc  MOV dword ptr [EAX],ESI
00499abe  MOV dword ptr [EAX + 0x4],EDX
00499ac1  MOV ECX,dword ptr [ECX + 0x28]
00499ac4  MOV dword ptr [EAX + 0x8],ECX
00499ac7  MOV dword ptr [EAX + 0xc],0x3f800000
00499ace  POP ESI
00499acf  RET
00499ad0  MOV ECX,dword ptr [ESP + 0x8]
00499ad4  MOV ESI,dword ptr [ECX + 0x10]
00499ad7  MOV EAX,dword ptr [ESP + 0xc]
00499adb  MOV dword ptr [EAX],ESI
00499add  MOV dword ptr [EAX + 0x4],EDX
00499ae0  MOV EDX,dword ptr [ECX + 0x18]
00499ae3  MOV dword ptr [EAX + 0x8],EDX
00499ae6  MOV dword ptr [EAX + 0xc],0x3f800000
00499aed  POP ESI
00499aee  RET
00499aef  MOV ECX,dword ptr [ESP + 0x8]
00499af3  MOV ESI,dword ptr [ECX]
00499af5  MOV EAX,dword ptr [ESP + 0xc]
00499af9  MOV dword ptr [EAX],ESI
00499afb  MOV dword ptr [EAX + 0x4],EDX
00499afe  MOV ECX,dword ptr [ECX + 0x8]
00499b01  MOV dword ptr [EAX + 0x8],ECX
00499b04  MOV dword ptr [EAX + 0xc],0x3f800000
00499b0b  POP ESI
00499b0c  RET
