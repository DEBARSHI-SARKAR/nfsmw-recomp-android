0068f650  PUSH EBX
0068f651  PUSH ESI
0068f652  XOR EBX,EBX
0068f654  PUSH EBX
0068f655  MOV ESI,ECX
0068f657  CALL 0x00671330
0068f65c  FLD float ptr [ESP + 0xc]
0068f660  FCOMP float ptr [0x00890cd4]
0068f666  FNSTSW AX
0068f668  TEST AH,0x41
0068f66b  JNZ 0x0068f673
0068f66d  FLD float ptr [ESP + 0xc]
0068f671  JMP 0x0068f679
0068f673  FLD float ptr [0x00890cd4]
0068f679  MOV EAX,dword ptr [ESP + 0x10]
0068f67d  FSTP float ptr [ESI + 0xc4]
0068f683  MOV ECX,dword ptr [ESP + 0x14]
0068f687  MOV EDX,dword ptr [ESP + 0x18]
0068f68b  MOV dword ptr [ESI + 0xec],EAX
0068f691  SAR EAX,0x1
0068f693  MOV dword ptr [ESI + 0x100],EAX
0068f699  MOV dword ptr [ESI + 0xc8],EBX
0068f69f  MOV dword ptr [ESI + 0xcc],EBX
0068f6a5  MOV dword ptr [ESI + 0xd0],EBX
0068f6ab  MOV dword ptr [ESI + 0xd4],EBX
0068f6b1  MOV dword ptr [ESI + 0xd8],EBX
0068f6b7  MOV dword ptr [ESI + 0xdc],EBX
0068f6bd  MOV dword ptr [ESI + 0xe0],EBX
0068f6c3  MOV dword ptr [ESI + 0xe4],EBX
0068f6c9  MOV dword ptr [ESI + 0xe8],EBX
0068f6cf  MOV dword ptr [ESI + 0xf0],EBX
0068f6d5  MOV dword ptr [ESI + 0xfc],EBX
0068f6db  MOV byte ptr [ESI + 0x104],BL
0068f6e1  MOV dword ptr [ESI + 0x108],EBX
0068f6e7  MOV dword ptr [ESI + 0xf4],ECX
0068f6ed  MOV dword ptr [ESI + 0xf8],EDX
0068f6f3  MOV EAX,ESI
0068f6f5  POP ESI
0068f6f6  POP EBX
0068f6f7  RET 0x10
