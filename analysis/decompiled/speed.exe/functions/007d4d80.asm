007d4d80  PUSH EBP
007d4d81  MOV EBP,ESP
007d4d83  PUSH -0x1
007d4d85  PUSH 0x8bd1b8
007d4d8a  PUSH 0x7cd5e4
007d4d8f  MOV EAX,FS:[0x0]
007d4d95  PUSH EAX
007d4d96  MOV dword ptr FS:[0x0],ESP
007d4d9d  ADD ESP,-0x20
007d4da0  PUSH EBX
007d4da1  PUSH ESI
007d4da2  PUSH EDI
007d4da3  MOV EAX,dword ptr [EBP + 0xc]
007d4da6  MOV dword ptr [EBP + -0x20],EAX
007d4da9  CMP dword ptr [EBP + 0x8],0x0
007d4dad  JNZ 0x007d4dc0
007d4daf  MOV ECX,dword ptr [EBP + 0xc]
007d4db2  PUSH ECX
007d4db3  CALL 0x007d4b00
007d4db8  ADD ESP,0x4
007d4dbb  JMP 0x007d5018
007d4dc0  CMP dword ptr [EBP + 0xc],0x0
007d4dc4  JNZ 0x007d4dd9
007d4dc6  MOV EDX,dword ptr [EBP + 0x8]
007d4dc9  PUSH EDX
007d4dca  CALL 0x007d1050
007d4dcf  ADD ESP,0x4
007d4dd2  XOR EAX,EAX
007d4dd4  JMP 0x007d5018
007d4dd9  CMP dword ptr [0x009c531c],0x3
007d4de0  JNZ 0x007d4fba
007d4de6  MOV dword ptr [EBP + -0x1c],0x0
007d4ded  CMP dword ptr [EBP + 0xc],-0x20
007d4df1  JA 0x007d4f8d
007d4df7  PUSH 0x4
007d4df9  CALL 0x007d0fd0
007d4dfe  ADD ESP,0x4
007d4e01  MOV dword ptr [EBP + -0x4],0x0
007d4e08  MOV EAX,dword ptr [EBP + 0x8]
007d4e0b  PUSH EAX
007d4e0c  CALL 0x007d5200
007d4e11  ADD ESP,0x4
007d4e14  MOV dword ptr [EBP + -0x28],EAX
007d4e17  CMP dword ptr [EBP + -0x28],0x0
007d4e1b  JZ 0x007d4f3b
007d4e21  MOV ECX,dword ptr [EBP + 0xc]
007d4e24  CMP ECX,dword ptr [0x009c52f0]
007d4e2a  JA 0x007d4eba
007d4e30  MOV EDX,dword ptr [EBP + 0xc]
007d4e33  PUSH EDX
007d4e34  MOV EAX,dword ptr [EBP + 0x8]
007d4e37  PUSH EAX
007d4e38  MOV ECX,dword ptr [EBP + -0x28]
007d4e3b  PUSH ECX
007d4e3c  CALL 0x007d60a0
007d4e41  ADD ESP,0xc
007d4e44  TEST EAX,EAX
007d4e46  JZ 0x007d4e50
007d4e48  MOV EDX,dword ptr [EBP + 0x8]
007d4e4b  MOV dword ptr [EBP + -0x1c],EDX
007d4e4e  JMP 0x007d4eba
007d4e50  MOV EAX,dword ptr [EBP + 0xc]
007d4e53  PUSH EAX
007d4e54  CALL 0x007d5880
007d4e59  ADD ESP,0x4
007d4e5c  MOV dword ptr [EBP + -0x1c],EAX
007d4e5f  CMP dword ptr [EBP + -0x1c],0x0
007d4e63  JZ 0x007d4eba
007d4e65  MOV ECX,dword ptr [EBP + 0x8]
007d4e68  MOV EDX,dword ptr [ECX + -0x4]
007d4e6b  SUB EDX,0x1
007d4e6e  MOV dword ptr [EBP + -0x24],EDX
007d4e71  MOV EAX,dword ptr [EBP + -0x24]
007d4e74  CMP EAX,dword ptr [EBP + 0xc]
007d4e77  JNC 0x007d4e81
007d4e79  MOV ECX,dword ptr [EBP + -0x24]
007d4e7c  MOV dword ptr [EBP + -0x2c],ECX
007d4e7f  JMP 0x007d4e87
007d4e81  MOV EDX,dword ptr [EBP + 0xc]
007d4e84  MOV dword ptr [EBP + -0x2c],EDX
007d4e87  MOV EAX,dword ptr [EBP + -0x2c]
007d4e8a  PUSH EAX
007d4e8b  MOV ECX,dword ptr [EBP + 0x8]
007d4e8e  PUSH ECX
007d4e8f  MOV EDX,dword ptr [EBP + -0x1c]
007d4e92  PUSH EDX
007d4e93  CALL 0x007d6d30
007d4e98  ADD ESP,0xc
007d4e9b  MOV EAX,dword ptr [EBP + 0x8]
007d4e9e  PUSH EAX
007d4e9f  CALL 0x007d5200
007d4ea4  ADD ESP,0x4
007d4ea7  MOV dword ptr [EBP + -0x28],EAX
007d4eaa  MOV ECX,dword ptr [EBP + 0x8]
007d4ead  PUSH ECX
007d4eae  MOV EDX,dword ptr [EBP + -0x28]
007d4eb1  PUSH EDX
007d4eb2  CALL 0x007d52c0
007d4eb7  ADD ESP,0x8
007d4eba  CMP dword ptr [EBP + -0x1c],0x0
007d4ebe  JNZ 0x007d4f3b
007d4ec0  CMP dword ptr [EBP + 0xc],0x0
007d4ec4  JNZ 0x007d4ecd
007d4ec6  MOV dword ptr [EBP + 0xc],0x1
007d4ecd  MOV EAX,dword ptr [EBP + 0xc]
007d4ed0  ADD EAX,0xf
007d4ed3  AND EAX,0xfffffff0
007d4ed6  MOV dword ptr [EBP + 0xc],EAX
007d4ed9  MOV ECX,dword ptr [EBP + 0xc]
007d4edc  PUSH ECX
007d4edd  PUSH 0x0
007d4edf  MOV EDX,dword ptr [0x009c5318]
007d4ee5  PUSH EDX
007d4ee6  CALL dword ptr [0x00890238]
007d4eec  MOV dword ptr [EBP + -0x1c],EAX
007d4eef  CMP dword ptr [EBP + -0x1c],0x0
007d4ef3  JZ 0x007d4f3b
007d4ef5  MOV EAX,dword ptr [EBP + 0x8]
007d4ef8  MOV ECX,dword ptr [EAX + -0x4]
007d4efb  SUB ECX,0x1
007d4efe  MOV dword ptr [EBP + -0x24],ECX
007d4f01  MOV EDX,dword ptr [EBP + -0x24]
007d4f04  CMP EDX,dword ptr [EBP + 0xc]
007d4f07  JNC 0x007d4f11
007d4f09  MOV EAX,dword ptr [EBP + -0x24]
007d4f0c  MOV dword ptr [EBP + -0x30],EAX
007d4f0f  JMP 0x007d4f17
007d4f11  MOV ECX,dword ptr [EBP + 0xc]
007d4f14  MOV dword ptr [EBP + -0x30],ECX
007d4f17  MOV EDX,dword ptr [EBP + -0x30]
007d4f1a  PUSH EDX
007d4f1b  MOV EAX,dword ptr [EBP + 0x8]
007d4f1e  PUSH EAX
007d4f1f  MOV ECX,dword ptr [EBP + -0x1c]
007d4f22  PUSH ECX
007d4f23  CALL 0x007d6d30
007d4f28  ADD ESP,0xc
007d4f2b  MOV EDX,dword ptr [EBP + 0x8]
007d4f2e  PUSH EDX
007d4f2f  MOV EAX,dword ptr [EBP + -0x28]
007d4f32  PUSH EAX
007d4f33  CALL 0x007d52c0
007d4f38  ADD ESP,0x8
007d4f3b  MOV dword ptr [EBP + -0x4],0xffffffff
007d4f42  CALL 0x007d4f49
007d4f47  JMP 0x007d4f54
007d4fba  MOV dword ptr [EBP + -0x1c],0x0
007d4fc1  CMP dword ptr [EBP + 0xc],-0x20
007d4fc5  JA 0x007d4fee
007d4fc7  CMP dword ptr [EBP + 0xc],0x0
007d4fcb  JNZ 0x007d4fd4
007d4fcd  MOV dword ptr [EBP + 0xc],0x1
007d4fd4  MOV EAX,dword ptr [EBP + 0xc]
007d4fd7  PUSH EAX
007d4fd8  MOV ECX,dword ptr [EBP + 0x8]
007d4fdb  PUSH ECX
007d4fdc  PUSH 0x0
007d4fde  MOV EDX,dword ptr [0x009c5318]
007d4fe4  PUSH EDX
007d4fe5  CALL dword ptr [0x0089023c]
007d4feb  MOV dword ptr [EBP + -0x1c],EAX
007d4fee  CMP dword ptr [EBP + -0x1c],0x0
007d4ff2  JNZ 0x007d4ffd
007d4ff4  CMP dword ptr [0x009bad8c],0x0
007d4ffb  JNZ 0x007d5002
007d4ffd  MOV EAX,dword ptr [EBP + -0x1c]
007d5000  JMP 0x007d5018
007d5002  MOV EAX,dword ptr [EBP + 0xc]
007d5005  PUSH EAX
007d5006  CALL 0x007d4a70
007d500b  ADD ESP,0x4
007d500e  TEST EAX,EAX
007d5010  JNZ 0x007d5016
007d5012  XOR EAX,EAX
007d5014  JMP 0x007d5018
007d5016  JMP 0x007d4fba
