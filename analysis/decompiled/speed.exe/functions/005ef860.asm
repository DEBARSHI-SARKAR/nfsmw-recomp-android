005ef860  MOV EAX,FS:[0x0]
005ef866  PUSH -0x1
005ef868  PUSH 0x875708
005ef86d  PUSH EAX
005ef86e  MOV dword ptr FS:[0x0],ESP
005ef875  SUB ESP,0x44
005ef878  PUSH ESI
005ef879  PUSH EDI
005ef87a  MOV EDI,ECX
005ef87c  CMP dword ptr [EDI + 0x8],0x7ffffffe
005ef883  JC 0x005ef8d1
005ef885  PUSH 0x13
005ef887  XOR ESI,ESI
005ef889  PUSH 0x892b50
005ef88e  LEA ECX,[ESP + 0x10]
005ef892  MOV dword ptr [ESP + 0x28],0xf
005ef89a  MOV dword ptr [ESP + 0x24],ESI
005ef89e  MOV byte ptr [ESP + 0x14],0x0
005ef8a3  CALL 0x004303b0
005ef8a8  LEA EAX,[ESP + 0x8]
005ef8ac  PUSH EAX
005ef8ad  LEA ECX,[ESP + 0x28]
005ef8b1  MOV dword ptr [ESP + 0x58],ESI
005ef8b5  CALL 0x00432d50
005ef8ba  PUSH 0x8c9ca8
005ef8bf  LEA ECX,[ESP + 0x28]
005ef8c3  PUSH ECX
005ef8c4  MOV dword ptr [ESP + 0x2c],0x8bf290
005ef8cc  CALL 0x007c56b0
005ef8d1  MOV EDX,dword ptr [ESP + 0x68]
005ef8d5  MOV EAX,dword ptr [EDI + 0x4]
005ef8d8  MOV ESI,dword ptr [ESP + 0x64]
005ef8dc  PUSH EBX
005ef8dd  PUSH 0x0
005ef8df  PUSH EDX
005ef8e0  PUSH EAX
005ef8e1  PUSH ESI
005ef8e2  PUSH EAX
005ef8e3  MOV ECX,EDI
005ef8e5  CALL 0x005e67e0
005ef8ea  MOV EBX,dword ptr [EDI + 0x8]
005ef8ed  MOV ECX,EAX
005ef8ef  MOV EAX,dword ptr [EDI + 0x4]
005ef8f2  INC EBX
005ef8f3  CMP ESI,EAX
005ef8f5  MOV dword ptr [ESP + 0x6c],ECX
005ef8f9  MOV dword ptr [EDI + 0x8],EBX
005ef8fc  JNZ 0x005ef90e
005ef8fe  MOV dword ptr [EAX + 0x4],ECX
005ef901  MOV EAX,dword ptr [EDI + 0x4]
005ef904  MOV dword ptr [EAX],ECX
005ef906  MOV EDX,dword ptr [EDI + 0x4]
005ef909  MOV dword ptr [EDX + 0x8],ECX
005ef90c  JMP 0x005ef931
005ef90e  MOV AL,byte ptr [ESP + 0x64]
005ef912  TEST AL,AL
005ef914  JZ 0x005ef923
005ef916  MOV dword ptr [ESI],ECX
005ef918  MOV EAX,dword ptr [EDI + 0x4]
005ef91b  CMP ESI,dword ptr [EAX]
005ef91d  JNZ 0x005ef931
005ef91f  MOV dword ptr [EAX],ECX
005ef921  JMP 0x005ef931
005ef923  MOV dword ptr [ESI + 0x8],ECX
005ef926  MOV EAX,dword ptr [EDI + 0x4]
005ef929  CMP ESI,dword ptr [EAX + 0x8]
005ef92c  JNZ 0x005ef931
005ef92e  MOV dword ptr [EAX + 0x8],ECX
005ef931  MOV EDX,dword ptr [ECX + 0x4]
005ef934  CMP byte ptr [EDX + 0xe],0x0
005ef938  LEA EAX,[ECX + 0x4]
005ef93b  MOV ESI,ECX
005ef93d  MOV BL,0x1
005ef93f  JNZ 0x005ef9ea
005ef945  PUSH EBP
005ef946  MOV ECX,dword ptr [EAX]
005ef948  MOV EBP,dword ptr [ECX + 0x4]
005ef94b  MOV EDX,dword ptr [EBP]
005ef94e  CMP ECX,EDX
005ef950  JNZ 0x005ef9a2
005ef952  MOV EDX,dword ptr [EBP + 0x8]
005ef955  CMP byte ptr [EDX + 0xe],0x0
005ef959  JNZ 0x005ef973
005ef95b  MOV ECX,dword ptr [EAX]
005ef95d  MOV byte ptr [ECX + 0xe],BL
005ef960  MOV byte ptr [EDX + 0xe],BL
005ef963  MOV EDX,dword ptr [EAX]
005ef965  MOV ECX,dword ptr [EDX + 0x4]
005ef968  MOV byte ptr [ECX + 0xe],0x0
005ef96c  MOV EDX,dword ptr [EAX]
005ef96e  MOV ESI,dword ptr [EDX + 0x4]
005ef971  JMP 0x005ef9d4
005ef973  CMP ESI,dword ptr [ECX + 0x8]
005ef976  JNZ 0x005ef982
005ef978  MOV ESI,ECX
005ef97a  PUSH ESI
005ef97b  MOV ECX,EDI
005ef97d  CALL 0x005e6720
005ef982  MOV EAX,dword ptr [ESI + 0x4]
005ef985  MOV byte ptr [EAX + 0xe],BL
005ef988  MOV ECX,dword ptr [ESI + 0x4]
005ef98b  MOV EDX,dword ptr [ECX + 0x4]
005ef98e  MOV byte ptr [EDX + 0xe],0x0
005ef992  MOV EAX,dword ptr [ESI + 0x4]
005ef995  MOV ECX,dword ptr [EAX + 0x4]
005ef998  PUSH ECX
005ef999  MOV ECX,EDI
005ef99b  CALL 0x005e6780
005ef9a0  JMP 0x005ef9d4
005ef9a2  CMP byte ptr [EDX + 0xe],0x0
005ef9a6  JZ 0x005ef95b
005ef9a8  CMP ESI,dword ptr [ECX]
005ef9aa  JNZ 0x005ef9b6
005ef9ac  MOV ESI,ECX
005ef9ae  PUSH ESI
005ef9af  MOV ECX,EDI
005ef9b1  CALL 0x005e6780
005ef9b6  MOV EAX,dword ptr [ESI + 0x4]
005ef9b9  MOV byte ptr [EAX + 0xe],BL
005ef9bc  MOV ECX,dword ptr [ESI + 0x4]
005ef9bf  MOV EDX,dword ptr [ECX + 0x4]
005ef9c2  MOV byte ptr [EDX + 0xe],0x0
005ef9c6  MOV EAX,dword ptr [ESI + 0x4]
005ef9c9  MOV ECX,dword ptr [EAX + 0x4]
005ef9cc  PUSH ECX
005ef9cd  MOV ECX,EDI
005ef9cf  CALL 0x005e6720
005ef9d4  MOV EDX,dword ptr [ESI + 0x4]
005ef9d7  MOV CL,byte ptr [EDX + 0xe]
005ef9da  TEST CL,CL
005ef9dc  LEA EAX,[ESI + 0x4]
005ef9df  JZ 0x005ef946
005ef9e5  MOV ECX,dword ptr [ESP + 0x70]
005ef9e9  POP EBP
005ef9ea  MOV EAX,dword ptr [EDI + 0x4]
005ef9ed  MOV EDX,dword ptr [EAX + 0x4]
005ef9f0  MOV EAX,dword ptr [ESP + 0x60]
005ef9f4  MOV byte ptr [EDX + 0xe],BL
005ef9f7  POP EBX
005ef9f8  MOV dword ptr [EAX],ECX
005ef9fa  MOV ECX,dword ptr [ESP + 0x4c]
005ef9fe  POP EDI
005ef9ff  POP ESI
005efa00  MOV dword ptr FS:[0x0],ECX
005efa07  ADD ESP,0x50
005efa0a  RET 0x10
