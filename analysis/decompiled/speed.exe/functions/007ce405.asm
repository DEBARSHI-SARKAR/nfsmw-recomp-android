007ce405  MOV EAX,dword ptr [EDX + 0x4]
007ce408  AND EAX,0x7ff00000
007ce40d  CMP EAX,0x7ff00000
007ce412  JZ 0x007ce417
007ce414  FLD double ptr [EDX]
007ce416  RET
007ce417  MOV EAX,dword ptr [EDX + 0x4]
007ce41a  SUB ESP,0xa
007ce41d  OR EAX,0x7fff0000
007ce422  MOV dword ptr [ESP + 0x6],EAX
007ce426  MOV EAX,dword ptr [EDX + 0x4]
007ce429  MOV ECX,dword ptr [EDX]
007ce42b  SHLD EAX,ECX,0xb
007ce42f  SHL ECX,0xb
007ce432  MOV dword ptr [ESP + 0x4],EAX
007ce436  MOV dword ptr [ESP],ECX
007ce439  FLD extended double ptr [ESP]
007ce43c  ADD ESP,0xa
007ce43f  TEST EAX,0x0
007ce444  MOV EAX,dword ptr [EDX + 0x4]
007ce447  RET
