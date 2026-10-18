007e5980  PUSH EBP
007e5981  MOV EBP,ESP
007e5983  SUB ESP,0x10
007e5986  MOV EAX,dword ptr [EBP + 0xc]
007e5989  MOV dword ptr [EBP + -0x8],EAX
007e598c  MOV ECX,dword ptr [EBP + 0x10]
007e598f  MOV dword ptr [EBP + -0x4],ECX
007e5992  MOV EDX,dword ptr [EBP + 0x8]
007e5995  PUSH EDX
007e5996  CALL 0x007e44b0
007e599b  ADD ESP,0x4
007e599e  MOV dword ptr [EBP + -0xc],EAX
007e59a1  CMP dword ptr [EBP + -0xc],-0x1
007e59a5  JNZ 0x007e59bd
007e59a7  CALL 0x007cb270
007e59ac  MOV dword ptr [EAX],0x9
007e59b2  OR EAX,0xffffffff
007e59b5  OR EDX,0xffffffff
007e59b8  JMP 0x007e5a3d
007e59bd  MOV EAX,dword ptr [EBP + 0x14]
007e59c0  PUSH EAX
007e59c1  LEA ECX,[EBP + -0x4]
007e59c4  PUSH ECX
007e59c5  MOV EDX,dword ptr [EBP + -0x8]
007e59c8  PUSH EDX
007e59c9  MOV EAX,dword ptr [EBP + -0xc]
007e59cc  PUSH EAX
007e59cd  CALL dword ptr [0x0089029c]
007e59d3  MOV dword ptr [EBP + -0x8],EAX
007e59d6  CMP dword ptr [EBP + -0x8],-0x1
007e59da  JNZ 0x007e59ff
007e59dc  CALL dword ptr [0x00890188]
007e59e2  MOV dword ptr [EBP + -0x10],EAX
007e59e5  CMP dword ptr [EBP + -0x10],0x0
007e59e9  JZ 0x007e59ff
007e59eb  MOV ECX,dword ptr [EBP + -0x10]
007e59ee  PUSH ECX
007e59ef  CALL 0x007cb1d0
007e59f4  ADD ESP,0x4
007e59f7  OR EAX,0xffffffff
007e59fa  OR EDX,0xffffffff
007e59fd  JMP 0x007e5a3d
007e59ff  MOV EDX,dword ptr [EBP + 0x8]
007e5a02  SAR EDX,0x5
007e5a05  MOV EAX,dword ptr [EBP + 0x8]
007e5a08  AND EAX,0x1f
007e5a0b  IMUL EAX,EAX,0x24
007e5a0e  MOV ECX,dword ptr [EDX*0x4 + 0x9c5340]
007e5a15  MOVSX EDX,byte ptr [ECX + EAX*0x1 + 0x4]
007e5a1a  AND EDX,0xfffffffd
007e5a1d  MOV EAX,dword ptr [EBP + 0x8]
007e5a20  SAR EAX,0x5
007e5a23  MOV ECX,dword ptr [EBP + 0x8]
007e5a26  AND ECX,0x1f
007e5a29  IMUL ECX,ECX,0x24
007e5a2c  MOV EAX,dword ptr [EAX*0x4 + 0x9c5340]
007e5a33  MOV byte ptr [EAX + ECX*0x1 + 0x4],DL
007e5a37  MOV EAX,dword ptr [EBP + -0x8]
007e5a3a  MOV EDX,dword ptr [EBP + -0x4]
007e5a3d  MOV ESP,EBP
007e5a3f  POP EBP
007e5a40  RET
