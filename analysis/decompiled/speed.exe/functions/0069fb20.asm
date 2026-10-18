0069fb20  SUB ESP,0x20
0069fb23  PUSH ESI
0069fb24  PUSH EDI
0069fb25  MOV EDI,dword ptr [ESP + 0x2c]
0069fb29  FLD float ptr [EDI + 0x5c]
0069fb2c  MOV ESI,ECX
0069fb2e  FLD float ptr [EDI + 0x7c]
0069fb31  FST float ptr [ESP + 0x2c]
0069fb35  FCOMP
0069fb37  FNSTSW AX
0069fb39  TEST AH,0x41
0069fb3c  JNZ 0x0069fb44
0069fb3e  FSTP ST0
0069fb40  FLD float ptr [ESP + 0x2c]
0069fb44  FLD float ptr [0x0089096c]
0069fb4a  FSUB float ptr [EDI + 0x4c]
0069fb4d  FSTP float ptr [ESP + 0x2c]
0069fb51  FCOM float ptr [ESP + 0x2c]
0069fb55  FNSTSW AX
0069fb57  TEST AH,0x41
0069fb5a  JZ 0x0069fb62
0069fb5c  FSTP ST0
0069fb5e  FLD float ptr [ESP + 0x2c]
0069fb62  FMUL float ptr [0x00890dac]
0069fb68  FADD float ptr [0x008a0dbc]
0069fb6e  FST float ptr [ESI + 0x11c]
0069fb74  CMP word ptr [EDI + 0xc8],0x1
0069fb7c  FMUL float ptr [EDI + 0x8c]
0069fb82  JZ 0x0069fb8d
0069fb84  MOV EAX,dword ptr [ESI + 0xb4]
0069fb8a  FMUL float ptr [EAX + 0x48]
0069fb8d  FMUL float ptr [0x0089095c]
0069fb93  LEA ECX,[ESP + 0x18]
0069fb97  PUSH ECX
0069fb98  LEA EDX,[ESP + 0xc]
0069fb9c  PUSH EDX
0069fb9d  PUSH EDI
0069fb9e  PUSH ECX
0069fb9f  MOV ECX,ESI
0069fba1  FSTP float ptr [ESP]
0069fba4  CALL 0x0068d6a0
0069fba9  MOV ECX,dword ptr [ESP + 0x18]
0069fbad  MOV EAX,dword ptr [ESP + 0x30]
0069fbb1  MOV EDX,dword ptr [ESP + 0x1c]
0069fbb5  MOV dword ptr [EAX],ECX
0069fbb7  MOV ECX,dword ptr [ESP + 0x20]
0069fbbb  MOV dword ptr [EAX + 0x4],EDX
0069fbbe  MOV EDX,dword ptr [ESP + 0x34]
0069fbc2  MOV dword ptr [EAX + 0x8],ECX
0069fbc5  MOV EAX,dword ptr [ESP + 0x8]
0069fbc9  MOV ECX,dword ptr [ESP + 0xc]
0069fbcd  MOV dword ptr [EDX],EAX
0069fbcf  MOV EAX,dword ptr [ESP + 0x10]
0069fbd3  MOV dword ptr [EDX + 0x4],ECX
0069fbd6  MOV ECX,dword ptr [ESP + 0x14]
0069fbda  MOV dword ptr [EDX + 0x8],EAX
0069fbdd  MOV EDX,dword ptr [ESP + 0x24]
0069fbe1  MOV dword ptr [ESI + 0x108],ECX
0069fbe7  PUSH EDI
0069fbe8  MOV ECX,ESI
0069fbea  MOV dword ptr [ESI + 0x10c],EDX
0069fbf0  CALL 0x006903c0
0069fbf5  POP EDI
0069fbf6  POP ESI
0069fbf7  ADD ESP,0x20
0069fbfa  RET 0xc
