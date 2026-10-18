007ccf60  PUSH EBP
007ccf61  MOV EBP,ESP
007ccf63  SUB ESP,0x8
007ccf66  CALL 0x007d0d60
007ccf6b  TEST EAX,EAX
007ccf6d  JNZ 0x007ccf7b
007ccf6f  CALL 0x007cd0b0
007ccf74  XOR EAX,EAX
007ccf76  JMP 0x007cd0a2
007ccf7b  PUSH 0x8b8d5c
007ccf80  CALL dword ptr [0x0089008c]
007ccf86  MOV dword ptr [EBP + -0x4],EAX
007ccf89  CMP dword ptr [EBP + -0x4],0x0
007ccf8d  JZ 0x007cd018
007ccf93  PUSH 0x8b8d50
007ccf98  MOV EAX,dword ptr [EBP + -0x4]
007ccf9b  PUSH EAX
007ccf9c  CALL dword ptr [0x00890094]
007ccfa2  MOV [0x009bac04],EAX
007ccfa7  PUSH 0x8b8d44
007ccfac  MOV ECX,dword ptr [EBP + -0x4]
007ccfaf  PUSH ECX
007ccfb0  CALL dword ptr [0x00890094]
007ccfb6  MOV [0x009bac08],EAX
007ccfbb  PUSH 0x8b8d38
007ccfc0  MOV EDX,dword ptr [EBP + -0x4]
007ccfc3  PUSH EDX
007ccfc4  CALL dword ptr [0x00890094]
007ccfca  MOV [0x009bac0c],EAX
007ccfcf  PUSH 0x8b8d30
007ccfd4  MOV EAX,dword ptr [EBP + -0x4]
007ccfd7  PUSH EAX
007ccfd8  CALL dword ptr [0x00890094]
007ccfde  MOV [0x009bac10],EAX
007ccfe3  CMP dword ptr [0x009bac08],0x0
007ccfea  JNZ 0x007cd018
007ccfec  MOV dword ptr [0x009bac04],0x7ccf50
007ccff6  MOV ECX,dword ptr [0x00890210]
007ccffc  MOV dword ptr [0x009bac08],ECX
007cd002  MOV EDX,dword ptr [0x0089020c]
007cd008  MOV dword ptr [0x009bac0c],EDX
007cd00e  MOV EAX,[0x00890208]
007cd013  MOV [0x009bac10],EAX
007cd018  PUSH 0x7cd1a0
007cd01d  CALL dword ptr [0x009bac04]
007cd023  MOV [0x0090682c],EAX
007cd028  CMP dword ptr [0x0090682c],-0x1
007cd02f  JNZ 0x007cd03a
007cd031  CALL 0x007cd0b0
007cd036  XOR EAX,EAX
007cd038  JMP 0x007cd0a2
007cd03a  PUSH 0xa3
007cd03f  PUSH 0x8b8d24
007cd044  PUSH 0x2
007cd046  PUSH 0x8c
007cd04b  PUSH 0x1
007cd04d  CALL 0x007c6b60
007cd052  ADD ESP,0x14
007cd055  MOV dword ptr [EBP + -0x8],EAX
007cd058  CMP dword ptr [EBP + -0x8],0x0
007cd05c  JZ 0x007cd073
007cd05e  MOV ECX,dword ptr [EBP + -0x8]
007cd061  PUSH ECX
007cd062  MOV EDX,dword ptr [0x0090682c]
007cd068  PUSH EDX
007cd069  CALL dword ptr [0x009bac0c]
007cd06f  TEST EAX,EAX
007cd071  JNZ 0x007cd07c
007cd073  CALL 0x007cd0b0
007cd078  XOR EAX,EAX
007cd07a  JMP 0x007cd0a2
007cd07c  MOV EAX,dword ptr [EBP + -0x8]
007cd07f  PUSH EAX
007cd080  CALL 0x007cd0e0
007cd085  ADD ESP,0x4
007cd088  CALL dword ptr [0x00890204]
007cd08e  MOV ECX,dword ptr [EBP + -0x8]
007cd091  MOV dword ptr [ECX],EAX
007cd093  MOV EDX,dword ptr [EBP + -0x8]
007cd096  MOV dword ptr [EDX + 0x4],0xffffffff
007cd09d  MOV EAX,0x1
007cd0a2  MOV ESP,EBP
007cd0a4  POP EBP
007cd0a5  RET
