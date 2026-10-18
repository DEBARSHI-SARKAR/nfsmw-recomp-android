004ecf40  PUSH ESI
004ecf41  MOV ESI,ECX
004ecf43  MOV AL,byte ptr [ESI + 0x8]
004ecf46  TEST AL,AL
004ecf48  JZ 0x004ed033
004ecf4e  MOV ECX,dword ptr [ESI + 0x30]
004ecf51  MOV EAX,dword ptr [ECX]
004ecf53  CALL dword ptr [EAX + 0x4c]
004ecf56  FCOMP float ptr [0x008efa64]
004ecf5c  FNSTSW AX
004ecf5e  TEST AH,0x41
004ecf61  JNZ 0x004ecf79
004ecf63  MOV ECX,dword ptr [ESI + 0x30]
004ecf66  MOV EDX,dword ptr [ECX]
004ecf68  CALL dword ptr [EDX + 0x4c]
004ecf6b  FMUL float ptr [0x00890dc4]
004ecf71  FSTP float ptr [ESI + 0xfc]
004ecf77  JMP 0x004ecf83
004ecf79  MOV dword ptr [ESI + 0xfc],0x0
004ecf83  PUSH EDI
004ecf84  MOV EDI,dword ptr [ESP + 0xc]
004ecf88  PUSH EDI
004ecf89  MOV ECX,ESI
004ecf8b  CALL 0x004e66b0
004ecf90  PUSH EDI
004ecf91  MOV ECX,ESI
004ecf93  CALL 0x004da510
004ecf98  MOV EAX,dword ptr [ESI + 0xf8]
004ecf9e  SUB EAX,0x0
004ecfa1  JZ 0x004ed013
004ecfa3  DEC EAX
004ecfa4  JZ 0x004ecfc7
004ecfa6  DEC EAX
004ecfa7  JNZ 0x004ed032
004ecfad  MOV ECX,ESI
004ecfaf  CALL 0x004da470
004ecfb4  TEST AL,AL
004ecfb6  JZ 0x004ed032
004ecfb8  POP EDI
004ecfb9  MOV dword ptr [ESI + 0xf8],0x0
004ecfc3  POP ESI
004ecfc4  RET 0x4
004ecfc7  MOV ECX,dword ptr [ESI + 0x30]
004ecfca  MOV EAX,dword ptr [ECX]
004ecfcc  CALL dword ptr [EAX + 0x4c]
004ecfcf  FCOMP float ptr [0x008efa64]
004ecfd5  FNSTSW AX
004ecfd7  TEST AH,0x5
004ecfda  JP 0x004ed032
004ecfdc  MOV ECX,dword ptr [ESI + 0x18]
004ecfdf  MOV dword ptr [ESI + 0xf8],0x2
004ecfe9  MOV EDX,dword ptr [ECX + 0xcc]
004ecfef  PUSH EDX
004ecff0  PUSH 0x0
004ecff2  PUSH 0x0
004ecff4  PUSH 0x0
004ecff6  PUSH 0x0
004ecff8  MOV ECX,ESI
004ecffa  CALL 0x004da2f0
004ecfff  PUSH EDI
004ed000  MOV ECX,ESI
004ed002  MOV dword ptr [ESI + 0x6c],0x0
004ed009  CALL 0x004da510
004ed00e  POP EDI
004ed00f  POP ESI
004ed010  RET 0x4
004ed013  MOV ECX,dword ptr [ESI + 0x30]
004ed016  MOV EAX,dword ptr [ECX]
004ed018  CALL dword ptr [EAX + 0x4c]
004ed01b  FCOMP float ptr [0x008efa64]
004ed021  FNSTSW AX
004ed023  TEST AH,0x41
004ed026  JNZ 0x004ed032
004ed028  MOV dword ptr [ESI + 0xf8],0x1
004ed032  POP EDI
004ed033  POP ESI
004ed034  RET 0x4
