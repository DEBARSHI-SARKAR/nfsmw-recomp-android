0074ca70  MOV EDX,dword ptr [ESP + 0x4]
0074ca74  MOV EAX,dword ptr [EDX + 0x8]
0074ca77  PUSH EBX
0074ca78  PUSH ESI
0074ca79  MOV ESI,dword ptr [EAX]
0074ca7b  MOV dword ptr [EDX + 0x8],ESI
0074ca7e  MOV ESI,dword ptr [EAX]
0074ca80  MOV BL,byte ptr [ESI + 0x15]
0074ca83  TEST BL,BL
0074ca85  JNZ 0x0074ca8a
0074ca87  MOV dword ptr [ESI + 0x4],EDX
0074ca8a  MOV ESI,dword ptr [EDX + 0x4]
0074ca8d  MOV dword ptr [EAX + 0x4],ESI
0074ca90  MOV ECX,dword ptr [ECX + 0x4]
0074ca93  CMP EDX,dword ptr [ECX + 0x4]
0074ca96  JNZ 0x0074caa5
0074ca98  MOV dword ptr [ECX + 0x4],EAX
0074ca9b  POP ESI
0074ca9c  MOV dword ptr [EAX],EDX
0074ca9e  MOV dword ptr [EDX + 0x4],EAX
0074caa1  POP EBX
0074caa2  RET 0x4
0074caa5  MOV ECX,dword ptr [EDX + 0x4]
0074caa8  CMP EDX,dword ptr [ECX]
0074caaa  JNZ 0x0074cab8
0074caac  MOV dword ptr [ECX],EAX
0074caae  POP ESI
0074caaf  MOV dword ptr [EAX],EDX
0074cab1  MOV dword ptr [EDX + 0x4],EAX
0074cab4  POP EBX
0074cab5  RET 0x4
0074cab8  MOV dword ptr [ECX + 0x8],EAX
0074cabb  POP ESI
0074cabc  MOV dword ptr [EAX],EDX
0074cabe  MOV dword ptr [EDX + 0x4],EAX
0074cac1  POP EBX
0074cac2  RET 0x4
