007e1a70  PUSH EBP
007e1a71  MOV EBP,ESP
007e1a73  PUSH ECX
007e1a74  MOV EAX,dword ptr [EBP + 0x8]
007e1a77  MOVSX ECX,byte ptr [EAX]
007e1a7a  TEST ECX,ECX
007e1a7c  JZ 0x007e1ae9
007e1a7e  MOV EDX,dword ptr [EBP + 0x8]
007e1a81  MOVSX EAX,byte ptr [EDX]
007e1a84  CMP EAX,0x30
007e1a87  JL 0x007e1aad
007e1a89  MOV ECX,dword ptr [EBP + 0x8]
007e1a8c  MOVSX EDX,byte ptr [ECX]
007e1a8f  CMP EDX,0x39
007e1a92  JG 0x007e1aad
007e1a94  MOV EAX,dword ptr [EBP + 0x8]
007e1a97  MOVSX ECX,byte ptr [EAX]
007e1a9a  SUB ECX,0x30
007e1a9d  MOV EDX,dword ptr [EBP + 0x8]
007e1aa0  MOV byte ptr [EDX],CL
007e1aa2  MOV EAX,dword ptr [EBP + 0x8]
007e1aa5  ADD EAX,0x1
007e1aa8  MOV dword ptr [EBP + 0x8],EAX
007e1aab  JMP 0x007e1ae7
007e1aad  MOV ECX,dword ptr [EBP + 0x8]
007e1ab0  MOVSX EDX,byte ptr [ECX]
007e1ab3  CMP EDX,0x3b
007e1ab6  JNZ 0x007e1ade
007e1ab8  MOV EAX,dword ptr [EBP + 0x8]
007e1abb  MOV dword ptr [EBP + -0x4],EAX
007e1abe  MOV ECX,dword ptr [EBP + -0x4]
007e1ac1  MOV EDX,dword ptr [EBP + -0x4]
007e1ac4  MOV AL,byte ptr [EDX + 0x1]
007e1ac7  MOV byte ptr [ECX],AL
007e1ac9  MOV ECX,dword ptr [EBP + -0x4]
007e1acc  ADD ECX,0x1
007e1acf  MOV dword ptr [EBP + -0x4],ECX
007e1ad2  MOV EDX,dword ptr [EBP + -0x4]
007e1ad5  MOVSX EAX,byte ptr [EDX]
007e1ad8  TEST EAX,EAX
007e1ada  JNZ 0x007e1abe
007e1adc  JMP 0x007e1ae7
007e1ade  MOV ECX,dword ptr [EBP + 0x8]
007e1ae1  ADD ECX,0x1
007e1ae4  MOV dword ptr [EBP + 0x8],ECX
007e1ae7  JMP 0x007e1a74
007e1ae9  MOV ESP,EBP
007e1aeb  POP EBP
007e1aec  RET
