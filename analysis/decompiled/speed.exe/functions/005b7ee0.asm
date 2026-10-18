005b7ee0  PUSH ECX
005b7ee1  PUSH ESI
005b7ee2  MOV ESI,dword ptr [ESP + 0x10]
005b7ee6  PUSH EDI
005b7ee7  MOV EDI,dword ptr [ECX + 0x4c]
005b7eea  TEST EDI,EDI
005b7eec  MOV dword ptr [ESP + 0x8],ECX
005b7ef0  JZ 0x005b7f41
005b7ef2  PUSH EBX
005b7ef3  PUSH EBP
005b7ef4  JMP 0x005b7f00
005b7f00  MOV EAX,dword ptr [ESP + 0x18]
005b7f04  MOV EBX,dword ptr [EAX*0x4 + 0x8a2be8]
005b7f0b  MOV EDX,dword ptr [EDI + 0x1c]
005b7f0e  XOR EAX,EAX
005b7f10  TEST EDX,EDX
005b7f12  JBE 0x005b7f34
005b7f14  MOV ECX,dword ptr [EDI + 0x20]
005b7f17  LEA ESI,[ECX + 0x4]
005b7f1a  LEA EBX,[EBX]
005b7f20  MOVSX EBP,byte ptr [ESI + 0x3]
005b7f24  CMP EBP,EBX
005b7f26  JZ 0x005b7f70
005b7f28  INC EAX
005b7f29  ADD ESI,0x38
005b7f2c  CMP EAX,EDX
005b7f2e  JC 0x005b7f20
005b7f30  MOV ESI,dword ptr [ESP + 0x1c]
005b7f34  MOV EDI,dword ptr [EDI + 0x4]
005b7f37  TEST EDI,EDI
005b7f39  JNZ 0x005b7f00
005b7f3b  MOV ECX,dword ptr [ESP + 0x10]
005b7f3f  POP EBP
005b7f40  POP EBX
005b7f41  MOV AL,byte ptr [ESP + 0x18]
005b7f45  TEST AL,AL
005b7f47  JZ 0x005b7fb2
005b7f49  MOV EAX,dword ptr [ESP + 0x10]
005b7f4d  FLD float ptr [ESI]
005b7f4f  FLD float ptr [ESI + 0x4]
005b7f52  PUSH EAX
005b7f53  CALL 0x005b13d0
005b7f58  FXCH
005b7f5a  MOV EDX,dword ptr [ECX + 0x2c]
005b7f5d  FADD float ptr [EAX + EDX*0x1]
005b7f60  ADD EAX,EDX
005b7f62  POP EDI
005b7f63  POP ESI
005b7f64  FSTP float ptr [EAX]
005b7f66  FADD float ptr [EAX + 0x4]
005b7f69  FSTP float ptr [EAX + 0x4]
005b7f6c  POP ECX
005b7f6d  RET 0xc
005b7f70  IMUL EAX,EAX,0x38
005b7f73  ADD EAX,ECX
005b7f75  TEST EAX,EAX
005b7f77  JZ 0x005b7f30
005b7f79  MOV CL,byte ptr [ESP + 0x20]
005b7f7d  TEST CL,CL
005b7f7f  MOV ESI,dword ptr [ESP + 0x1c]
005b7f83  JZ 0x005b7fa1
005b7f85  FLD float ptr [ESI + 0x4]
005b7f88  FLD float ptr [ESI]
005b7f8a  FADD float ptr [EAX + 0x18]
005b7f8d  FSTP float ptr [EAX + 0x18]
005b7f90  FADD float ptr [EAX + 0x1c]
005b7f93  FSTP float ptr [EAX + 0x1c]
005b7f96  MOV CL,byte ptr [EAX + 0x3]
005b7f99  AND CL,0x7f
005b7f9c  MOV byte ptr [EAX + 0x3],CL
005b7f9f  JMP 0x005b7f34
005b7fa1  MOV ECX,dword ptr [ESI]
005b7fa3  MOV dword ptr [EAX + 0x18],ECX
005b7fa6  MOV EDX,dword ptr [ESI + 0x4]
005b7fa9  MOV dword ptr [EAX + 0x1c],EDX
005b7fac  AND byte ptr [EAX + 0x3],0x7f
005b7fb0  JMP 0x005b7f34
005b7fb2  MOV EDX,dword ptr [ESP + 0x10]
005b7fb6  PUSH EDX
005b7fb7  CALL 0x005b13d0
005b7fbc  MOV EDX,dword ptr [ECX + 0x2c]
005b7fbf  MOV ECX,dword ptr [ESI]
005b7fc1  ADD EAX,EDX
005b7fc3  MOV dword ptr [EAX],ECX
005b7fc5  MOV EDX,dword ptr [ESI + 0x4]
005b7fc8  POP EDI
005b7fc9  MOV dword ptr [EAX + 0x4],EDX
005b7fcc  POP ESI
005b7fcd  POP ECX
005b7fce  RET 0xc
