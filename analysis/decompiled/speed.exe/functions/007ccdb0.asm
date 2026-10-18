007ccdb0  PUSH EBP
007ccdb1  MOV EBP,ESP
007ccdb3  SUB ESP,0x8
007ccdb6  MOV dword ptr [EBP + -0x4],0x0
007ccdbd  JMP 0x007ccdc8
007ccdbf  MOV EAX,dword ptr [EBP + -0x4]
007ccdc2  ADD EAX,0x1
007ccdc5  MOV dword ptr [EBP + -0x4],EAX
007ccdc8  CMP dword ptr [EBP + -0x4],0x40
007ccdcc  JGE 0x007cce47
007ccdce  MOV ECX,dword ptr [EBP + -0x4]
007ccdd1  CMP dword ptr [ECX*0x4 + 0x9c5340],0x0
007ccdd9  JZ 0x007cce42
007ccddb  MOV EDX,dword ptr [EBP + -0x4]
007ccdde  MOV EAX,dword ptr [EDX*0x4 + 0x9c5340]
007ccde5  MOV dword ptr [EBP + -0x8],EAX
007ccde8  JMP 0x007ccdf3
007ccdea  MOV ECX,dword ptr [EBP + -0x8]
007ccded  ADD ECX,0x24
007ccdf0  MOV dword ptr [EBP + -0x8],ECX
007ccdf3  MOV EDX,dword ptr [EBP + -0x4]
007ccdf6  MOV EAX,dword ptr [EDX*0x4 + 0x9c5340]
007ccdfd  ADD EAX,0x480
007cce02  CMP dword ptr [EBP + -0x8],EAX
007cce05  JNC 0x007cce1f
007cce07  MOV ECX,dword ptr [EBP + -0x8]
007cce0a  CMP dword ptr [ECX + 0x8],0x0
007cce0e  JZ 0x007cce1d
007cce10  MOV EDX,dword ptr [EBP + -0x8]
007cce13  ADD EDX,0xc
007cce16  PUSH EDX
007cce17  CALL dword ptr [0x008901fc]
007cce1d  JMP 0x007ccdea
007cce1f  PUSH 0x2
007cce21  MOV EAX,dword ptr [EBP + -0x4]
007cce24  MOV ECX,dword ptr [EAX*0x4 + 0x9c5340]
007cce2b  PUSH ECX
007cce2c  CALL 0x007c7290
007cce31  ADD ESP,0x8
007cce34  MOV EDX,dword ptr [EBP + -0x4]
007cce37  MOV dword ptr [EDX*0x4 + 0x9c5340],0x0
007cce42  JMP 0x007ccdbf
007cce47  MOV ESP,EBP
007cce49  POP EBP
007cce4a  RET
