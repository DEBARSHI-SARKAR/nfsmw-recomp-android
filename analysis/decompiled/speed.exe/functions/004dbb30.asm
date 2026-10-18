004dbb30  PUSH ESI
004dbb31  MOV ESI,ECX
004dbb33  MOV EAX,dword ptr [ESI + 0x30]
004dbb36  TEST EAX,EAX
004dbb38  JNZ 0x004dbb3f
004dbb3a  MOV EAX,dword ptr [ESI]
004dbb3c  CALL dword ptr [EAX + 0x34]
004dbb3f  MOV ECX,dword ptr [ESI + 0x18]
004dbb42  MOV EAX,dword ptr [ECX + 0x34]
004dbb45  FLD float ptr [EAX + 0x58]
004dbb48  ADD EAX,0x50
004dbb4b  FLD float ptr [EAX + 0x4]
004dbb4e  PUSH ECX
004dbb4f  FLD float ptr [EAX]
004dbb51  MOV ECX,0x914788
004dbb56  FLD ST0
004dbb58  FMUL ST1
004dbb5a  FLD ST2
004dbb5c  FMUL ST3
004dbb5e  FADDP
004dbb60  FLD ST3
004dbb62  FMUL ST4
004dbb64  FADDP
004dbb66  FSTP ST3
004dbb68  FSTP ST0
004dbb6a  FSTP ST0
004dbb6c  FSQRT
004dbb6e  FMUL float ptr [0x008967e0]
004dbb74  FSTP float ptr [ESP]
004dbb77  CALL 0x004ba590
004dbb7c  FSTP float ptr [ESI + 0x2c]
004dbb7f  POP ESI
004dbb80  RET 0x4
