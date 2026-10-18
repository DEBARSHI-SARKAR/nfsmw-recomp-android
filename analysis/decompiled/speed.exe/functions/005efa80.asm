005efa80  MOV EAX,FS:[0x0]
005efa86  PUSH -0x1
005efa88  PUSH 0x875748
005efa8d  PUSH EAX
005efa8e  MOV dword ptr FS:[0x0],ESP
005efa95  SUB ESP,0x44
005efa98  PUSH ESI
005efa99  PUSH EDI
005efa9a  MOV EDI,ECX
005efa9c  CMP dword ptr [EDI + 0x8],0x1ffffffe
005efaa3  JC 0x005efaf1
005efaa5  PUSH 0x13
005efaa7  XOR ESI,ESI
005efaa9  PUSH 0x892b50
005efaae  LEA ECX,[ESP + 0x10]
005efab2  MOV dword ptr [ESP + 0x28],0xf
005efaba  MOV dword ptr [ESP + 0x24],ESI
005efabe  MOV byte ptr [ESP + 0x14],0x0
005efac3  CALL 0x004303b0
005efac8  LEA EAX,[ESP + 0x8]
005efacc  PUSH EAX
005efacd  LEA ECX,[ESP + 0x28]
005efad1  MOV dword ptr [ESP + 0x58],ESI
005efad5  CALL 0x00432d50
005efada  PUSH 0x8c9ca8
005efadf  LEA ECX,[ESP + 0x28]
005efae3  PUSH ECX
005efae4  MOV dword ptr [ESP + 0x2c],0x8bf290
005efaec  CALL 0x007c56b0
005efaf1  MOV EDX,dword ptr [ESP + 0x68]
005efaf5  MOV EAX,dword ptr [EDI + 0x4]
005efaf8  MOV ESI,dword ptr [ESP + 0x64]
005efafc  PUSH EBX
005efafd  PUSH 0x0
005efaff  PUSH EDX
005efb00  PUSH EAX
005efb01  PUSH ESI
005efb02  PUSH EAX
005efb03  MOV ECX,EDI
005efb05  CALL 0x005e6a70
005efb0a  MOV EBX,dword ptr [EDI + 0x8]
005efb0d  MOV ECX,EAX
005efb0f  MOV EAX,dword ptr [EDI + 0x4]
005efb12  INC EBX
005efb13  CMP ESI,EAX
005efb15  MOV dword ptr [ESP + 0x6c],ECX
005efb19  MOV dword ptr [EDI + 0x8],EBX
005efb1c  JNZ 0x005efb2e
005efb1e  MOV dword ptr [EAX + 0x4],ECX
005efb21  MOV EAX,dword ptr [EDI + 0x4]
005efb24  MOV dword ptr [EAX],ECX
005efb26  MOV EDX,dword ptr [EDI + 0x4]
005efb29  MOV dword ptr [EDX + 0x8],ECX
005efb2c  JMP 0x005efb51
005efb2e  MOV AL,byte ptr [ESP + 0x64]
005efb32  TEST AL,AL
005efb34  JZ 0x005efb43
005efb36  MOV dword ptr [ESI],ECX
005efb38  MOV EAX,dword ptr [EDI + 0x4]
005efb3b  CMP ESI,dword ptr [EAX]
005efb3d  JNZ 0x005efb51
005efb3f  MOV dword ptr [EAX],ECX
005efb41  JMP 0x005efb51
005efb43  MOV dword ptr [ESI + 0x8],ECX
005efb46  MOV EAX,dword ptr [EDI + 0x4]
005efb49  CMP ESI,dword ptr [EAX + 0x8]
005efb4c  JNZ 0x005efb51
005efb4e  MOV dword ptr [EAX + 0x8],ECX
005efb51  MOV EDX,dword ptr [ECX + 0x4]
005efb54  CMP byte ptr [EDX + 0x14],0x0
005efb58  LEA EAX,[ECX + 0x4]
005efb5b  MOV ESI,ECX
005efb5d  MOV BL,0x1
005efb5f  JNZ 0x005efc0a
005efb65  PUSH EBP
005efb66  MOV ECX,dword ptr [EAX]
005efb68  MOV EBP,dword ptr [ECX + 0x4]
005efb6b  MOV EDX,dword ptr [EBP]
005efb6e  CMP ECX,EDX
005efb70  JNZ 0x005efbc2
005efb72  MOV EDX,dword ptr [EBP + 0x8]
005efb75  CMP byte ptr [EDX + 0x14],0x0
005efb79  JNZ 0x005efb93
005efb7b  MOV ECX,dword ptr [EAX]
005efb7d  MOV byte ptr [ECX + 0x14],BL
005efb80  MOV byte ptr [EDX + 0x14],BL
005efb83  MOV EDX,dword ptr [EAX]
005efb85  MOV ECX,dword ptr [EDX + 0x4]
005efb88  MOV byte ptr [ECX + 0x14],0x0
005efb8c  MOV EDX,dword ptr [EAX]
005efb8e  MOV ESI,dword ptr [EDX + 0x4]
005efb91  JMP 0x005efbf4
005efb93  CMP ESI,dword ptr [ECX + 0x8]
005efb96  JNZ 0x005efba2
005efb98  MOV ESI,ECX
005efb9a  PUSH ESI
005efb9b  MOV ECX,EDI
005efb9d  CALL 0x005e5f20
005efba2  MOV EAX,dword ptr [ESI + 0x4]
005efba5  MOV byte ptr [EAX + 0x14],BL
005efba8  MOV ECX,dword ptr [ESI + 0x4]
005efbab  MOV EDX,dword ptr [ECX + 0x4]
005efbae  MOV byte ptr [EDX + 0x14],0x0
005efbb2  MOV EAX,dword ptr [ESI + 0x4]
005efbb5  MOV ECX,dword ptr [EAX + 0x4]
005efbb8  PUSH ECX
005efbb9  MOV ECX,EDI
005efbbb  CALL 0x005debb0
005efbc0  JMP 0x005efbf4
005efbc2  CMP byte ptr [EDX + 0x14],0x0
005efbc6  JZ 0x005efb7b
005efbc8  CMP ESI,dword ptr [ECX]
005efbca  JNZ 0x005efbd6
005efbcc  MOV ESI,ECX
005efbce  PUSH ESI
005efbcf  MOV ECX,EDI
005efbd1  CALL 0x005debb0
005efbd6  MOV EAX,dword ptr [ESI + 0x4]
005efbd9  MOV byte ptr [EAX + 0x14],BL
005efbdc  MOV ECX,dword ptr [ESI + 0x4]
005efbdf  MOV EDX,dword ptr [ECX + 0x4]
005efbe2  MOV byte ptr [EDX + 0x14],0x0
005efbe6  MOV EAX,dword ptr [ESI + 0x4]
005efbe9  MOV ECX,dword ptr [EAX + 0x4]
005efbec  PUSH ECX
005efbed  MOV ECX,EDI
005efbef  CALL 0x005e5f20
005efbf4  MOV EDX,dword ptr [ESI + 0x4]
005efbf7  MOV CL,byte ptr [EDX + 0x14]
005efbfa  TEST CL,CL
005efbfc  LEA EAX,[ESI + 0x4]
005efbff  JZ 0x005efb66
005efc05  MOV ECX,dword ptr [ESP + 0x70]
005efc09  POP EBP
005efc0a  MOV EAX,dword ptr [EDI + 0x4]
005efc0d  MOV EDX,dword ptr [EAX + 0x4]
005efc10  MOV EAX,dword ptr [ESP + 0x60]
005efc14  MOV byte ptr [EDX + 0x14],BL
005efc17  POP EBX
005efc18  MOV dword ptr [EAX],ECX
005efc1a  MOV ECX,dword ptr [ESP + 0x4c]
005efc1e  POP EDI
005efc1f  POP ESI
005efc20  MOV dword ptr FS:[0x0],ECX
005efc27  ADD ESP,0x50
005efc2a  RET 0x10
