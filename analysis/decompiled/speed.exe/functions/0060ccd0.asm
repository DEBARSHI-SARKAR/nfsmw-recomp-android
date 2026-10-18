0060ccd0  MOV EDX,dword ptr [ESP + 0x4]
0060ccd4  MOV EAX,dword ptr [EDX + 0x8]
0060ccd7  PUSH EBX
0060ccd8  PUSH ESI
0060ccd9  MOV ESI,dword ptr [EAX]
0060ccdb  MOV dword ptr [EDX + 0x8],ESI
0060ccde  MOV ESI,dword ptr [EAX]
0060cce0  MOV BL,byte ptr [ESI + 0x19]
0060cce3  TEST BL,BL
0060cce5  JNZ 0x0060ccea
0060cce7  MOV dword ptr [ESI + 0x4],EDX
0060ccea  MOV ESI,dword ptr [EDX + 0x4]
0060cced  MOV dword ptr [EAX + 0x4],ESI
0060ccf0  MOV ECX,dword ptr [ECX + 0x4]
0060ccf3  CMP EDX,dword ptr [ECX + 0x4]
0060ccf6  JNZ 0x0060cd05
0060ccf8  MOV dword ptr [ECX + 0x4],EAX
0060ccfb  POP ESI
0060ccfc  MOV dword ptr [EAX],EDX
0060ccfe  MOV dword ptr [EDX + 0x4],EAX
0060cd01  POP EBX
0060cd02  RET 0x4
0060cd05  MOV ECX,dword ptr [EDX + 0x4]
0060cd08  CMP EDX,dword ptr [ECX]
0060cd0a  JNZ 0x0060cd18
0060cd0c  MOV dword ptr [ECX],EAX
0060cd0e  POP ESI
0060cd0f  MOV dword ptr [EAX],EDX
0060cd11  MOV dword ptr [EDX + 0x4],EAX
0060cd14  POP EBX
0060cd15  RET 0x4
0060cd18  MOV dword ptr [ECX + 0x8],EAX
0060cd1b  POP ESI
0060cd1c  MOV dword ptr [EAX],EDX
0060cd1e  MOV dword ptr [EDX + 0x4],EAX
0060cd21  POP EBX
0060cd22  RET 0x4
