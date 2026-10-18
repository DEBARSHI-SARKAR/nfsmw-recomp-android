007cc800  PUSH EBP
007cc801  MOV EBP,ESP
007cc803  SUB ESP,0x18
007cc806  MOV dword ptr [EBP + -0x8],0x0
007cc80d  MOV dword ptr [EBP + -0x18],0x0
007cc814  CMP dword ptr [0x009bac00],0x0
007cc81b  JNZ 0x007cc84d
007cc81d  CALL dword ptr [0x008901e8]
007cc823  MOV dword ptr [EBP + -0x8],EAX
007cc826  CMP dword ptr [EBP + -0x8],0x0
007cc82a  JZ 0x007cc838
007cc82c  MOV dword ptr [0x009bac00],0x1
007cc836  JMP 0x007cc84d
007cc838  CALL dword ptr [0x00890188]
007cc83e  CMP EAX,0x78
007cc841  JNZ 0x007cc84d
007cc843  MOV dword ptr [0x009bac00],0x2
007cc84d  CMP dword ptr [0x009bac00],0x1
007cc854  JNZ 0x007cc94d
007cc85a  CMP dword ptr [EBP + -0x8],0x0
007cc85e  JNZ 0x007cc876
007cc860  CALL dword ptr [0x008901e8]
007cc866  MOV dword ptr [EBP + -0x8],EAX
007cc869  CMP dword ptr [EBP + -0x8],0x0
007cc86d  JNZ 0x007cc876
007cc86f  XOR EAX,EAX
007cc871  JMP 0x007cca0d
007cc876  MOV EAX,dword ptr [EBP + -0x8]
007cc879  MOV dword ptr [EBP + -0xc],EAX
007cc87c  MOV ECX,dword ptr [EBP + -0xc]
007cc87f  MOVZX EDX,word ptr [ECX]
007cc882  TEST EDX,EDX
007cc884  JZ 0x007cc8a4
007cc886  MOV EAX,dword ptr [EBP + -0xc]
007cc889  ADD EAX,0x2
007cc88c  MOV dword ptr [EBP + -0xc],EAX
007cc88f  MOV ECX,dword ptr [EBP + -0xc]
007cc892  MOVZX EDX,word ptr [ECX]
007cc895  TEST EDX,EDX
007cc897  JNZ 0x007cc8a2
007cc899  MOV EAX,dword ptr [EBP + -0xc]
007cc89c  ADD EAX,0x2
007cc89f  MOV dword ptr [EBP + -0xc],EAX
007cc8a2  JMP 0x007cc87c
007cc8a4  MOV ECX,dword ptr [EBP + -0xc]
007cc8a7  SUB ECX,dword ptr [EBP + -0x8]
007cc8aa  SAR ECX,0x1
007cc8ac  ADD ECX,0x1
007cc8af  MOV dword ptr [EBP + -0x14],ECX
007cc8b2  PUSH 0x0
007cc8b4  PUSH 0x0
007cc8b6  PUSH 0x0
007cc8b8  PUSH 0x0
007cc8ba  MOV EDX,dword ptr [EBP + -0x14]
007cc8bd  PUSH EDX
007cc8be  MOV EAX,dword ptr [EBP + -0x8]
007cc8c1  PUSH EAX
007cc8c2  PUSH 0x0
007cc8c4  PUSH 0x0
007cc8c6  CALL dword ptr [0x008901e4]
007cc8cc  MOV dword ptr [EBP + -0x4],EAX
007cc8cf  CMP dword ptr [EBP + -0x4],0x0
007cc8d3  JZ 0x007cc8f3
007cc8d5  PUSH 0x61
007cc8d7  PUSH 0x8b8cf4
007cc8dc  PUSH 0x2
007cc8de  MOV ECX,dword ptr [EBP + -0x4]
007cc8e1  PUSH ECX
007cc8e2  CALL 0x007c6700
007cc8e7  ADD ESP,0x10
007cc8ea  MOV dword ptr [EBP + -0x18],EAX
007cc8ed  CMP dword ptr [EBP + -0x18],0x0
007cc8f1  JNZ 0x007cc904
007cc8f3  MOV EDX,dword ptr [EBP + -0x8]
007cc8f6  PUSH EDX
007cc8f7  CALL dword ptr [0x008901e0]
007cc8fd  XOR EAX,EAX
007cc8ff  JMP 0x007cca0d
007cc904  PUSH 0x0
007cc906  PUSH 0x0
007cc908  MOV EAX,dword ptr [EBP + -0x4]
007cc90b  PUSH EAX
007cc90c  MOV ECX,dword ptr [EBP + -0x18]
007cc90f  PUSH ECX
007cc910  MOV EDX,dword ptr [EBP + -0x14]
007cc913  PUSH EDX
007cc914  MOV EAX,dword ptr [EBP + -0x8]
007cc917  PUSH EAX
007cc918  PUSH 0x0
007cc91a  PUSH 0x0
007cc91c  CALL dword ptr [0x008901e4]
007cc922  TEST EAX,EAX
007cc924  JNZ 0x007cc93b
007cc926  PUSH 0x2
007cc928  MOV ECX,dword ptr [EBP + -0x18]
007cc92b  PUSH ECX
007cc92c  CALL 0x007c7290
007cc931  ADD ESP,0x8
007cc934  MOV dword ptr [EBP + -0x18],0x0
007cc93b  MOV EDX,dword ptr [EBP + -0x8]
007cc93e  PUSH EDX
007cc93f  CALL dword ptr [0x008901e0]
007cc945  MOV EAX,dword ptr [EBP + -0x18]
007cc948  JMP 0x007cca0d
007cc94d  CMP dword ptr [0x009bac00],0x2
007cc954  JZ 0x007cc963
007cc956  CMP dword ptr [0x009bac00],0x0
007cc95d  JNZ 0x007cca0b
007cc963  CMP dword ptr [EBP + -0x18],0x0
007cc967  JNZ 0x007cc97f
007cc969  CALL dword ptr [0x008901dc]
007cc96f  MOV dword ptr [EBP + -0x18],EAX
007cc972  CMP dword ptr [EBP + -0x18],0x0
007cc976  JNZ 0x007cc97f
007cc978  XOR EAX,EAX
007cc97a  JMP 0x007cca0d
007cc97f  MOV EAX,dword ptr [EBP + -0x18]
007cc982  MOV dword ptr [EBP + -0x10],EAX
007cc985  MOV ECX,dword ptr [EBP + -0x10]
007cc988  MOVSX EDX,byte ptr [ECX]
007cc98b  TEST EDX,EDX
007cc98d  JZ 0x007cc9ad
007cc98f  MOV EAX,dword ptr [EBP + -0x10]
007cc992  ADD EAX,0x1
007cc995  MOV dword ptr [EBP + -0x10],EAX
007cc998  MOV ECX,dword ptr [EBP + -0x10]
007cc99b  MOVSX EDX,byte ptr [ECX]
007cc99e  TEST EDX,EDX
007cc9a0  JNZ 0x007cc9ab
007cc9a2  MOV EAX,dword ptr [EBP + -0x10]
007cc9a5  ADD EAX,0x1
007cc9a8  MOV dword ptr [EBP + -0x10],EAX
007cc9ab  JMP 0x007cc985
007cc9ad  MOV ECX,dword ptr [EBP + -0x10]
007cc9b0  SUB ECX,dword ptr [EBP + -0x18]
007cc9b3  ADD ECX,0x1
007cc9b6  MOV dword ptr [EBP + -0x4],ECX
007cc9b9  PUSH 0x8c
007cc9be  PUSH 0x8b8cf4
007cc9c3  PUSH 0x2
007cc9c5  MOV EDX,dword ptr [EBP + -0x4]
007cc9c8  PUSH EDX
007cc9c9  CALL 0x007c6700
007cc9ce  ADD ESP,0x10
007cc9d1  MOV dword ptr [EBP + -0x10],EAX
007cc9d4  CMP dword ptr [EBP + -0x10],0x0
007cc9d8  JNZ 0x007cc9e8
007cc9da  MOV EAX,dword ptr [EBP + -0x18]
007cc9dd  PUSH EAX
007cc9de  CALL dword ptr [0x008901d8]
007cc9e4  XOR EAX,EAX
007cc9e6  JMP 0x007cca0d
007cc9e8  MOV ECX,dword ptr [EBP + -0x4]
007cc9eb  PUSH ECX
007cc9ec  MOV EDX,dword ptr [EBP + -0x18]
007cc9ef  PUSH EDX
007cc9f0  MOV EAX,dword ptr [EBP + -0x10]
007cc9f3  PUSH EAX
007cc9f4  CALL 0x007d6d30
007cc9f9  ADD ESP,0xc
007cc9fc  MOV ECX,dword ptr [EBP + -0x18]
007cc9ff  PUSH ECX
007cca00  CALL dword ptr [0x008901d8]
007cca06  MOV EAX,dword ptr [EBP + -0x10]
007cca09  JMP 0x007cca0d
007cca0b  XOR EAX,EAX
007cca0d  MOV ESP,EBP
007cca0f  POP EBP
007cca10  RET
