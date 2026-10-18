0085da70  PUSH EBP
0085da71  MOV EBP,ESP
0085da73  SUB ESP,0x30
0085da76  LEA EAX,[EBP + -0x28]
0085da79  MOV dword ptr [EBP + -0x8],EAX
0085da7c  CMP dword ptr [EBP + 0x8],0x0
0085da80  JNZ 0x0085daa0
0085da82  PUSH 0x8b816c
0085da87  PUSH 0x0
0085da89  PUSH 0x5c
0085da8b  PUSH 0x8c7b0c
0085da90  PUSH 0x2
0085da92  CALL 0x007d2670
0085da97  ADD ESP,0x14
0085da9a  CMP EAX,0x1
0085da9d  JNZ 0x0085daa0
0085da9f  INT3
0085daa0  CMP dword ptr [EBP + 0x10],0x0
0085daa4  JNZ 0x0085dac4
0085daa6  PUSH 0x8b814c
0085daab  PUSH 0x0
0085daad  PUSH 0x5d
0085daaf  PUSH 0x8c7b0c
0085dab4  PUSH 0x2
0085dab6  CALL 0x007d2670
0085dabb  ADD ESP,0x14
0085dabe  CMP EAX,0x1
0085dac1  JNZ 0x0085dac4
0085dac3  INT3
0085dac4  MOV EAX,dword ptr [EBP + -0x8]
0085dac7  MOV dword ptr [EAX + 0xc],0x42
0085dace  MOV ECX,dword ptr [EBP + -0x8]
0085dad1  MOV EDX,dword ptr [EBP + 0x8]
0085dad4  MOV dword ptr [ECX + 0x8],EDX
0085dad7  MOV EAX,dword ptr [EBP + -0x8]
0085dada  MOV ECX,dword ptr [EBP + 0x8]
0085dadd  MOV dword ptr [EAX],ECX
0085dadf  MOV EDX,dword ptr [EBP + 0xc]
0085dae2  SHL EDX,0x1
0085dae4  MOV EAX,dword ptr [EBP + -0x8]
0085dae7  MOV dword ptr [EAX + 0x4],EDX
0085daea  MOV ECX,dword ptr [EBP + 0x14]
0085daed  PUSH ECX
0085daee  MOV EDX,dword ptr [EBP + 0x10]
0085daf1  PUSH EDX
0085daf2  MOV EAX,dword ptr [EBP + -0x8]
0085daf5  PUSH EAX
0085daf6  CALL 0x0085f200
0085dafb  ADD ESP,0xc
0085dafe  MOV dword ptr [EBP + -0x4],EAX
0085db01  MOV ECX,dword ptr [EBP + -0x8]
0085db04  MOV EDX,dword ptr [ECX + 0x4]
0085db07  SUB EDX,0x1
0085db0a  MOV EAX,dword ptr [EBP + -0x8]
0085db0d  MOV dword ptr [EAX + 0x4],EDX
0085db10  MOV ECX,dword ptr [EBP + -0x8]
0085db13  CMP dword ptr [ECX + 0x4],0x0
0085db17  JL 0x0085db3b
0085db19  MOV EDX,dword ptr [EBP + -0x8]
0085db1c  MOV EAX,dword ptr [EDX]
0085db1e  MOV byte ptr [EAX],0x0
0085db21  XOR ECX,ECX
0085db23  AND ECX,0xff
0085db29  MOV dword ptr [EBP + -0x2c],ECX
0085db2c  MOV EDX,dword ptr [EBP + -0x8]
0085db2f  MOV EAX,dword ptr [EDX]
0085db31  ADD EAX,0x1
0085db34  MOV ECX,dword ptr [EBP + -0x8]
0085db37  MOV dword ptr [ECX],EAX
0085db39  JMP 0x0085db4c
0085db3b  MOV EDX,dword ptr [EBP + -0x8]
0085db3e  PUSH EDX
0085db3f  PUSH 0x0
0085db41  CALL 0x007d47d0
0085db46  ADD ESP,0x8
0085db49  MOV dword ptr [EBP + -0x2c],EAX
0085db4c  MOV EAX,dword ptr [EBP + -0x8]
0085db4f  MOV ECX,dword ptr [EAX + 0x4]
0085db52  SUB ECX,0x1
0085db55  MOV EDX,dword ptr [EBP + -0x8]
0085db58  MOV dword ptr [EDX + 0x4],ECX
0085db5b  MOV EAX,dword ptr [EBP + -0x8]
0085db5e  CMP dword ptr [EAX + 0x4],0x0
0085db62  JL 0x0085db85
0085db64  MOV ECX,dword ptr [EBP + -0x8]
0085db67  MOV EDX,dword ptr [ECX]
0085db69  MOV byte ptr [EDX],0x0
0085db6c  XOR EAX,EAX
0085db6e  AND EAX,0xff
0085db73  MOV dword ptr [EBP + -0x30],EAX
0085db76  MOV ECX,dword ptr [EBP + -0x8]
0085db79  MOV EDX,dword ptr [ECX]
0085db7b  ADD EDX,0x1
0085db7e  MOV EAX,dword ptr [EBP + -0x8]
0085db81  MOV dword ptr [EAX],EDX
0085db83  JMP 0x0085db96
0085db85  MOV ECX,dword ptr [EBP + -0x8]
0085db88  PUSH ECX
0085db89  PUSH 0x0
0085db8b  CALL 0x007d47d0
0085db90  ADD ESP,0x8
0085db93  MOV dword ptr [EBP + -0x30],EAX
0085db96  MOV EAX,dword ptr [EBP + -0x4]
0085db99  MOV ESP,EBP
0085db9b  POP EBP
0085db9c  RET
