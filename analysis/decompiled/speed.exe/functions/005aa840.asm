005aa840  MOV EAX,FS:[0x0]
005aa846  PUSH -0x1
005aa848  PUSH 0x873d28
005aa84d  PUSH EAX
005aa84e  MOV dword ptr FS:[0x0],ESP
005aa855  SUB ESP,0x44
005aa858  PUSH ESI
005aa859  PUSH EDI
005aa85a  MOV EDI,ECX
005aa85c  CMP dword ptr [EDI + 0x8],0x3ffffffe
005aa863  JC 0x005aa8b1
005aa865  PUSH 0x13
005aa867  XOR ESI,ESI
005aa869  PUSH 0x892b50
005aa86e  LEA ECX,[ESP + 0x10]
005aa872  MOV dword ptr [ESP + 0x28],0xf
005aa87a  MOV dword ptr [ESP + 0x24],ESI
005aa87e  MOV byte ptr [ESP + 0x14],0x0
005aa883  CALL 0x004303b0
005aa888  LEA EAX,[ESP + 0x8]
005aa88c  PUSH EAX
005aa88d  LEA ECX,[ESP + 0x28]
005aa891  MOV dword ptr [ESP + 0x58],ESI
005aa895  CALL 0x00432d50
005aa89a  PUSH 0x8c9ca8
005aa89f  LEA ECX,[ESP + 0x28]
005aa8a3  PUSH ECX
005aa8a4  MOV dword ptr [ESP + 0x2c],0x8bf290
005aa8ac  CALL 0x007c56b0
005aa8b1  MOV EDX,dword ptr [ESP + 0x68]
005aa8b5  MOV EAX,dword ptr [EDI + 0x4]
005aa8b8  MOV ESI,dword ptr [ESP + 0x64]
005aa8bc  PUSH EBX
005aa8bd  PUSH 0x0
005aa8bf  PUSH EDX
005aa8c0  PUSH EAX
005aa8c1  PUSH ESI
005aa8c2  PUSH EAX
005aa8c3  MOV ECX,EDI
005aa8c5  CALL 0x0058b5b0
005aa8ca  MOV EBX,dword ptr [EDI + 0x8]
005aa8cd  MOV ECX,EAX
005aa8cf  MOV EAX,dword ptr [EDI + 0x4]
005aa8d2  INC EBX
005aa8d3  CMP ESI,EAX
005aa8d5  MOV dword ptr [ESP + 0x6c],ECX
005aa8d9  MOV dword ptr [EDI + 0x8],EBX
005aa8dc  JNZ 0x005aa8ee
005aa8de  MOV dword ptr [EAX + 0x4],ECX
005aa8e1  MOV EAX,dword ptr [EDI + 0x4]
005aa8e4  MOV dword ptr [EAX],ECX
005aa8e6  MOV EDX,dword ptr [EDI + 0x4]
005aa8e9  MOV dword ptr [EDX + 0x8],ECX
005aa8ec  JMP 0x005aa911
005aa8ee  MOV AL,byte ptr [ESP + 0x64]
005aa8f2  TEST AL,AL
005aa8f4  JZ 0x005aa903
005aa8f6  MOV dword ptr [ESI],ECX
005aa8f8  MOV EAX,dword ptr [EDI + 0x4]
005aa8fb  CMP ESI,dword ptr [EAX]
005aa8fd  JNZ 0x005aa911
005aa8ff  MOV dword ptr [EAX],ECX
005aa901  JMP 0x005aa911
005aa903  MOV dword ptr [ESI + 0x8],ECX
005aa906  MOV EAX,dword ptr [EDI + 0x4]
005aa909  CMP ESI,dword ptr [EAX + 0x8]
005aa90c  JNZ 0x005aa911
005aa90e  MOV dword ptr [EAX + 0x8],ECX
005aa911  MOV EDX,dword ptr [ECX + 0x4]
005aa914  CMP byte ptr [EDX + 0x10],0x0
005aa918  LEA EAX,[ECX + 0x4]
005aa91b  MOV ESI,ECX
005aa91d  MOV BL,0x1
005aa91f  JNZ 0x005aa9ca
005aa925  PUSH EBP
005aa926  MOV ECX,dword ptr [EAX]
005aa928  MOV EBP,dword ptr [ECX + 0x4]
005aa92b  MOV EDX,dword ptr [EBP]
005aa92e  CMP ECX,EDX
005aa930  JNZ 0x005aa982
005aa932  MOV EDX,dword ptr [EBP + 0x8]
005aa935  CMP byte ptr [EDX + 0x10],0x0
005aa939  JNZ 0x005aa953
005aa93b  MOV ECX,dword ptr [EAX]
005aa93d  MOV byte ptr [ECX + 0x10],BL
005aa940  MOV byte ptr [EDX + 0x10],BL
005aa943  MOV EDX,dword ptr [EAX]
005aa945  MOV ECX,dword ptr [EDX + 0x4]
005aa948  MOV byte ptr [ECX + 0x10],0x0
005aa94c  MOV EDX,dword ptr [EAX]
005aa94e  MOV ESI,dword ptr [EDX + 0x4]
005aa951  JMP 0x005aa9b4
005aa953  CMP ESI,dword ptr [ECX + 0x8]
005aa956  JNZ 0x005aa962
005aa958  MOV ESI,ECX
005aa95a  PUSH ESI
005aa95b  MOV ECX,EDI
005aa95d  CALL 0x0058b4f0
005aa962  MOV EAX,dword ptr [ESI + 0x4]
005aa965  MOV byte ptr [EAX + 0x10],BL
005aa968  MOV ECX,dword ptr [ESI + 0x4]
005aa96b  MOV EDX,dword ptr [ECX + 0x4]
005aa96e  MOV byte ptr [EDX + 0x10],0x0
005aa972  MOV EAX,dword ptr [ESI + 0x4]
005aa975  MOV ECX,dword ptr [EAX + 0x4]
005aa978  PUSH ECX
005aa979  MOV ECX,EDI
005aa97b  CALL 0x0058b550
005aa980  JMP 0x005aa9b4
005aa982  CMP byte ptr [EDX + 0x10],0x0
005aa986  JZ 0x005aa93b
005aa988  CMP ESI,dword ptr [ECX]
005aa98a  JNZ 0x005aa996
005aa98c  MOV ESI,ECX
005aa98e  PUSH ESI
005aa98f  MOV ECX,EDI
005aa991  CALL 0x0058b550
005aa996  MOV EAX,dword ptr [ESI + 0x4]
005aa999  MOV byte ptr [EAX + 0x10],BL
005aa99c  MOV ECX,dword ptr [ESI + 0x4]
005aa99f  MOV EDX,dword ptr [ECX + 0x4]
005aa9a2  MOV byte ptr [EDX + 0x10],0x0
005aa9a6  MOV EAX,dword ptr [ESI + 0x4]
005aa9a9  MOV ECX,dword ptr [EAX + 0x4]
005aa9ac  PUSH ECX
005aa9ad  MOV ECX,EDI
005aa9af  CALL 0x0058b4f0
005aa9b4  MOV EDX,dword ptr [ESI + 0x4]
005aa9b7  MOV CL,byte ptr [EDX + 0x10]
005aa9ba  TEST CL,CL
005aa9bc  LEA EAX,[ESI + 0x4]
005aa9bf  JZ 0x005aa926
005aa9c5  MOV ECX,dword ptr [ESP + 0x70]
005aa9c9  POP EBP
005aa9ca  MOV EAX,dword ptr [EDI + 0x4]
005aa9cd  MOV EDX,dword ptr [EAX + 0x4]
005aa9d0  MOV EAX,dword ptr [ESP + 0x60]
005aa9d4  MOV byte ptr [EDX + 0x10],BL
005aa9d7  POP EBX
005aa9d8  MOV dword ptr [EAX],ECX
005aa9da  MOV ECX,dword ptr [ESP + 0x4c]
005aa9de  POP EDI
005aa9df  POP ESI
005aa9e0  MOV dword ptr FS:[0x0],ECX
005aa9e7  ADD ESP,0x50
005aa9ea  RET 0x10
