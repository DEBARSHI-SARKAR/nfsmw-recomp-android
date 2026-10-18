007facf0  SHL dword ptr [0x009c0a30],CL
007facf6  SUB dword ptr [0x009bfe28],ECX
007facfc  CMP dword ptr [0x009bfe28],0x10
007fad03  JGE 0x007fad2c
007fad05  MOV EAX,[0x009c1840]
007fad0a  MOVZX EAX,word ptr [EAX]
007fad0d  PUSH 0x10
007fad0f  POP ECX
007fad10  SUB ECX,dword ptr [0x009bfe28]
007fad16  ADD dword ptr [0x009bfe28],0x10
007fad1d  SHL EAX,CL
007fad1f  OR dword ptr [0x009c0a30],EAX
007fad25  ADD dword ptr [0x009c1840],0x2
007fad2c  RET
