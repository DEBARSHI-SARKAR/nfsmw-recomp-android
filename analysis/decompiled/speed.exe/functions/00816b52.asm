00816b52  PUSH EBP
00816b53  MOV EBP,ESP
00816b55  MOV ECX,dword ptr [EBP + 0x14]
00816b58  MOV EDX,dword ptr [EBP + 0x10]
00816b5b  PUSH EBX
00816b5c  PUSH ESI
00816b5d  PUSH EDI
00816b5e  MOV EDI,dword ptr [EBP + 0x8]
00816b61  PUSH 0x8
00816b63  LEA EAX,[EDI + 0x4]
00816b66  POP ESI
00816b67  MOVZX BX,byte ptr [EDX]
00816b6b  ADD BX,word ptr [ECX]
00816b6e  ADD ECX,0x10
00816b71  MOV word ptr [EAX + -0x4],BX
00816b75  MOVZX BX,byte ptr [EDX + 0x1]
00816b7a  ADD BX,word ptr [ECX + -0xe]
00816b7e  MOV word ptr [EAX + -0x2],BX
00816b82  MOVZX BX,byte ptr [EDX + 0x2]
00816b87  ADD BX,word ptr [ECX + -0xc]
00816b8b  MOV word ptr [EAX],BX
00816b8e  MOVZX BX,byte ptr [EDX + 0x3]
00816b93  ADD BX,word ptr [ECX + -0xa]
00816b97  ADD EAX,0x10
00816b9a  MOV word ptr [EAX + -0xe],BX
00816b9e  MOVZX BX,byte ptr [EDX + 0x4]
00816ba3  ADD BX,word ptr [ECX + -0x8]
00816ba7  MOV word ptr [EAX + -0xc],BX
00816bab  MOVZX BX,byte ptr [EDX + 0x5]
00816bb0  ADD BX,word ptr [ECX + -0x6]
00816bb4  MOV word ptr [EAX + -0xa],BX
00816bb8  MOVZX BX,byte ptr [EDX + 0x6]
00816bbd  ADD BX,word ptr [ECX + -0x4]
00816bc1  MOV word ptr [EAX + -0x8],BX
00816bc5  MOVZX BX,byte ptr [EDX + 0x7]
00816bca  ADD BX,word ptr [ECX + -0x2]
00816bce  ADD EDX,dword ptr [EBP + 0x18]
00816bd1  DEC ESI
00816bd2  MOV word ptr [EAX + -0x6],BX
00816bd6  JNZ 0x00816b67
00816bd8  PUSH 0x8
00816bda  PUSH dword ptr [EBP + 0x18]
00816bdd  PUSH EDI
00816bde  PUSH dword ptr [EBP + 0xc]
00816be1  CALL 0x008169be
00816be6  ADD ESP,0x10
00816be9  POP EDI
00816bea  POP ESI
00816beb  POP EBX
00816bec  POP EBP
00816bed  RET
