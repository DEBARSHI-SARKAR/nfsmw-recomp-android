007cf6f0  PUSH EBP
007cf6f1  MOV EBP,ESP
007cf6f3  SUB ESP,0x8
007cf6f6  MOV EAX,dword ptr [EBP + 0x18]
007cf6f9  MOV ECX,dword ptr [EAX]
007cf6fb  AND ECX,0x1fffffff
007cf701  CMP ECX,0x19930520
007cf707  JNZ 0x007cf70b
007cf709  JMP 0x007cf710
007cf70b  CALL 0x007d0ab0
007cf710  MOV EDX,dword ptr [EBP + 0x8]
007cf713  MOV EAX,dword ptr [EDX + 0x4]
007cf716  AND EAX,0x66
007cf719  JZ 0x007cf74a
007cf71b  MOV ECX,dword ptr [EBP + 0x18]
007cf71e  CMP dword ptr [ECX + 0x4],0x0
007cf722  JZ 0x007cf740
007cf724  CMP dword ptr [EBP + 0x1c],0x0
007cf728  JNZ 0x007cf740
007cf72a  PUSH -0x1
007cf72c  MOV EDX,dword ptr [EBP + 0x18]
007cf72f  PUSH EDX
007cf730  MOV EAX,dword ptr [EBP + 0x14]
007cf733  PUSH EAX
007cf734  MOV ECX,dword ptr [EBP + 0xc]
007cf737  PUSH ECX
007cf738  CALL 0x007cfc60
007cf73d  ADD ESP,0x10
007cf740  MOV EAX,0x1
007cf745  JMP 0x007cf7dc
007cf74a  MOV EDX,dword ptr [EBP + 0x18]
007cf74d  CMP dword ptr [EDX + 0xc],0x0
007cf751  JZ 0x007cf7d7
007cf757  MOV EAX,dword ptr [EBP + 0x8]
007cf75a  CMP dword ptr [EAX],0xe06d7363
007cf760  JNZ 0x007cf7af
007cf762  MOV ECX,dword ptr [EBP + 0x8]
007cf765  CMP dword ptr [ECX + 0x14],0x19930520
007cf76c  JBE 0x007cf7af
007cf76e  MOV EDX,dword ptr [EBP + 0x8]
007cf771  MOV EAX,dword ptr [EDX + 0x1c]
007cf774  MOV ECX,dword ptr [EAX + 0x8]
007cf777  MOV dword ptr [EBP + -0x4],ECX
007cf77a  CMP dword ptr [EBP + -0x4],0x0
007cf77e  JZ 0x007cf7af
007cf780  MOVZX EDX,byte ptr [EBP + 0x24]
007cf784  PUSH EDX
007cf785  MOV EAX,dword ptr [EBP + 0x20]
007cf788  PUSH EAX
007cf789  MOV ECX,dword ptr [EBP + 0x1c]
007cf78c  PUSH ECX
007cf78d  MOV EDX,dword ptr [EBP + 0x18]
007cf790  PUSH EDX
007cf791  MOV EAX,dword ptr [EBP + 0x14]
007cf794  PUSH EAX
007cf795  MOV ECX,dword ptr [EBP + 0x10]
007cf798  PUSH ECX
007cf799  MOV EDX,dword ptr [EBP + 0xc]
007cf79c  PUSH EDX
007cf79d  MOV EAX,dword ptr [EBP + 0x8]
007cf7a0  PUSH EAX
007cf7a1  CALL dword ptr [EBP + -0x4]
007cf7a4  ADD ESP,0x20
007cf7a7  MOV dword ptr [EBP + -0x8],EAX
007cf7aa  MOV EAX,dword ptr [EBP + -0x8]
007cf7ad  JMP 0x007cf7dc
007cf7af  MOV ECX,dword ptr [EBP + 0x20]
007cf7b2  PUSH ECX
007cf7b3  MOV EDX,dword ptr [EBP + 0x1c]
007cf7b6  PUSH EDX
007cf7b7  MOV AL,byte ptr [EBP + 0x24]
007cf7ba  PUSH EAX
007cf7bb  MOV ECX,dword ptr [EBP + 0x18]
007cf7be  PUSH ECX
007cf7bf  MOV EDX,dword ptr [EBP + 0x14]
007cf7c2  PUSH EDX
007cf7c3  MOV EAX,dword ptr [EBP + 0x10]
007cf7c6  PUSH EAX
007cf7c7  MOV ECX,dword ptr [EBP + 0xc]
007cf7ca  PUSH ECX
007cf7cb  MOV EDX,dword ptr [EBP + 0x8]
007cf7ce  PUSH EDX
007cf7cf  CALL 0x007cf7e0
007cf7d4  ADD ESP,0x20
007cf7d7  MOV EAX,0x1
007cf7dc  MOV ESP,EBP
007cf7de  POP EBP
007cf7df  RET
