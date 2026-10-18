0069fee0  MOV EAX,dword ptr [ESP + 0x4]
0069fee4  SUB ESP,0xc
0069fee7  PUSH ESI
0069fee8  MOV ESI,dword ptr [ESP + 0x18]
0069feec  PUSH EDI
0069feed  PUSH ESI
0069feee  PUSH EAX
0069feef  MOV EDI,ECX
0069fef1  CALL 0x0069d4d0
0069fef6  MOV EAX,dword ptr [EDI + 0xd0]
0069fefc  TEST EAX,EAX
0069fefe  JZ 0x0069ff43
0069ff00  ADD EAX,0x8
0069ff03  PUSH EAX
0069ff04  CALL 0x0048aee0
0069ff09  ADD ESP,0x4
0069ff0c  TEST AL,AL
0069ff0e  JNZ 0x0069ff43
0069ff10  MOV dword ptr [ESI + 0x7c],0x0
0069ff17  MOV dword ptr [ESI + 0x5c],0x0
0069ff1e  MOV dword ptr [ESI + 0x4c],0x0
0069ff25  MOV EDX,dword ptr [0x008a2fb4]
0069ff2b  LEA EAX,[ESI + 0x70]
0069ff2e  MOV ECX,EAX
0069ff30  MOV dword ptr [ECX],EDX
0069ff32  MOV EDX,dword ptr [0x008a2fb8]
0069ff38  MOV dword ptr [ECX + 0x4],EDX
0069ff3b  MOV EDX,dword ptr [0x008a2fbc]
0069ff41  JMP 0x0069ffb7
0069ff43  MOV EAX,dword ptr [EDI + 0xc0]
0069ff49  FLD float ptr [EAX + 0x50]
0069ff4c  MOV EDX,dword ptr [EDI + 0x4c]
0069ff4f  FMUL float ptr [0x008a9388]
0069ff55  PUSH EBX
0069ff56  LEA EBX,[EDI + 0x4c]
0069ff59  PUSH 0x2
0069ff5b  FSTP float ptr [ESP + 0x20]
0069ff5f  MOV ECX,EBX
0069ff61  CALL dword ptr [EDX + 0x64]
0069ff64  FSTP float ptr [ESP + 0x20]
0069ff68  MOV EAX,dword ptr [EBX]
0069ff6a  PUSH 0x0
0069ff6c  MOV ECX,EBX
0069ff6e  CALL dword ptr [EAX + 0x64]
0069ff71  FCOM float ptr [ESP + 0x20]
0069ff75  POP EBX
0069ff76  FNSTSW AX
0069ff78  TEST AH,0x41
0069ff7b  JZ 0x0069ff83
0069ff7d  FSTP ST0
0069ff7f  FLD float ptr [ESP + 0x1c]
0069ff83  FADD float ptr [ESI + 0x84]
0069ff89  LEA EAX,[ESI + 0x70]
0069ff8c  MOV dword ptr [ESP + 0x8],0x0
0069ff94  MOV EDX,dword ptr [ESP + 0x8]
0069ff98  FSUBR float ptr [ESP + 0x18]
0069ff9c  MOV ECX,EAX
0069ff9e  MOV dword ptr [ECX],EDX
0069ffa0  FSTP float ptr [ESP + 0xc]
0069ffa4  MOV EDX,dword ptr [ESP + 0xc]
0069ffa8  MOV dword ptr [ESP + 0x10],0x0
0069ffb0  MOV dword ptr [ECX + 0x4],EDX
0069ffb3  MOV EDX,dword ptr [ESP + 0x10]
0069ffb7  MOV dword ptr [ECX + 0x8],EDX
0069ffba  MOV ECX,dword ptr [EDI + 0xd4]
0069ffc0  MOV EDX,dword ptr [ECX]
0069ffc2  PUSH EAX
0069ffc3  CALL dword ptr [EDX + 0x38]
0069ffc6  POP EDI
0069ffc7  POP ESI
0069ffc8  ADD ESP,0xc
0069ffcb  RET 0x8
