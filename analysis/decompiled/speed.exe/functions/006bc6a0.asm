006bc6a0  PUSH ECX
006bc6a1  MOVSX EAX,word ptr [ECX + 0x58]
006bc6a5  MOVSX EDX,byte ptr [ECX + 0x52]
006bc6a9  MOV dword ptr [ESP],EAX
006bc6ac  MOVSX EAX,word ptr [ECX + 0x5c]
006bc6b0  FILD dword ptr [ESP]
006bc6b3  PUSH ECX
006bc6b4  FMUL float ptr [0x008ae820]
006bc6ba  MOV dword ptr [ESP + 0x4],EAX
006bc6be  FSTP float ptr [ESP]
006bc6c1  PUSH EDX
006bc6c2  FILD dword ptr [ESP + 0x8]
006bc6c6  MOV EDX,dword ptr [ESP + 0x10]
006bc6ca  PUSH ECX
006bc6cb  FMUL float ptr [0x008a8db4]
006bc6d1  FSTP float ptr [ESP]
006bc6d4  PUSH EDX
006bc6d5  CALL 0x004fd2c0
006bc6da  POP ECX
006bc6db  RET 0x4
