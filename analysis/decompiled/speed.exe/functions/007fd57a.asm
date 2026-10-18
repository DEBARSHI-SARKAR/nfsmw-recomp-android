007fd57a  PUSH EBP
007fd57b  MOV EBP,ESP
007fd57d  MOV EDX,dword ptr [EBP + 0x10]
007fd580  MOV ECX,dword ptr [EBP + 0xc]
007fd583  MOV EAX,dword ptr [EBP + 0x8]
007fd586  PUSH EBX
007fd587  PUSH ESI
007fd588  PUSH EDI
007fd589  PUSH 0x8
007fd58b  POP ESI
007fd58c  MOVZX EBX,byte ptr [ECX]
007fd58f  MOVZX EDI,byte ptr [EAX]
007fd592  ADD EDI,EBX
007fd594  SAR EDI,0x1
007fd596  MOV word ptr [EDX],DI
007fd599  MOVZX EBX,byte ptr [ECX + 0x1]
007fd59d  MOVZX EDI,byte ptr [EAX + 0x1]
007fd5a1  ADD EDI,EBX
007fd5a3  SAR EDI,0x1
007fd5a5  MOV word ptr [EDX + 0x2],DI
007fd5a9  MOVZX EBX,byte ptr [ECX + 0x2]
007fd5ad  MOVZX EDI,byte ptr [EAX + 0x2]
007fd5b1  ADD EDI,EBX
007fd5b3  SAR EDI,0x1
007fd5b5  MOV word ptr [EDX + 0x4],DI
007fd5b9  MOVZX EBX,byte ptr [ECX + 0x3]
007fd5bd  MOVZX EDI,byte ptr [EAX + 0x3]
007fd5c1  ADD EDI,EBX
007fd5c3  SAR EDI,0x1
007fd5c5  MOV word ptr [EDX + 0x6],DI
007fd5c9  MOVZX EBX,byte ptr [ECX + 0x4]
007fd5cd  MOVZX EDI,byte ptr [EAX + 0x4]
007fd5d1  ADD EDI,EBX
007fd5d3  SAR EDI,0x1
007fd5d5  MOV word ptr [EDX + 0x8],DI
007fd5d9  MOVZX EBX,byte ptr [ECX + 0x5]
007fd5dd  MOVZX EDI,byte ptr [EAX + 0x5]
007fd5e1  ADD EDI,EBX
007fd5e3  SAR EDI,0x1
007fd5e5  MOV word ptr [EDX + 0xa],DI
007fd5e9  MOVZX EBX,byte ptr [ECX + 0x6]
007fd5ed  MOVZX EDI,byte ptr [EAX + 0x6]
007fd5f1  ADD EDI,EBX
007fd5f3  SAR EDI,0x1
007fd5f5  MOV word ptr [EDX + 0xc],DI
007fd5f9  MOVZX EDI,byte ptr [EAX + 0x7]
007fd5fd  MOVZX EBX,byte ptr [ECX + 0x7]
007fd601  ADD EAX,dword ptr [EBP + 0x14]
007fd604  ADD ECX,dword ptr [EBP + 0x14]
007fd607  ADD EDI,EBX
007fd609  SAR EDI,0x1
007fd60b  MOV word ptr [EDX + 0xe],DI
007fd60f  ADD EDX,0x10
007fd612  DEC ESI
007fd613  JNZ 0x007fd58c
007fd619  POP EDI
007fd61a  POP ESI
007fd61b  POP EBX
007fd61c  POP EBP
007fd61d  RET
