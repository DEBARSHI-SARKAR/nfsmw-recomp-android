004dcf30  MOV EAX,dword ptr [ECX + 0x48]
004dcf33  TEST EAX,EAX
004dcf35  JZ 0x004dcf5b
004dcf37  MOV EDX,0x1
004dcf3c  MOV dword ptr [ECX + 0x40],0x41200000
004dcf43  MOV byte ptr [ECX + 0x44],DL
004dcf46  MOV dword ptr [EAX + 0x18],EDX
004dcf49  MOV EAX,dword ptr [ECX + 0x48]
004dcf4c  MOV ECX,dword ptr [EAX]
004dcf4e  TEST ECX,ECX
004dcf50  JZ 0x004dcf5b
004dcf52  ADD EAX,0x4
004dcf55  PUSH EAX
004dcf56  CALL 0x0083179c
004dcf5b  RET
