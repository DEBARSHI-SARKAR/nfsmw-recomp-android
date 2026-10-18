007df090  PUSH EBP
007df091  MOV EBP,ESP
007df093  SUB ESP,0x8
007df096  CMP dword ptr [EBP + 0xc],0x0
007df09a  JNZ 0x007df0a3
007df09c  XOR EAX,EAX
007df09e  JMP 0x007df126
007df0a3  MOV EAX,dword ptr [EBP + 0x8]
007df0a6  CMP dword ptr [EAX + 0x14],0x0
007df0aa  JNZ 0x007df0d7
007df0ac  MOVZX ECX,word ptr [EBP + 0x10]
007df0b0  CMP ECX,0xff
007df0b6  JLE 0x007df0c8
007df0b8  CALL 0x007cb270
007df0bd  MOV dword ptr [EAX],0x2a
007df0c3  OR EAX,0xffffffff
007df0c6  JMP 0x007df126
007df0c8  MOV EDX,dword ptr [EBP + 0xc]
007df0cb  MOV AL,byte ptr [EBP + 0x10]
007df0ce  MOV byte ptr [EDX],AL
007df0d0  MOV EAX,0x1
007df0d5  JMP 0x007df126
007df0d7  MOV dword ptr [EBP + -0x4],0x0
007df0de  LEA ECX,[EBP + -0x4]
007df0e1  PUSH ECX
007df0e2  PUSH 0x0
007df0e4  MOV EDX,dword ptr [EBP + 0x8]
007df0e7  MOV EAX,dword ptr [EDX + 0x28]
007df0ea  PUSH EAX
007df0eb  MOV ECX,dword ptr [EBP + 0xc]
007df0ee  PUSH ECX
007df0ef  PUSH 0x1
007df0f1  LEA EDX,[EBP + 0x10]
007df0f4  PUSH EDX
007df0f5  PUSH 0x0
007df0f7  MOV EAX,dword ptr [EBP + 0x8]
007df0fa  MOV ECX,dword ptr [EAX + 0x4]
007df0fd  PUSH ECX
007df0fe  CALL dword ptr [0x008901e4]
007df104  MOV dword ptr [EBP + -0x8],EAX
007df107  CMP dword ptr [EBP + -0x8],0x0
007df10b  JZ 0x007df113
007df10d  CMP dword ptr [EBP + -0x4],0x0
007df111  JZ 0x007df123
007df113  CALL 0x007cb270
007df118  MOV dword ptr [EAX],0x2a
007df11e  OR EAX,0xffffffff
007df121  JMP 0x007df126
007df123  MOV EAX,dword ptr [EBP + -0x8]
007df126  MOV ESP,EBP
007df128  POP EBP
007df129  RET
