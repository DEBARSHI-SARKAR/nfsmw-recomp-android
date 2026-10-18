0069d970  SUB ESP,0x8
0069d973  PUSH ESI
0069d974  PUSH EDI
0069d975  PUSH 0x1
0069d977  MOV ESI,ECX
0069d979  CALL 0x00671330
0069d97e  FLD float ptr [ESP + 0x14]
0069d982  FCOMP float ptr [0x00890cd4]
0069d988  FNSTSW AX
0069d98a  TEST AH,0x41
0069d98d  JNZ 0x0069d995
0069d98f  FLD float ptr [ESP + 0x14]
0069d993  JMP 0x0069d99b
0069d995  FLD float ptr [0x00890cd4]
0069d99b  MOV ECX,dword ptr [ESP + 0x18]
0069d99f  FSTP float ptr [ESI + 0xc4]
0069d9a5  MOV EDI,dword ptr [ESP + 0x1c]
0069d9a9  XOR EAX,EAX
0069d9ab  MOV EDX,0x3f800000
0069d9b0  MOV dword ptr [ESI + 0xf8],ECX
0069d9b6  MOV dword ptr [ESI + 0x100],EDI
0069d9bc  MOV EDI,dword ptr [ESP + 0x20]
0069d9c0  SAR ECX,0x1
0069d9c2  MOV dword ptr [ESI + 0x10c],ECX
0069d9c8  MOV dword ptr [ESI + 0x104],EDI
0069d9ce  MOV ECX,EDX
0069d9d0  MOV dword ptr [ESI + 0xc8],EAX
0069d9d6  MOV dword ptr [ESI + 0xcc],EAX
0069d9dc  MOV dword ptr [ESI + 0xd0],EAX
0069d9e2  MOV dword ptr [ESI + 0xd4],EAX
0069d9e8  MOV dword ptr [ESI + 0xd8],EAX
0069d9ee  MOV dword ptr [ESI + 0xdc],EAX
0069d9f4  MOV dword ptr [ESI + 0xe0],EAX
0069d9fa  MOV dword ptr [ESI + 0xe4],EAX
0069da00  MOV dword ptr [ESI + 0xf0],EAX
0069da06  MOV dword ptr [ESI + 0xf4],EAX
0069da0c  MOV dword ptr [ESI + 0xfc],EAX
0069da12  MOV dword ptr [ESI + 0x108],EAX
0069da18  MOV dword ptr [ESI + 0x114],EAX
0069da1e  MOV dword ptr [ESI + 0x118],EAX
0069da24  MOV dword ptr [ESI + 0x130],EAX
0069da2a  MOV byte ptr [ESI + 0x134],AL
0069da30  MOV dword ptr [ESI + 0x13c],EAX
0069da36  POP EDI
0069da37  MOV dword ptr [ESI + 0xe8],EDX
0069da3d  MOV dword ptr [ESI + 0xec],EDX
0069da43  MOV dword ptr [ESI + 0x110],EDX
0069da49  MOV dword ptr [ESI + 0x11c],ECX
0069da4f  MOV dword ptr [ESI + 0x120],ECX
0069da55  MOV dword ptr [ESI + 0x124],0x3f000000
0069da5f  MOV dword ptr [ESI + 0x128],EDX
0069da65  MOV dword ptr [ESI + 0x12c],EDX
0069da6b  MOV dword ptr [ESI + 0x138],0x1
0069da75  MOV EAX,ESI
0069da77  MOV dword ptr [ESP + 0x4],EDX
0069da7b  MOV dword ptr [ESP + 0x8],EDX
0069da7f  POP ESI
0069da80  ADD ESP,0x8
0069da83  RET 0x10
