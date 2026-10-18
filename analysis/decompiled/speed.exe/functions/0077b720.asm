0077b720  FLD float ptr [ESP + 0x8]
0077b724  SUB ESP,0x18
0077b727  FCOMP float ptr [0x0089096c]
0077b72d  FNSTSW AX
0077b72f  TEST AH,0x41
0077b732  JNZ 0x0077b73e
0077b734  MOV dword ptr [ESP + 0x20],0x3f800000
0077b73c  JMP 0x0077b757
0077b73e  FLD float ptr [ESP + 0x20]
0077b742  FCOMP float ptr [0x00890968]
0077b748  FNSTSW AX
0077b74a  TEST AH,0x5
0077b74d  JP 0x0077b757
0077b74f  MOV dword ptr [ESP + 0x20],0x0
0077b757  MOV EDX,dword ptr [ESP + 0x1c]
0077b75b  MOVZX EAX,word ptr [EDX]
0077b75e  PUSH ESI
0077b75f  MOV ESI,dword ptr [0x009b38bc]
0077b765  PUSH EDI
0077b766  MOVZX EDI,word ptr [EDX + 0x2]
0077b76a  SHL EAX,0x5
0077b76d  ADD EAX,ESI
0077b76f  SHL EDI,0x5
0077b772  ADD EDI,ESI
0077b774  TEST byte ptr [EDX + 0xb],0x1
0077b778  MOV dword ptr [ESP + 0xc],EDI
0077b77c  MOV ESI,dword ptr [EAX]
0077b77e  MOV dword ptr [ESP + 0x14],ESI
0077b782  MOV ESI,dword ptr [EAX + 0x4]
0077b785  MOV dword ptr [ESP + 0x18],ESI
0077b789  MOV EAX,dword ptr [EAX + 0x8]
0077b78c  MOV dword ptr [ESP + 0x1c],EAX
0077b790  MOV EAX,EDI
0077b792  MOV ESI,dword ptr [EAX]
0077b794  MOV dword ptr [ESP + 0x8],ESI
0077b798  MOV ESI,dword ptr [EAX + 0x4]
0077b79b  MOV dword ptr [ESP + 0xc],ESI
0077b79f  MOV EAX,dword ptr [EAX + 0x8]
0077b7a2  POP EDI
0077b7a3  MOV dword ptr [ESP + 0xc],EAX
0077b7a7  MOV EAX,dword ptr [ESP + 0x28]
0077b7ab  POP ESI
0077b7ac  JZ 0x0077b7ca
0077b7ae  PUSH EAX
0077b7af  MOV EAX,dword ptr [ESP + 0x24]
0077b7b3  PUSH EAX
0077b7b4  PUSH EDX
0077b7b5  LEA EDX,[ESP + 0xc]
0077b7b9  PUSH EDX
0077b7ba  LEA EAX,[ESP + 0x1c]
0077b7be  PUSH EAX
0077b7bf  CALL 0x0076e0d0
0077b7c4  ADD ESP,0x18
0077b7c7  RET 0xc
0077b7ca  FLD float ptr [ESP]
0077b7cd  FSUB float ptr [ESP + 0xc]
0077b7d1  FMUL float ptr [ESP + 0x20]
0077b7d5  FADD float ptr [ESP + 0xc]
0077b7d9  FSTP float ptr [EAX]
0077b7db  FLD float ptr [ESP + 0x4]
0077b7df  FSUB float ptr [ESP + 0x10]
0077b7e3  FMUL float ptr [ESP + 0x20]
0077b7e7  FADD float ptr [ESP + 0x10]
0077b7eb  FSTP float ptr [EAX + 0x4]
0077b7ee  FLD float ptr [ESP + 0x8]
0077b7f2  FSUB float ptr [ESP + 0x14]
0077b7f6  FMUL float ptr [ESP + 0x20]
0077b7fa  FADD float ptr [ESP + 0x14]
0077b7fe  FSTP float ptr [EAX + 0x8]
0077b801  ADD ESP,0x18
0077b804  RET 0xc
