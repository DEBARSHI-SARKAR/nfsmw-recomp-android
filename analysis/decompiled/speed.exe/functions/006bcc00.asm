006bcc00  PUSH EBP
006bcc01  MOV EBP,ESP
006bcc03  AND ESP,0xfffffff0
006bcc06  SUB ESP,0x40
006bcc09  MOV EAX,dword ptr [EBP + 0x8]
006bcc0c  MOV ECX,dword ptr [EAX]
006bcc0e  PUSH ECX
006bcc0f  LEA EDX,[ESP + 0x4]
006bcc13  PUSH EDX
006bcc14  CALL 0x00444fe0
006bcc19  FLD float ptr [ESP + 0x8]
006bcc1d  MOV EAX,dword ptr [EBP + 0xc]
006bcc20  MOV ECX,dword ptr [ESP + 0x18]
006bcc24  FSTP float ptr [EAX]
006bcc26  MOV EDX,dword ptr [ESP + 0x28]
006bcc2a  FLD float ptr [ESP + 0xc]
006bcc2e  MOV dword ptr [EAX + 0x4],ECX
006bcc31  MOV ECX,dword ptr [ESP + 0x1c]
006bcc35  MOV dword ptr [EAX + 0x8],EDX
006bcc38  MOV EAX,dword ptr [EBP + 0x10]
006bcc3b  MOV EDX,dword ptr [ESP + 0x2c]
006bcc3f  FSTP float ptr [EAX]
006bcc41  FLD float ptr [ESP + 0x10]
006bcc45  MOV dword ptr [EAX + 0x4],ECX
006bcc48  MOV ECX,dword ptr [ESP + 0x20]
006bcc4c  MOV dword ptr [EAX + 0x8],EDX
006bcc4f  MOV EAX,dword ptr [EBP + 0x14]
006bcc52  MOV EDX,dword ptr [ESP + 0x30]
006bcc56  FSTP float ptr [EAX]
006bcc58  ADD ESP,0x8
006bcc5b  MOV dword ptr [EAX + 0x4],ECX
006bcc5e  MOV dword ptr [EAX + 0x8],EDX
006bcc61  MOV ESP,EBP
006bcc63  POP EBP
006bcc64  RET
