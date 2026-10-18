007cdbf0  PUSH EBP
007cdbf1  MOV EBP,ESP
007cdbf3  SUB ESP,0xc
007cdbf6  CMP dword ptr [EBP + 0x8],0x0
007cdbfa  JZ 0x007cdc1c
007cdbfc  MOV EAX,dword ptr [EBP + 0x10]
007cdbff  PUSH EAX
007cdc00  LEA ECX,[EBP + -0x8]
007cdc03  PUSH ECX
007cdc04  CALL 0x007de9b0
007cdc09  ADD ESP,0x8
007cdc0c  MOV EDX,dword ptr [EBP + 0xc]
007cdc0f  MOV EAX,dword ptr [EBP + -0x8]
007cdc12  MOV dword ptr [EDX],EAX
007cdc14  MOV ECX,dword ptr [EBP + -0x4]
007cdc17  MOV dword ptr [EDX + 0x4],ECX
007cdc1a  JMP 0x007cdc34
007cdc1c  MOV EDX,dword ptr [EBP + 0x10]
007cdc1f  PUSH EDX
007cdc20  LEA EAX,[EBP + -0xc]
007cdc23  PUSH EAX
007cdc24  CALL 0x007dea50
007cdc29  ADD ESP,0x8
007cdc2c  MOV ECX,dword ptr [EBP + 0xc]
007cdc2f  MOV EDX,dword ptr [EBP + -0xc]
007cdc32  MOV dword ptr [ECX],EDX
007cdc34  MOV ESP,EBP
007cdc36  POP EBP
007cdc37  RET
