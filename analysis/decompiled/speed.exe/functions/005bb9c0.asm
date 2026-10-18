005bb9c0  SUB ESP,0x98
005bb9c6  PUSH ESI
005bb9c7  PUSH EDI
005bb9c8  MOV EDI,dword ptr [ESP + 0xa4]
005bb9cf  MOV EDX,dword ptr [EDI + 0x2c]
005bb9d2  MOV EAX,dword ptr [EDX + 0xc]
005bb9d5  TEST EAX,EAX
005bb9d7  MOV ESI,ECX
005bb9d9  MOV dword ptr [ESP + 0x1c],0x0
005bb9e1  MOV dword ptr [ESP + 0x18],0x0
005bb9e9  MOV dword ptr [ESP + 0x14],0x0
005bb9f1  MOV dword ptr [ESP + 0x10],0x0
005bb9f9  MOV dword ptr [ESP + 0xc],0x0
005bba01  MOV dword ptr [ESP + 0x8],0x0
005bba09  JZ 0x005bbb2e
005bba0f  CMP byte ptr [ESI],0x0
005bba12  JNZ 0x005bba1f
005bba14  MOV EAX,dword ptr [EDI + 0x1c]
005bba17  TEST EAX,EAX
005bba19  JS 0x005bbb2e
005bba1f  PUSH EBX
005bba20  PUSH EBP
005bba21  LEA EAX,[ESP + 0x28]
005bba25  PUSH EAX
005bba26  LEA ECX,[EDX + 0x28]
005bba29  CALL 0x005aff50
005bba2e  FLD float ptr [EDX + 0x10]
005bba31  FLD float ptr [EDX + 0x14]
005bba34  MOV ECX,dword ptr [EDX + 0x18]
005bba37  FXCH
005bba39  MOV dword ptr [ESP + 0x18],ECX
005bba3d  FMUL float ptr [0x00890da8]
005bba43  LEA EAX,[ESP + 0x10]
005bba47  PUSH EAX
005bba48  LEA ECX,[ESP + 0x2c]
005bba4c  FSTP float ptr [ESP + 0x14]
005bba50  PUSH ECX
005bba51  LEA EAX,[ESP + 0x24]
005bba55  FMUL float ptr [0x00890da8]
005bba5b  PUSH EAX
005bba5c  FSTP float ptr [ESP + 0x20]
005bba60  FLD float ptr [ESP + 0x24]
005bba64  FMUL float ptr [0x00890da8]
005bba6a  FSTP float ptr [ESP + 0x24]
005bba6e  CALL 0x005b0080
005bba73  FLD float ptr [ESP + 0x28]
005bba77  MOV ECX,dword ptr [ESP + 0xbc]
005bba7e  FADD float ptr [EDX + 0x1c]
005bba81  PUSH ECX
005bba82  LEA EAX,[ESP + 0x78]
005bba86  FADD float ptr [EDX + 0x10]
005bba89  FSTP float ptr [ESP + 0x68]
005bba8d  FLD float ptr [EDX + 0x20]
005bba90  FADD float ptr [EDX + 0x14]
005bba93  FADD float ptr [ESP + 0x30]
005bba97  FSTP float ptr [ESP + 0x6c]
005bba9b  FLD float ptr [EDX + 0x24]
005bba9e  FADD float ptr [EDX + 0x18]
005bbaa1  LEA EDX,[ESP + 0x38]
005bbaa5  PUSH EDX
005bbaa6  PUSH EAX
005bbaa7  FADD float ptr [ESP + 0x3c]
005bbaab  FSTP float ptr [ESP + 0x78]
005bbaaf  CALL 0x005b6a30
005bbab4  MOV EBP,dword ptr [ESP + 0xcc]
005bbabb  PUSH EBP
005bbabc  LEA ECX,[ESP + 0x84]
005bbac3  PUSH ECX
005bbac4  LEA EDX,[ESP + 0x48]
005bbac8  PUSH EDX
005bbac9  CALL 0x005b6a30
005bbace  MOV AX,word ptr [ESP + 0xdc]
005bbad6  ADD ESP,0x24
005bbad9  INC word ptr [ESI + 0xd4]
005bbae0  XOR EBX,EBX
005bbae2  MOV BX,word ptr [ESI + 0xd4]
005bbae9  MOV word ptr [EDI + 0x20],AX
005bbaed  MOV ECX,dword ptr [ESI + 0x108]
005bbaf3  MOV EDX,dword ptr [ECX]
005bbaf5  PUSH EDI
005bbaf6  PUSH EBX
005bbaf7  CALL dword ptr [EDX + 0x28]
005bbafa  MOV EDI,dword ptr [EDI + 0x64]
005bbafd  TEST EDI,EDI
005bbaff  JZ 0x005bbb2c
005bbb01  CMP dword ptr [EDI + 0x18],0x5
005bbb05  PUSH EBX
005bbb06  JNZ 0x005bbb18
005bbb08  PUSH EBP
005bbb09  LEA EAX,[ESP + 0x70]
005bbb0d  PUSH EAX
005bbb0e  PUSH EDI
005bbb0f  MOV ECX,ESI
005bbb11  CALL 0x005bb9c0
005bbb16  JMP 0x005bbb25
005bbb18  LEA ECX,[ESP + 0x2c]
005bbb1c  PUSH ECX
005bbb1d  PUSH EDI
005bbb1e  MOV ECX,ESI
005bbb20  CALL 0x005b7690
005bbb25  MOV EDI,dword ptr [EDI + 0x4]
005bbb28  TEST EDI,EDI
005bbb2a  JNZ 0x005bbb01
005bbb2c  POP EBP
005bbb2d  POP EBX
005bbb2e  POP EDI
005bbb2f  POP ESI
005bbb30  ADD ESP,0x98
005bbb36  RET 0x10
