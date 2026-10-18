00690a70  SUB ESP,0xc
00690a73  MOV EAX,dword ptr [ESP + 0x14]
00690a77  PUSH EBX
00690a78  PUSH ESI
00690a79  MOV ESI,ECX
00690a7b  MOV ECX,dword ptr [ESI + EAX*0x4 + 0xa8]
00690a82  MOV EBX,dword ptr [ESI + 0x88]
00690a88  PUSH EDI
00690a89  ADD ECX,0x4c
00690a8c  TEST EBX,EBX
00690a8e  MOV EDI,ECX
00690a90  MOV ECX,dword ptr [EDI]
00690a92  MOV EDX,dword ptr [EDI + 0x4]
00690a95  MOV EDI,dword ptr [EDI + 0x8]
00690a98  MOV dword ptr [ESP + 0xc],ECX
00690a9c  MOV dword ptr [ESP + 0x10],EDX
00690aa0  MOV dword ptr [ESP + 0x14],EDI
00690aa4  JNZ 0x00690abd
00690aa6  MOV EAX,dword ptr [ESP + 0x1c]
00690aaa  MOV ESI,EAX
00690aac  MOV dword ptr [ESI],ECX
00690aae  MOV dword ptr [ESI + 0x4],EDX
00690ab1  MOV dword ptr [ESI + 0x8],EDI
00690ab4  POP EDI
00690ab5  POP ESI
00690ab6  POP EBX
00690ab7  ADD ESP,0xc
00690aba  RET 0x8
00690abd  MOV EDX,dword ptr [ESI]
00690abf  PUSH EAX
00690ac0  MOV ECX,ESI
00690ac2  CALL dword ptr [EDX + 0x68]
00690ac5  FSTP float ptr [ESP + 0x20]
00690ac9  MOV ECX,dword ptr [ESI + 0x88]
00690acf  MOV EAX,dword ptr [ECX]
00690ad1  CALL dword ptr [EAX + 0xa0]
00690ad7  FLD float ptr [ESP + 0x20]
00690adb  FMUL float ptr [EAX]
00690add  POP EDI
00690ade  POP ESI
00690adf  POP EBX
00690ae0  FADD float ptr [ESP]
00690ae3  FSTP float ptr [ESP]
00690ae6  MOV EDX,dword ptr [ESP]
00690ae9  FLD float ptr [ESP + 0x14]
00690aed  FMUL float ptr [EAX + 0x4]
00690af0  FADD float ptr [ESP + 0x4]
00690af4  FSTP float ptr [ESP + 0x4]
00690af8  FLD float ptr [ESP + 0x14]
00690afc  FMUL float ptr [EAX + 0x8]
00690aff  MOV EAX,dword ptr [ESP + 0x10]
00690b03  MOV ECX,EAX
00690b05  MOV dword ptr [ECX],EDX
00690b07  MOV EDX,dword ptr [ESP + 0x4]
00690b0b  FADD float ptr [ESP + 0x8]
00690b0f  MOV dword ptr [ECX + 0x4],EDX
00690b12  FSTP float ptr [ESP + 0x8]
00690b16  MOV EDX,dword ptr [ESP + 0x8]
00690b1a  MOV dword ptr [ECX + 0x8],EDX
00690b1d  ADD ESP,0xc
00690b20  RET 0x8
