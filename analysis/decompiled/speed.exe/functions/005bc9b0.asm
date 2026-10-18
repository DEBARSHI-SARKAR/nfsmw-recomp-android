005bc9b0  MOV EAX,dword ptr [ESP + 0x4]
005bc9b4  MOVZX EDX,word ptr [EAX]
005bc9b7  MOV ECX,dword ptr [ECX + 0xc]
005bc9ba  SUB ESP,0x8
005bc9bd  CMP EDX,0x6a4c
005bc9c3  JG 0x005bca3f
005bc9c5  JZ 0x005bca24
005bc9c7  CMP EDX,0x444c
005bc9cd  JZ 0x005bca11
005bc9cf  CMP EDX,0x4953
005bc9d5  JZ 0x005bc9fe
005bc9d7  CMP EDX,0x6343
005bc9dd  JNZ 0x005bcaac
005bc9e3  MOV EDX,dword ptr [ECX + 0x64]
005bc9e6  MOV EAX,dword ptr [EAX + 0x4]
005bc9e9  PUSH EDX
005bc9ea  MOV EDX,dword ptr [ECX + 0x60]
005bc9ed  PUSH EDX
005bc9ee  PUSH EAX
005bc9ef  PUSH 0x0
005bc9f1  PUSH 0x0
005bc9f3  CALL 0x005b4d50
005bc9f8  ADD ESP,0x8
005bc9fb  RET 0x4
005bc9fe  MOV EDX,dword ptr [EAX + 0x8]
005bca01  MOV EAX,dword ptr [EAX + 0x4]
005bca04  PUSH EDX
005bca05  PUSH EAX
005bca06  CALL 0x005b42d0
005bca0b  ADD ESP,0x8
005bca0e  RET 0x4
005bca11  MOV EDX,dword ptr [EAX + 0x8]
005bca14  MOV EAX,dword ptr [EAX + 0x4]
005bca17  PUSH EDX
005bca18  PUSH EAX
005bca19  CALL 0x005b98f0
005bca1e  ADD ESP,0x8
005bca21  RET 0x4
005bca24  MOV EDX,dword ptr [ECX + 0x64]
005bca27  MOV EAX,dword ptr [EAX + 0x4]
005bca2a  PUSH EDX
005bca2b  MOV EDX,dword ptr [ECX + 0x60]
005bca2e  PUSH EDX
005bca2f  PUSH EAX
005bca30  PUSH 0x0
005bca32  PUSH 0x0
005bca34  CALL 0x005b50c0
005bca39  ADD ESP,0x8
005bca3c  RET 0x4
005bca3f  CMP EDX,0x7343
005bca45  JZ 0x005bca89
005bca47  CMP EDX,0x744c
005bca4d  JZ 0x005bca6f
005bca4f  CMP EDX,0x764c
005bca55  JNZ 0x005bcaac
005bca57  FLD float ptr [EAX + 0x8]
005bca5a  FLD float ptr [EAX + 0x4]
005bca5d  FSTP float ptr [ECX + 0x84]
005bca63  FSTP float ptr [ECX + 0x88]
005bca69  ADD ESP,0x8
005bca6c  RET 0x4
005bca6f  MOV EDX,dword ptr [ECX + 0x68]
005bca72  AND EDX,0x1
005bca75  MOV dword ptr [ECX + 0x68],EDX
005bca78  MOV EAX,dword ptr [EAX + 0x4]
005bca7b  AND EAX,0xfffffffe
005bca7e  OR EAX,EDX
005bca80  MOV dword ptr [ECX + 0x68],EAX
005bca83  ADD ESP,0x8
005bca86  RET 0x4
005bca89  MOV EDX,dword ptr [EAX + 0x4]
005bca8c  MOV EAX,dword ptr [EAX + 0x8]
005bca8f  MOV dword ptr [ESP],EDX
005bca92  MOV EDX,dword ptr [ECX + 0x64]
005bca95  PUSH EDX
005bca96  MOV dword ptr [ESP + 0x8],EAX
005bca9a  MOV EAX,dword ptr [ECX + 0x60]
005bca9d  PUSH EAX
005bca9e  LEA EDX,[ESP + 0x8]
005bcaa2  PUSH EDX
005bcaa3  PUSH 0x0
005bcaa5  PUSH 0x0
005bcaa7  CALL 0x005b4e70
005bcaac  ADD ESP,0x8
005bcaaf  RET 0x4
