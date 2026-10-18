007df1a0  PUSH EBP
007df1a1  MOV EBP,ESP
007df1a3  SUB ESP,0x10
007df1a6  MOV EAX,dword ptr [EBP + 0xc]
007df1a9  MOV dword ptr [EBP + -0x4],EAX
007df1ac  CMP dword ptr [EBP + 0x14],0x0
007df1b0  JZ 0x007df1c9
007df1b2  MOV ECX,dword ptr [EBP + -0x4]
007df1b5  MOV byte ptr [ECX],0x2d
007df1b8  MOV EDX,dword ptr [EBP + -0x4]
007df1bb  ADD EDX,0x1
007df1be  MOV dword ptr [EBP + -0x4],EDX
007df1c1  MOV EAX,dword ptr [EBP + 0x8]
007df1c4  NEG EAX
007df1c6  MOV dword ptr [EBP + 0x8],EAX
007df1c9  MOV ECX,dword ptr [EBP + -0x4]
007df1cc  MOV dword ptr [EBP + -0x10],ECX
007df1cf  MOV EAX,dword ptr [EBP + 0x8]
007df1d2  XOR EDX,EDX
007df1d4  DIV dword ptr [EBP + 0x10]
007df1d7  MOV dword ptr [EBP + -0x8],EDX
007df1da  MOV EAX,dword ptr [EBP + 0x8]
007df1dd  XOR EDX,EDX
007df1df  DIV dword ptr [EBP + 0x10]
007df1e2  MOV dword ptr [EBP + 0x8],EAX
007df1e5  CMP dword ptr [EBP + -0x8],0x9
007df1e9  JBE 0x007df201
007df1eb  MOV EDX,dword ptr [EBP + -0x8]
007df1ee  ADD EDX,0x57
007df1f1  MOV EAX,dword ptr [EBP + -0x4]
007df1f4  MOV byte ptr [EAX],DL
007df1f6  MOV ECX,dword ptr [EBP + -0x4]
007df1f9  ADD ECX,0x1
007df1fc  MOV dword ptr [EBP + -0x4],ECX
007df1ff  JMP 0x007df215
007df201  MOV EDX,dword ptr [EBP + -0x8]
007df204  ADD EDX,0x30
007df207  MOV EAX,dword ptr [EBP + -0x4]
007df20a  MOV byte ptr [EAX],DL
007df20c  MOV ECX,dword ptr [EBP + -0x4]
007df20f  ADD ECX,0x1
007df212  MOV dword ptr [EBP + -0x4],ECX
007df215  CMP dword ptr [EBP + 0x8],0x0
007df219  JA 0x007df1cf
007df21b  MOV EDX,dword ptr [EBP + -0x4]
007df21e  MOV byte ptr [EDX],0x0
007df221  MOV EAX,dword ptr [EBP + -0x4]
007df224  SUB EAX,0x1
007df227  MOV dword ptr [EBP + -0x4],EAX
007df22a  MOV ECX,dword ptr [EBP + -0x4]
007df22d  MOV DL,byte ptr [ECX]
007df22f  MOV byte ptr [EBP + -0x9],DL
007df232  MOV EAX,dword ptr [EBP + -0x4]
007df235  MOV ECX,dword ptr [EBP + -0x10]
007df238  MOV DL,byte ptr [ECX]
007df23a  MOV byte ptr [EAX],DL
007df23c  MOV EAX,dword ptr [EBP + -0x10]
007df23f  MOV CL,byte ptr [EBP + -0x9]
007df242  MOV byte ptr [EAX],CL
007df244  MOV EDX,dword ptr [EBP + -0x4]
007df247  SUB EDX,0x1
007df24a  MOV dword ptr [EBP + -0x4],EDX
007df24d  MOV EAX,dword ptr [EBP + -0x10]
007df250  ADD EAX,0x1
007df253  MOV dword ptr [EBP + -0x10],EAX
007df256  MOV ECX,dword ptr [EBP + -0x10]
007df259  CMP ECX,dword ptr [EBP + -0x4]
007df25c  JC 0x007df22a
007df25e  MOV ESP,EBP
007df260  POP EBP
007df261  RET
