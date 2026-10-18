006bc660  PUSH ECX
006bc661  MOVSX EAX,word ptr [ECX + 0x58]
006bc665  MOVSX EDX,byte ptr [ECX + 0x52]
006bc669  MOV dword ptr [ESP],EAX
006bc66c  MOVSX EAX,word ptr [ECX + 0x5a]
006bc670  FILD dword ptr [ESP]
006bc673  PUSH ECX
006bc674  FMUL float ptr [0x008ae820]
006bc67a  MOV dword ptr [ESP + 0x4],EAX
006bc67e  FSTP float ptr [ESP]
006bc681  PUSH EDX
006bc682  FILD dword ptr [ESP + 0x8]
006bc686  MOV EDX,dword ptr [ESP + 0x10]
006bc68a  PUSH ECX
006bc68b  FMUL float ptr [0x008a8db4]
006bc691  FSTP float ptr [ESP]
006bc694  PUSH EDX
006bc695  CALL 0x004fd2c0
006bc69a  POP ECX
006bc69b  RET 0x4
