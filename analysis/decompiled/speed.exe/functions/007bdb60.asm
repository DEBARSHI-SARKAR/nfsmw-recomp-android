007bdb60  PUSH ESI
007bdb61  MOV ESI,ECX
007bdb63  MOV EAX,dword ptr [ESI + 0x10]
007bdb66  PUSH 0x5bc
007bdb6b  PUSH 0x91c4a50
007bdb70  PUSH EAX
007bdb71  CALL 0x005251a0
007bdb76  ADD ESP,0x8
007bdb79  PUSH EAX
007bdb7a  CALL 0x00515bb0
007bdb7f  MOV EAX,dword ptr [ESI + 0x10]
007bdb82  ADD ESP,0x8
007bdb85  PUSH 0x682
007bdb8a  PUSH 0x2d145be3
007bdb8f  PUSH EAX
007bdb90  CALL 0x005251a0
007bdb95  ADD ESP,0x8
007bdb98  PUSH EAX
007bdb99  CALL 0x00515bb0
007bdb9e  MOV dword ptr [ESI + 0x15c],0xe167f7c8
007bdba8  MOV ECX,dword ptr [0x009b9ec4]
007bdbae  ADD ESP,0x8
007bdbb1  CALL 0x005816b0
007bdbb6  IMUL EAX,EAX,0xd0
007bdbbc  ADD EAX,dword ptr [0x009b09d8]
007bdbc2  JZ 0x007bdbca
007bdbc4  MOVSX EAX,byte ptr [EAX + 0x5d]
007bdbc8  JMP 0x007bdbcc
007bdbca  XOR EAX,EAX
007bdbcc  MOV dword ptr [ESI + 0x1bc],EAX
007bdbd2  MOV dword ptr [ESI + 0x1c0],EAX
007bdbd8  MOV ECX,dword ptr [0x009b9ec4]
007bdbde  CALL 0x005816b0
007bdbe3  IMUL EAX,EAX,0xd0
007bdbe9  ADD EAX,dword ptr [0x009b09d8]
007bdbef  JZ 0x007bdbf7
007bdbf1  MOVSX EAX,byte ptr [EAX + 0x5e]
007bdbf5  JMP 0x007bdbf9
007bdbf7  XOR EAX,EAX
007bdbf9  PUSH 0x42
007bdbfb  MOV ECX,0x9b9ec0
007bdc00  MOV dword ptr [ESI + 0x1c4],EAX
007bdc06  CALL 0x007aed20
007bdc0b  MOV ECX,dword ptr [0x00905e38]
007bdc11  CMP ECX,-0x1
007bdc14  JZ 0x007bdc28
007bdc16  MOV dword ptr [ESI + 0x1bc],ECX
007bdc1c  MOV dword ptr [0x00905e38],0xffffffff
007bdc26  JMP 0x007bdc43
007bdc28  TEST EAX,EAX
007bdc2a  JZ 0x007bdc43
007bdc2c  PUSH 0x0
007bdc2e  PUSH 0xeb0101e2
007bdc33  MOV ECX,EAX
007bdc35  CALL 0x00747ac0
007bdc3a  MOVSX EAX,AL
007bdc3d  MOV dword ptr [ESI + 0x1bc],EAX
007bdc43  PUSH -0x1
007bdc45  MOV ECX,ESI
007bdc47  CALL 0x007b7dd0
007bdc4c  MOV EDX,dword ptr [ESI]
007bdc4e  MOV ECX,ESI
007bdc50  POP ESI
007bdc51  JMP dword ptr [EDX + 0xc]
