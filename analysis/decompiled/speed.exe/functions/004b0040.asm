004b0040  MOV EAX,dword ptr [ECX + 0x6c]
004b0043  CMP EAX,0x5
004b0046  JNZ 0x004b004e
004b0048  OR EAX,0xffffffff
004b004b  RET 0x10
004b004e  FILD dword ptr [ESP + 0xc]
004b0052  FMUL float ptr [0x00890d60]
004b0058  FSTP float ptr [ECX + EAX*0x4 + 0x4]
004b005c  MOV EAX,dword ptr [ECX + 0x6c]
004b005f  FLD float ptr [ECX + EAX*0x4 + 0x4]
004b0063  LEA EDX,[ECX + EAX*0x4 + 0x4]
004b0067  FCOMP float ptr [0x00890968]
004b006d  FNSTSW AX
004b006f  TEST AH,0x41
004b0072  JP 0x004b007a
004b0074  MOV dword ptr [EDX],0x3c23d70a
004b007a  MOV EDX,dword ptr [ECX + 0x6c]
004b007d  FLD float ptr [ESP + 0x8]
004b0081  FSTP float ptr [ECX + EDX*0x4 + 0x34]
004b0085  MOV EAX,dword ptr [ECX + 0x6c]
004b0088  FLD float ptr [ESP + 0x4]
004b008c  FSTP float ptr [ECX + EAX*0x4 + 0x1c]
004b0090  MOV EDX,dword ptr [ECX + 0x6c]
004b0093  MOV EAX,dword ptr [ESP + 0x10]
004b0097  MOV dword ptr [ECX + EDX*0x4 + 0x54],EAX
004b009b  MOV EAX,dword ptr [ECX + 0x6c]
004b009e  XOR EDX,EDX
004b00a0  MOV byte ptr [ECX + EAX*0x1 + 0x4c],DL
004b00a4  MOV EAX,dword ptr [ECX + 0x6c]
004b00a7  CMP EAX,EDX
004b00a9  MOV byte ptr [ECX + 0x78],DL
004b00ac  JNZ 0x004b00b4
004b00ae  MOV EDX,dword ptr [ECX + 0x1c]
004b00b1  MOV dword ptr [ECX + 0x74],EDX
004b00b4  INC EAX
004b00b5  MOV dword ptr [ECX + 0x6c],EAX
004b00b8  RET 0x10
