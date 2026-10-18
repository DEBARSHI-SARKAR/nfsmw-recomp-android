007cdae0  PUSH EBP
007cdae1  MOV EBP,ESP
007cdae3  PUSH ECX
007cdae4  MOV EAX,dword ptr [EBP + 0x8]
007cdae7  MOVSX ECX,byte ptr [EAX]
007cdaea  TEST ECX,ECX
007cdaec  JZ 0x007cdb0a
007cdaee  MOV EDX,dword ptr [EBP + 0x8]
007cdaf1  MOVSX EAX,byte ptr [EDX]
007cdaf4  MOVSX ECX,byte ptr [0x0090725c]
007cdafb  CMP EAX,ECX
007cdafd  JZ 0x007cdb0a
007cdaff  MOV EDX,dword ptr [EBP + 0x8]
007cdb02  ADD EDX,0x1
007cdb05  MOV dword ptr [EBP + 0x8],EDX
007cdb08  JMP 0x007cdae4
007cdb0a  MOV EAX,dword ptr [EBP + 0x8]
007cdb0d  MOVSX ECX,byte ptr [EAX]
007cdb10  MOV EDX,dword ptr [EBP + 0x8]
007cdb13  ADD EDX,0x1
007cdb16  MOV dword ptr [EBP + 0x8],EDX
007cdb19  TEST ECX,ECX
007cdb1b  JZ 0x007cdbb3
007cdb21  MOV EAX,dword ptr [EBP + 0x8]
007cdb24  MOVSX ECX,byte ptr [EAX]
007cdb27  TEST ECX,ECX
007cdb29  JZ 0x007cdb4c
007cdb2b  MOV EDX,dword ptr [EBP + 0x8]
007cdb2e  MOVSX EAX,byte ptr [EDX]
007cdb31  CMP EAX,0x65
007cdb34  JZ 0x007cdb4c
007cdb36  MOV ECX,dword ptr [EBP + 0x8]
007cdb39  MOVSX EDX,byte ptr [ECX]
007cdb3c  CMP EDX,0x45
007cdb3f  JZ 0x007cdb4c
007cdb41  MOV EAX,dword ptr [EBP + 0x8]
007cdb44  ADD EAX,0x1
007cdb47  MOV dword ptr [EBP + 0x8],EAX
007cdb4a  JMP 0x007cdb21
007cdb4c  MOV ECX,dword ptr [EBP + 0x8]
007cdb4f  MOV dword ptr [EBP + -0x4],ECX
007cdb52  MOV EDX,dword ptr [EBP + 0x8]
007cdb55  SUB EDX,0x1
007cdb58  MOV dword ptr [EBP + 0x8],EDX
007cdb5b  MOV EAX,dword ptr [EBP + 0x8]
007cdb5e  MOVSX ECX,byte ptr [EAX]
007cdb61  CMP ECX,0x30
007cdb64  JNZ 0x007cdb71
007cdb66  MOV EDX,dword ptr [EBP + 0x8]
007cdb69  SUB EDX,0x1
007cdb6c  MOV dword ptr [EBP + 0x8],EDX
007cdb6f  JMP 0x007cdb5b
007cdb71  MOV EAX,dword ptr [EBP + 0x8]
007cdb74  MOVSX ECX,byte ptr [EAX]
007cdb77  MOVSX EDX,byte ptr [0x0090725c]
007cdb7e  CMP ECX,EDX
007cdb80  JNZ 0x007cdb8b
007cdb82  MOV EAX,dword ptr [EBP + 0x8]
007cdb85  SUB EAX,0x1
007cdb88  MOV dword ptr [EBP + 0x8],EAX
007cdb8b  MOV ECX,dword ptr [EBP + 0x8]
007cdb8e  ADD ECX,0x1
007cdb91  MOV dword ptr [EBP + 0x8],ECX
007cdb94  MOV EDX,dword ptr [EBP + 0x8]
007cdb97  MOV EAX,dword ptr [EBP + -0x4]
007cdb9a  MOV CL,byte ptr [EAX]
007cdb9c  MOV byte ptr [EDX],CL
007cdb9e  MOV EDX,dword ptr [EBP + 0x8]
007cdba1  MOVSX EAX,byte ptr [EDX]
007cdba4  MOV ECX,dword ptr [EBP + -0x4]
007cdba7  ADD ECX,0x1
007cdbaa  MOV dword ptr [EBP + -0x4],ECX
007cdbad  TEST EAX,EAX
007cdbaf  JZ 0x007cdbb3
007cdbb1  JMP 0x007cdb8b
007cdbb3  MOV ESP,EBP
007cdbb5  POP EBP
007cdbb6  RET
