007e1f10  PUSH EBP
007e1f11  MOV EBP,ESP
007e1f13  PUSH ECX
007e1f14  MOV EAX,dword ptr [EBP + 0x8]
007e1f17  MOVSX ECX,byte ptr [EAX]
007e1f1a  TEST ECX,ECX
007e1f1c  JZ 0x007e1f89
007e1f1e  MOV EDX,dword ptr [EBP + 0x8]
007e1f21  MOVSX EAX,byte ptr [EDX]
007e1f24  CMP EAX,0x30
007e1f27  JL 0x007e1f4d
007e1f29  MOV ECX,dword ptr [EBP + 0x8]
007e1f2c  MOVSX EDX,byte ptr [ECX]
007e1f2f  CMP EDX,0x39
007e1f32  JG 0x007e1f4d
007e1f34  MOV EAX,dword ptr [EBP + 0x8]
007e1f37  MOVSX ECX,byte ptr [EAX]
007e1f3a  SUB ECX,0x30
007e1f3d  MOV EDX,dword ptr [EBP + 0x8]
007e1f40  MOV byte ptr [EDX],CL
007e1f42  MOV EAX,dword ptr [EBP + 0x8]
007e1f45  ADD EAX,0x1
007e1f48  MOV dword ptr [EBP + 0x8],EAX
007e1f4b  JMP 0x007e1f87
007e1f4d  MOV ECX,dword ptr [EBP + 0x8]
007e1f50  MOVSX EDX,byte ptr [ECX]
007e1f53  CMP EDX,0x3b
007e1f56  JNZ 0x007e1f7e
007e1f58  MOV EAX,dword ptr [EBP + 0x8]
007e1f5b  MOV dword ptr [EBP + -0x4],EAX
007e1f5e  MOV ECX,dword ptr [EBP + -0x4]
007e1f61  MOV EDX,dword ptr [EBP + -0x4]
007e1f64  MOV AL,byte ptr [EDX + 0x1]
007e1f67  MOV byte ptr [ECX],AL
007e1f69  MOV ECX,dword ptr [EBP + -0x4]
007e1f6c  ADD ECX,0x1
007e1f6f  MOV dword ptr [EBP + -0x4],ECX
007e1f72  MOV EDX,dword ptr [EBP + -0x4]
007e1f75  MOVSX EAX,byte ptr [EDX]
007e1f78  TEST EAX,EAX
007e1f7a  JNZ 0x007e1f5e
007e1f7c  JMP 0x007e1f87
007e1f7e  MOV ECX,dword ptr [EBP + 0x8]
007e1f81  ADD ECX,0x1
007e1f84  MOV dword ptr [EBP + 0x8],ECX
007e1f87  JMP 0x007e1f14
007e1f89  MOV ESP,EBP
007e1f8b  POP EBP
007e1f8c  RET
