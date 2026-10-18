007e5d50  PUSH EBP
007e5d51  MOV EBP,ESP
007e5d53  SUB ESP,0x14
007e5d56  MOV EAX,[0x00906980]
007e5d5b  MOV dword ptr [EBP + -0x8],EAX
007e5d5e  MOV word ptr [EBP + -0x4],0x404e
007e5d64  MOV EAX,dword ptr [EBP + 0x10]
007e5d67  MOV dword ptr [EAX],0x0
007e5d6d  MOV ECX,dword ptr [EBP + 0x10]
007e5d70  MOV dword ptr [ECX + 0x4],0x0
007e5d77  MOV EDX,dword ptr [EBP + 0x10]
007e5d7a  MOV dword ptr [EDX + 0x8],0x0
007e5d81  JMP 0x007e5d95
007e5d83  MOV EAX,dword ptr [EBP + 0xc]
007e5d86  SUB EAX,0x1
007e5d89  MOV dword ptr [EBP + 0xc],EAX
007e5d8c  MOV ECX,dword ptr [EBP + 0x8]
007e5d8f  ADD ECX,0x1
007e5d92  MOV dword ptr [EBP + 0x8],ECX
007e5d95  CMP dword ptr [EBP + 0xc],0x0
007e5d99  JBE 0x007e5e0f
007e5d9b  MOV EDX,dword ptr [EBP + 0x10]
007e5d9e  MOV EAX,dword ptr [EDX]
007e5da0  MOV dword ptr [EBP + -0x14],EAX
007e5da3  MOV ECX,dword ptr [EDX + 0x4]
007e5da6  MOV dword ptr [EBP + -0x10],ECX
007e5da9  MOV EDX,dword ptr [EDX + 0x8]
007e5dac  MOV dword ptr [EBP + -0xc],EDX
007e5daf  MOV EAX,dword ptr [EBP + 0x10]
007e5db2  PUSH EAX
007e5db3  CALL 0x007e5c80
007e5db8  ADD ESP,0x4
007e5dbb  MOV ECX,dword ptr [EBP + 0x10]
007e5dbe  PUSH ECX
007e5dbf  CALL 0x007e5c80
007e5dc4  ADD ESP,0x4
007e5dc7  LEA EDX,[EBP + -0x14]
007e5dca  PUSH EDX
007e5dcb  MOV EAX,dword ptr [EBP + 0x10]
007e5dce  PUSH EAX
007e5dcf  CALL 0x007e5bd0
007e5dd4  ADD ESP,0x8
007e5dd7  MOV ECX,dword ptr [EBP + 0x10]
007e5dda  PUSH ECX
007e5ddb  CALL 0x007e5c80
007e5de0  ADD ESP,0x4
007e5de3  MOV EDX,dword ptr [EBP + 0x8]
007e5de6  MOVSX EAX,byte ptr [EDX]
007e5de9  MOV dword ptr [EBP + -0x14],EAX
007e5dec  MOV dword ptr [EBP + -0x10],0x0
007e5df3  MOV dword ptr [EBP + -0xc],0x0
007e5dfa  LEA ECX,[EBP + -0x14]
007e5dfd  PUSH ECX
007e5dfe  MOV EDX,dword ptr [EBP + 0x10]
007e5e01  PUSH EDX
007e5e02  CALL 0x007e5bd0
007e5e07  ADD ESP,0x8
007e5e0a  JMP 0x007e5d83
007e5e0f  MOV EAX,dword ptr [EBP + 0x10]
007e5e12  CMP dword ptr [EAX + 0x8],0x0
007e5e16  JNZ 0x007e5e5a
007e5e18  MOV ECX,dword ptr [EBP + 0x10]
007e5e1b  MOV EDX,dword ptr [ECX + 0x4]
007e5e1e  SHR EDX,0x10
007e5e21  MOV EAX,dword ptr [EBP + 0x10]
007e5e24  MOV dword ptr [EAX + 0x8],EDX
007e5e27  MOV ECX,dword ptr [EBP + 0x10]
007e5e2a  MOV EDX,dword ptr [ECX + 0x4]
007e5e2d  SHL EDX,0x10
007e5e30  MOV EAX,dword ptr [EBP + 0x10]
007e5e33  MOV ECX,dword ptr [EAX]
007e5e35  SHR ECX,0x10
007e5e38  OR EDX,ECX
007e5e3a  MOV EAX,dword ptr [EBP + 0x10]
007e5e3d  MOV dword ptr [EAX + 0x4],EDX
007e5e40  MOV ECX,dword ptr [EBP + 0x10]
007e5e43  MOV EDX,dword ptr [ECX]
007e5e45  SHL EDX,0x10
007e5e48  MOV EAX,dword ptr [EBP + 0x10]
007e5e4b  MOV dword ptr [EAX],EDX
007e5e4d  MOVZX ECX,word ptr [EBP + -0x4]
007e5e51  SUB ECX,0x10
007e5e54  MOV word ptr [EBP + -0x4],CX
007e5e58  JMP 0x007e5e0f
007e5e5a  MOV EDX,dword ptr [EBP + 0x10]
007e5e5d  MOV EAX,dword ptr [EDX + 0x8]
007e5e60  AND EAX,0x8000
007e5e65  JNZ 0x007e5e81
007e5e67  MOV ECX,dword ptr [EBP + 0x10]
007e5e6a  PUSH ECX
007e5e6b  CALL 0x007e5c80
007e5e70  ADD ESP,0x4
007e5e73  MOV DX,word ptr [EBP + -0x4]
007e5e77  SUB DX,0x1
007e5e7b  MOV word ptr [EBP + -0x4],DX
007e5e7f  JMP 0x007e5e5a
007e5e81  MOV EAX,dword ptr [EBP + 0x10]
007e5e84  MOV CX,word ptr [EBP + -0x4]
007e5e88  MOV word ptr [EAX + 0xa],CX
007e5e8c  MOV ECX,dword ptr [EBP + -0x8]
007e5e8f  CALL 0x007d6cb0
007e5e94  MOV ESP,EBP
007e5e96  POP EBP
007e5e97  RET
