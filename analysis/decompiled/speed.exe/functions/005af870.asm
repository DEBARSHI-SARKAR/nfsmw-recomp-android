005af870  MOV AL,byte ptr [ESP + 0x4]
005af874  TEST AL,AL
005af876  MOV EAX,dword ptr [ECX + 0x5c]
005af879  JZ 0x005af884
005af87b  AND EAX,0xfffffffb
005af87e  MOV dword ptr [ECX + 0x5c],EAX
005af881  RET 0x4
005af884  OR EAX,0x4
005af887  MOV dword ptr [ECX + 0x5c],EAX
005af88a  RET 0x4
