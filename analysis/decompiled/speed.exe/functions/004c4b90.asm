004c4b90  SUB ESP,0x2c
004c4b93  PUSH EBX
004c4b94  PUSH EBP
004c4b95  PUSH ESI
004c4b96  PUSH EDI
004c4b97  MOV ESI,ECX
004c4b99  CALL 0x004bb580
004c4b9e  CALL 0x004bb6b0
004c4ba3  MOV EAX,dword ptr [ESI + 0x14]
004c4ba6  MOV BL,0x1
004c4ba8  MOV byte ptr [ESI + 0xf0],BL
004c4bae  MOV EDX,dword ptr [EAX + 0x34]
004c4bb1  MOV EDI,dword ptr [EDX + 0xcc]
004c4bb7  XOR ECX,ECX
004c4bb9  CMP EDI,ECX
004c4bbb  JNZ 0x004c4bcb
004c4bbd  CMP dword ptr [EDX + 0x198],ECX
004c4bc3  JNZ 0x004c4bcb
004c4bc5  MOV byte ptr [ESI + 0xf0],CL
004c4bcb  MOV byte ptr [ESI + 0xf1],BL
004c4bd1  MOV EAX,dword ptr [EAX + 0x34]
004c4bd4  CMP dword ptr [EAX + 0x110],ECX
004c4bda  JNZ 0x004c4bea
004c4bdc  CMP dword ptr [EAX + 0x154],ECX
004c4be2  JNZ 0x004c4bea
004c4be4  MOV byte ptr [ESI + 0xf1],CL
004c4bea  MOV dword ptr [ESI + 0x48],ECX
004c4bed  MOV dword ptr [ESI + 0x4c],ECX
004c4bf0  MOV dword ptr [ESI + 0x50],ECX
004c4bf3  MOV dword ptr [ESI + 0x54],ECX
004c4bf6  LEA EDX,[ESP + 0x1c]
004c4bfa  LEA EBP,[ESI + 0x2c]
004c4bfd  LEA EDI,[ESI + 0x68]
004c4c00  MOV EAX,dword ptr [ESI + 0x14]
004c4c03  MOV EAX,dword ptr [EAX + 0x34]
004c4c06  FLD float ptr [EAX + ECX*0x1 + 0xc8]
004c4c0d  FABS
004c4c0f  FSTP float ptr [EDI + -0x10]
004c4c12  MOV EAX,dword ptr [ESI + 0x14]
004c4c15  MOV EAX,dword ptr [EAX + 0x34]
004c4c18  MOV EBX,dword ptr [ECX + EAX*0x1 + 0xbc]
004c4c1f  FLD float ptr [ECX + EAX*0x1 + 0xf8]
004c4c26  MOV dword ptr [ESP + 0x14],EBX
004c4c2a  MOV EBX,dword ptr [ECX + EAX*0x1 + 0xc0]
004c4c31  FST float ptr [0x008eeb18]
004c4c37  FSUB float ptr [0x008eeb10]
004c4c3d  MOV dword ptr [ESP + 0x18],EBX
004c4c41  FLD float ptr [0x008eeb14]
004c4c47  MOV EBX,dword ptr [ESP + 0x14]
004c4c4b  FSUB float ptr [0x008eeb10]
004c4c51  MOV dword ptr [EDX],EBX
004c4c53  MOV EBX,dword ptr [ESP + 0x18]
004c4c57  FDIVP
004c4c59  MOV dword ptr [EDX + 0x4],EBX
004c4c5c  FST float ptr [ESP + 0x10]
004c4c60  FCOMP float ptr [0x00890968]
004c4c66  FNSTSW AX
004c4c68  TEST AH,0x41
004c4c6b  JNZ 0x004c4cdd
004c4c6d  FLD float ptr [ESP + 0x10]
004c4c71  FLD float ptr [0x0089096c]
004c4c77  FCOMP float ptr [ESP + 0x10]
004c4c7b  FNSTSW AX
004c4c7d  TEST AH,0x5
004c4c80  JP 0x004c4c8a
004c4c82  FSTP ST0
004c4c84  FLD float ptr [0x0089096c]
004c4c8a  TEST ECX,ECX
004c4c8c  FLD float ptr [0x008eeb0c]
004c4c92  FSUB float ptr [0x008eeb08]
004c4c98  MOV byte ptr [0x008eeb20],0x0
004c4c9f  FMULP
004c4ca1  FADD float ptr [0x008eeb08]
004c4ca7  FST float ptr [0x008eeb1c]
004c4cad  FSTP float ptr [EDI]
004c4caf  JLE 0x004c4ce5
004c4cb1  CMP ECX,0xcc
004c4cb7  JGE 0x004c4ce5
004c4cb9  MOV EAX,dword ptr [ESI + 0x14]
004c4cbc  MOV EAX,dword ptr [EAX + 0x34]
004c4cbf  MOV EBX,dword ptr [EAX + ECX*0x1 + 0xcc]
004c4cc6  TEST EBX,EBX
004c4cc8  JZ 0x004c4d07
004c4cca  FLD float ptr [EDX]
004c4ccc  FADD float ptr [ESI + 0x48]
004c4ccf  FSTP float ptr [ESI + 0x48]
004c4cd2  FLD float ptr [EDX + 0x4]
004c4cd5  FADD float ptr [ESI + 0x4c]
004c4cd8  FSTP float ptr [ESI + 0x4c]
004c4cdb  JMP 0x004c4d07
004c4cdd  FLD float ptr [0x00890968]
004c4ce3  JMP 0x004c4c8a
004c4ce5  MOV EAX,dword ptr [ESI + 0x14]
004c4ce8  MOV EAX,dword ptr [EAX + 0x34]
004c4ceb  MOV EBX,dword ptr [EAX + ECX*0x1 + 0xcc]
004c4cf2  TEST EBX,EBX
004c4cf4  JZ 0x004c4d07
004c4cf6  FLD float ptr [ESI + 0x50]
004c4cf9  FADD float ptr [EDX]
004c4cfb  FSTP float ptr [ESI + 0x50]
004c4cfe  FLD float ptr [EDX + 0x4]
004c4d01  FADD float ptr [ESI + 0x54]
004c4d04  FSTP float ptr [ESI + 0x54]
004c4d07  FLD float ptr [0x008ee6b0]
004c4d0d  FMUL float ptr [EDX]
004c4d0f  FST float ptr [ESP + 0x10]
004c4d13  FCOMP float ptr [0x008974a8]
004c4d19  FNSTSW AX
004c4d1b  TEST AH,0x41
004c4d1e  JNZ 0x004c4d9a
004c4d20  FLD float ptr [ESP + 0x10]
004c4d24  FLD float ptr [0x00897184]
004c4d2a  FCOMP float ptr [ESP + 0x10]
004c4d2e  FNSTSW AX
004c4d30  TEST AH,0x5
004c4d33  JP 0x004c4d3d
004c4d35  FSTP ST0
004c4d37  FLD float ptr [0x00897184]
004c4d3d  FSTP float ptr [EBP + -0x4]
004c4d40  FLD float ptr [0x008ee6b4]
004c4d46  FMUL float ptr [EDX + 0x4]
004c4d49  FST float ptr [ESP + 0x10]
004c4d4d  FCOMP float ptr [0x008974a8]
004c4d53  FNSTSW AX
004c4d55  TEST AH,0x41
004c4d58  JNZ 0x004c4da2
004c4d5a  FLD float ptr [ESP + 0x10]
004c4d5e  FLD float ptr [0x00897184]
004c4d64  FCOMP float ptr [ESP + 0x10]
004c4d68  FNSTSW AX
004c4d6a  TEST AH,0x5
004c4d6d  JP 0x004c4d77
004c4d6f  FSTP ST0
004c4d71  FLD float ptr [0x00897184]
004c4d77  FSTP float ptr [EBP]
004c4d7a  ADD ECX,0x44
004c4d7d  ADD EDI,0x4
004c4d80  ADD EDX,0x8
004c4d83  ADD EBP,0x8
004c4d86  CMP ECX,0x110
004c4d8c  JL 0x004c4c00
004c4d92  POP EDI
004c4d93  POP ESI
004c4d94  POP EBP
004c4d95  POP EBX
004c4d96  ADD ESP,0x2c
004c4d99  RET
004c4d9a  FLD float ptr [0x008974a8]
004c4da0  JMP 0x004c4d3d
004c4da2  FLD float ptr [0x008974a8]
004c4da8  JMP 0x004c4d77
