005dacf0  PUSH ESI
005dacf1  MOV ESI,ECX
005dacf3  MOV EAX,dword ptr [ESI]
005dacf5  CALL dword ptr [EAX + 0x4]
005dacf8  SUB EAX,0x3
005dacfb  JZ 0x005dad25
005dacfd  SUB EAX,0x2
005dad00  JZ 0x005dad08
005dad02  XOR AL,AL
005dad04  POP ESI
005dad05  RET 0x4
005dad08  MOV ECX,dword ptr [ESP + 0x8]
005dad0c  ADD ESI,0x68
005dad0f  MOV EDX,dword ptr [ESI]
005dad11  MOV dword ptr [ECX],EDX
005dad13  MOV EAX,dword ptr [ESI + 0x4]
005dad16  MOV dword ptr [ECX + 0x4],EAX
005dad19  MOV EDX,dword ptr [ESI + 0x8]
005dad1c  MOV dword ptr [ECX + 0x8],EDX
005dad1f  MOV AL,0x1
005dad21  POP ESI
005dad22  RET 0x4
005dad25  MOV EAX,dword ptr [ESP + 0x8]
005dad29  ADD ESI,0x34
005dad2c  MOV ECX,dword ptr [ESI]
005dad2e  MOV dword ptr [EAX],ECX
005dad30  MOV EDX,dword ptr [ESI + 0x4]
005dad33  MOV dword ptr [EAX + 0x4],EDX
005dad36  MOV ECX,dword ptr [ESI + 0x8]
005dad39  MOV dword ptr [EAX + 0x8],ECX
005dad3c  MOV AL,0x1
005dad3e  POP ESI
005dad3f  RET 0x4
