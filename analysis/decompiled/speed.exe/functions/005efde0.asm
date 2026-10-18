005efde0  MOV EAX,FS:[0x0]
005efde6  PUSH -0x1
005efde8  PUSH 0x875788
005efded  PUSH EAX
005efdee  MOV dword ptr FS:[0x0],ESP
005efdf5  SUB ESP,0x44
005efdf8  PUSH ESI
005efdf9  PUSH EDI
005efdfa  MOV EDI,ECX
005efdfc  CMP dword ptr [EDI + 0x8],0x1ffffffe
005efe03  JC 0x005efe51
005efe05  PUSH 0x13
005efe07  XOR ESI,ESI
005efe09  PUSH 0x892b50
005efe0e  LEA ECX,[ESP + 0x10]
005efe12  MOV dword ptr [ESP + 0x28],0xf
005efe1a  MOV dword ptr [ESP + 0x24],ESI
005efe1e  MOV byte ptr [ESP + 0x14],0x0
005efe23  CALL 0x004303b0
005efe28  LEA EAX,[ESP + 0x8]
005efe2c  PUSH EAX
005efe2d  LEA ECX,[ESP + 0x28]
005efe31  MOV dword ptr [ESP + 0x58],ESI
005efe35  CALL 0x00432d50
005efe3a  PUSH 0x8c9ca8
005efe3f  LEA ECX,[ESP + 0x28]
005efe43  PUSH ECX
005efe44  MOV dword ptr [ESP + 0x2c],0x8bf290
005efe4c  CALL 0x007c56b0
005efe51  MOV EDX,dword ptr [ESP + 0x68]
005efe55  MOV EAX,dword ptr [EDI + 0x4]
005efe58  MOV ESI,dword ptr [ESP + 0x64]
005efe5c  PUSH EBX
005efe5d  PUSH 0x0
005efe5f  PUSH EDX
005efe60  PUSH EAX
005efe61  PUSH ESI
005efe62  PUSH EAX
005efe63  MOV ECX,EDI
005efe65  CALL 0x005e6c80
005efe6a  MOV EBX,dword ptr [EDI + 0x8]
005efe6d  MOV ECX,EAX
005efe6f  MOV EAX,dword ptr [EDI + 0x4]
005efe72  INC EBX
005efe73  CMP ESI,EAX
005efe75  MOV dword ptr [ESP + 0x6c],ECX
005efe79  MOV dword ptr [EDI + 0x8],EBX
005efe7c  JNZ 0x005efe8e
005efe7e  MOV dword ptr [EAX + 0x4],ECX
005efe81  MOV EAX,dword ptr [EDI + 0x4]
005efe84  MOV dword ptr [EAX],ECX
005efe86  MOV EDX,dword ptr [EDI + 0x4]
005efe89  MOV dword ptr [EDX + 0x8],ECX
005efe8c  JMP 0x005efeb1
005efe8e  MOV AL,byte ptr [ESP + 0x64]
005efe92  TEST AL,AL
005efe94  JZ 0x005efea3
005efe96  MOV dword ptr [ESI],ECX
005efe98  MOV EAX,dword ptr [EDI + 0x4]
005efe9b  CMP ESI,dword ptr [EAX]
005efe9d  JNZ 0x005efeb1
005efe9f  MOV dword ptr [EAX],ECX
005efea1  JMP 0x005efeb1
005efea3  MOV dword ptr [ESI + 0x8],ECX
005efea6  MOV EAX,dword ptr [EDI + 0x4]
005efea9  CMP ESI,dword ptr [EAX + 0x8]
005efeac  JNZ 0x005efeb1
005efeae  MOV dword ptr [EAX + 0x8],ECX
005efeb1  MOV EDX,dword ptr [ECX + 0x4]
005efeb4  CMP byte ptr [EDX + 0x14],0x0
005efeb8  LEA EAX,[ECX + 0x4]
005efebb  MOV ESI,ECX
005efebd  MOV BL,0x1
005efebf  JNZ 0x005eff6a
005efec5  PUSH EBP
005efec6  MOV ECX,dword ptr [EAX]
005efec8  MOV EBP,dword ptr [ECX + 0x4]
005efecb  MOV EDX,dword ptr [EBP]
005efece  CMP ECX,EDX
005efed0  JNZ 0x005eff22
005efed2  MOV EDX,dword ptr [EBP + 0x8]
005efed5  CMP byte ptr [EDX + 0x14],0x0
005efed9  JNZ 0x005efef3
005efedb  MOV ECX,dword ptr [EAX]
005efedd  MOV byte ptr [ECX + 0x14],BL
005efee0  MOV byte ptr [EDX + 0x14],BL
005efee3  MOV EDX,dword ptr [EAX]
005efee5  MOV ECX,dword ptr [EDX + 0x4]
005efee8  MOV byte ptr [ECX + 0x14],0x0
005efeec  MOV EDX,dword ptr [EAX]
005efeee  MOV ESI,dword ptr [EDX + 0x4]
005efef1  JMP 0x005eff54
005efef3  CMP ESI,dword ptr [ECX + 0x8]
005efef6  JNZ 0x005eff02
005efef8  MOV ESI,ECX
005efefa  PUSH ESI
005efefb  MOV ECX,EDI
005efefd  CALL 0x005e6070
005eff02  MOV EAX,dword ptr [ESI + 0x4]
005eff05  MOV byte ptr [EAX + 0x14],BL
005eff08  MOV ECX,dword ptr [ESI + 0x4]
005eff0b  MOV EDX,dword ptr [ECX + 0x4]
005eff0e  MOV byte ptr [EDX + 0x14],0x0
005eff12  MOV EAX,dword ptr [ESI + 0x4]
005eff15  MOV ECX,dword ptr [EAX + 0x4]
005eff18  PUSH ECX
005eff19  MOV ECX,EDI
005eff1b  CALL 0x005ded90
005eff20  JMP 0x005eff54
005eff22  CMP byte ptr [EDX + 0x14],0x0
005eff26  JZ 0x005efedb
005eff28  CMP ESI,dword ptr [ECX]
005eff2a  JNZ 0x005eff36
005eff2c  MOV ESI,ECX
005eff2e  PUSH ESI
005eff2f  MOV ECX,EDI
005eff31  CALL 0x005ded90
005eff36  MOV EAX,dword ptr [ESI + 0x4]
005eff39  MOV byte ptr [EAX + 0x14],BL
005eff3c  MOV ECX,dword ptr [ESI + 0x4]
005eff3f  MOV EDX,dword ptr [ECX + 0x4]
005eff42  MOV byte ptr [EDX + 0x14],0x0
005eff46  MOV EAX,dword ptr [ESI + 0x4]
005eff49  MOV ECX,dword ptr [EAX + 0x4]
005eff4c  PUSH ECX
005eff4d  MOV ECX,EDI
005eff4f  CALL 0x005e6070
005eff54  MOV EDX,dword ptr [ESI + 0x4]
005eff57  MOV CL,byte ptr [EDX + 0x14]
005eff5a  TEST CL,CL
005eff5c  LEA EAX,[ESI + 0x4]
005eff5f  JZ 0x005efec6
005eff65  MOV ECX,dword ptr [ESP + 0x70]
005eff69  POP EBP
005eff6a  MOV EAX,dword ptr [EDI + 0x4]
005eff6d  MOV EDX,dword ptr [EAX + 0x4]
005eff70  MOV EAX,dword ptr [ESP + 0x60]
005eff74  MOV byte ptr [EDX + 0x14],BL
005eff77  POP EBX
005eff78  MOV dword ptr [EAX],ECX
005eff7a  MOV ECX,dword ptr [ESP + 0x4c]
005eff7e  POP EDI
005eff7f  POP ESI
005eff80  MOV dword ptr FS:[0x0],ECX
005eff87  ADD ESP,0x50
005eff8a  RET 0x10
