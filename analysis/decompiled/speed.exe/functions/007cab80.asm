007cab80  PUSH EBP
007cab81  MOV EBP,ESP
007cab83  PUSH ECX
007cab84  MOV EAX,dword ptr [EBP + 0x8]
007cab87  PUSH EAX
007cab88  CALL 0x007ca970
007cab8d  ADD ESP,0x4
007cab90  TEST EAX,EAX
007cab92  JNZ 0x007caba3
007cab94  CMP dword ptr [EBP + 0x8],0x5f
007cab98  JZ 0x007caba3
007cab9a  MOV dword ptr [EBP + -0x4],0x0
007caba1  JMP 0x007cabaa
007caba3  MOV dword ptr [EBP + -0x4],0x1
007cabaa  MOV EAX,dword ptr [EBP + -0x4]
007cabad  MOV ESP,EBP
007cabaf  POP EBP
007cabb0  RET
