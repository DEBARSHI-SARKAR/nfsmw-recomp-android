007db6c0  PUSH EBP
007db6c1  MOV EBP,ESP
007db6c3  SUB ESP,0x20
007db6c6  MOV dword ptr [EBP + -0x18],0x0
007db6cd  MOV EAX,dword ptr [EBP + 0xc]
007db6d0  MOV dword ptr [EBP + -0x1c],EAX
007db6d3  CMP dword ptr [EBP + 0x10],0x0
007db6d7  JZ 0x007db6f9
007db6d9  MOV ECX,dword ptr [EBP + 0x8]
007db6dc  SAR ECX,0x5
007db6df  MOV EDX,dword ptr [EBP + 0x8]
007db6e2  AND EDX,0x1f
007db6e5  IMUL EDX,EDX,0x24
007db6e8  MOV EAX,dword ptr [ECX*0x4 + 0x9c5340]
007db6ef  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x4]
007db6f4  AND ECX,0x2
007db6f7  JZ 0x007db700
007db6f9  XOR EAX,EAX
007db6fb  JMP 0x007dbafb
007db700  MOV EDX,dword ptr [EBP + 0x8]
007db703  SAR EDX,0x5
007db706  MOV EAX,dword ptr [EBP + 0x8]
007db709  AND EAX,0x1f
007db70c  IMUL EAX,EAX,0x24
007db70f  MOV ECX,dword ptr [EDX*0x4 + 0x9c5340]
007db716  MOVSX EDX,byte ptr [ECX + EAX*0x1 + 0x4]
007db71b  AND EDX,0x48
007db71e  JZ 0x007db795
007db720  MOV EAX,dword ptr [EBP + 0x8]
007db723  SAR EAX,0x5
007db726  MOV ECX,dword ptr [EBP + 0x8]
007db729  AND ECX,0x1f
007db72c  IMUL ECX,ECX,0x24
007db72f  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007db736  MOVSX EAX,byte ptr [EDX + ECX*0x1 + 0x5]
007db73b  CMP EAX,0xa
007db73e  JZ 0x007db795
007db740  MOV ECX,dword ptr [EBP + 0x8]
007db743  SAR ECX,0x5
007db746  MOV EDX,dword ptr [EBP + 0x8]
007db749  AND EDX,0x1f
007db74c  IMUL EDX,EDX,0x24
007db74f  MOV EAX,dword ptr [ECX*0x4 + 0x9c5340]
007db756  MOV ECX,dword ptr [EBP + -0x1c]
007db759  MOV DL,byte ptr [EAX + EDX*0x1 + 0x5]
007db75d  MOV byte ptr [ECX],DL
007db75f  MOV EAX,dword ptr [EBP + -0x1c]
007db762  ADD EAX,0x1
007db765  MOV dword ptr [EBP + -0x1c],EAX
007db768  MOV ECX,dword ptr [EBP + -0x18]
007db76b  ADD ECX,0x1
007db76e  MOV dword ptr [EBP + -0x18],ECX
007db771  MOV EDX,dword ptr [EBP + 0x10]
007db774  SUB EDX,0x1
007db777  MOV dword ptr [EBP + 0x10],EDX
007db77a  MOV EAX,dword ptr [EBP + 0x8]
007db77d  SAR EAX,0x5
007db780  MOV ECX,dword ptr [EBP + 0x8]
007db783  AND ECX,0x1f
007db786  IMUL ECX,ECX,0x24
007db789  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007db790  MOV byte ptr [EDX + ECX*0x1 + 0x5],0xa
007db795  PUSH 0x0
007db797  LEA EAX,[EBP + -0xc]
007db79a  PUSH EAX
007db79b  MOV ECX,dword ptr [EBP + 0x10]
007db79e  PUSH ECX
007db79f  MOV EDX,dword ptr [EBP + -0x1c]
007db7a2  PUSH EDX
007db7a3  MOV EAX,dword ptr [EBP + 0x8]
007db7a6  SAR EAX,0x5
007db7a9  MOV ECX,dword ptr [EBP + 0x8]
007db7ac  AND ECX,0x1f
007db7af  IMUL ECX,ECX,0x24
007db7b2  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007db7b9  MOV EAX,dword ptr [EDX + ECX*0x1]
007db7bc  PUSH EAX
007db7bd  CALL dword ptr [0x00890250]
007db7c3  TEST EAX,EAX
007db7c5  JNZ 0x007db814
007db7c7  CALL dword ptr [0x00890188]
007db7cd  MOV dword ptr [EBP + -0x10],EAX
007db7d0  CMP dword ptr [EBP + -0x10],0x5
007db7d4  JNZ 0x007db7f3
007db7d6  CALL 0x007cb270
007db7db  MOV dword ptr [EAX],0x9
007db7e1  CALL 0x007cb280
007db7e6  MOV ECX,dword ptr [EBP + -0x10]
007db7e9  MOV dword ptr [EAX],ECX
007db7eb  OR EAX,0xffffffff
007db7ee  JMP 0x007dbafb
007db7f3  CMP dword ptr [EBP + -0x10],0x6d
007db7f7  JNZ 0x007db800
007db7f9  XOR EAX,EAX
007db7fb  JMP 0x007dbafb
007db800  MOV EDX,dword ptr [EBP + -0x10]
007db803  PUSH EDX
007db804  CALL 0x007cb1d0
007db809  ADD ESP,0x4
007db80c  OR EAX,0xffffffff
007db80f  JMP 0x007dbafb
007db814  MOV EAX,dword ptr [EBP + -0x18]
007db817  ADD EAX,dword ptr [EBP + -0xc]
007db81a  MOV dword ptr [EBP + -0x18],EAX
007db81d  MOV ECX,dword ptr [EBP + 0x8]
007db820  SAR ECX,0x5
007db823  MOV EDX,dword ptr [EBP + 0x8]
007db826  AND EDX,0x1f
007db829  IMUL EDX,EDX,0x24
007db82c  MOV EAX,dword ptr [ECX*0x4 + 0x9c5340]
007db833  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x4]
007db838  AND ECX,0x80
007db83e  JZ 0x007dbaf8
007db844  CMP dword ptr [EBP + -0xc],0x0
007db848  JZ 0x007db88f
007db84a  MOV EDX,dword ptr [EBP + 0xc]
007db84d  MOVSX EAX,byte ptr [EDX]
007db850  CMP EAX,0xa
007db853  JNZ 0x007db88f
007db855  MOV ECX,dword ptr [EBP + 0x8]
007db858  SAR ECX,0x5
007db85b  MOV EDX,dword ptr [EBP + 0x8]
007db85e  AND EDX,0x1f
007db861  IMUL EDX,EDX,0x24
007db864  MOV EAX,dword ptr [ECX*0x4 + 0x9c5340]
007db86b  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x4]
007db870  OR ECX,0x4
007db873  MOV EDX,dword ptr [EBP + 0x8]
007db876  SAR EDX,0x5
007db879  MOV EAX,dword ptr [EBP + 0x8]
007db87c  AND EAX,0x1f
007db87f  IMUL EAX,EAX,0x24
007db882  MOV EDX,dword ptr [EDX*0x4 + 0x9c5340]
007db889  MOV byte ptr [EDX + EAX*0x1 + 0x4],CL
007db88d  JMP 0x007db8c7
007db88f  MOV EAX,dword ptr [EBP + 0x8]
007db892  SAR EAX,0x5
007db895  MOV ECX,dword ptr [EBP + 0x8]
007db898  AND ECX,0x1f
007db89b  IMUL ECX,ECX,0x24
007db89e  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007db8a5  MOVSX EAX,byte ptr [EDX + ECX*0x1 + 0x4]
007db8aa  AND EAX,0xfffffffb
007db8ad  MOV ECX,dword ptr [EBP + 0x8]
007db8b0  SAR ECX,0x5
007db8b3  MOV EDX,dword ptr [EBP + 0x8]
007db8b6  AND EDX,0x1f
007db8b9  IMUL EDX,EDX,0x24
007db8bc  MOV ECX,dword ptr [ECX*0x4 + 0x9c5340]
007db8c3  MOV byte ptr [ECX + EDX*0x1 + 0x4],AL
007db8c7  MOV EDX,dword ptr [EBP + 0xc]
007db8ca  MOV dword ptr [EBP + -0x14],EDX
007db8cd  MOV EAX,dword ptr [EBP + -0x14]
007db8d0  MOV dword ptr [EBP + -0x4],EAX
007db8d3  MOV ECX,dword ptr [EBP + 0xc]
007db8d6  ADD ECX,dword ptr [EBP + -0x18]
007db8d9  CMP dword ptr [EBP + -0x4],ECX
007db8dc  JNC 0x007dbaef
007db8e2  MOV EDX,dword ptr [EBP + -0x4]
007db8e5  MOVSX EAX,byte ptr [EDX]
007db8e8  CMP EAX,0x1a
007db8eb  JNZ 0x007db94a
007db8ed  MOV ECX,dword ptr [EBP + 0x8]
007db8f0  SAR ECX,0x5
007db8f3  MOV EDX,dword ptr [EBP + 0x8]
007db8f6  AND EDX,0x1f
007db8f9  IMUL EDX,EDX,0x24
007db8fc  MOV EAX,dword ptr [ECX*0x4 + 0x9c5340]
007db903  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x4]
007db908  AND ECX,0x40
007db90b  JNZ 0x007db945
007db90d  MOV EDX,dword ptr [EBP + 0x8]
007db910  SAR EDX,0x5
007db913  MOV EAX,dword ptr [EBP + 0x8]
007db916  AND EAX,0x1f
007db919  IMUL EAX,EAX,0x24
007db91c  MOV ECX,dword ptr [EDX*0x4 + 0x9c5340]
007db923  MOVSX EDX,byte ptr [ECX + EAX*0x1 + 0x4]
007db928  OR EDX,0x2
007db92b  MOV EAX,dword ptr [EBP + 0x8]
007db92e  SAR EAX,0x5
007db931  MOV ECX,dword ptr [EBP + 0x8]
007db934  AND ECX,0x1f
007db937  IMUL ECX,ECX,0x24
007db93a  MOV EAX,dword ptr [EAX*0x4 + 0x9c5340]
007db941  MOV byte ptr [EAX + ECX*0x1 + 0x4],DL
007db945  JMP 0x007dbaef
007db94a  MOV ECX,dword ptr [EBP + -0x4]
007db94d  MOVSX EDX,byte ptr [ECX]
007db950  CMP EDX,0xd
007db953  JZ 0x007db976
007db955  MOV EAX,dword ptr [EBP + -0x14]
007db958  MOV ECX,dword ptr [EBP + -0x4]
007db95b  MOV DL,byte ptr [ECX]
007db95d  MOV byte ptr [EAX],DL
007db95f  MOV EAX,dword ptr [EBP + -0x14]
007db962  ADD EAX,0x1
007db965  MOV dword ptr [EBP + -0x14],EAX
007db968  MOV ECX,dword ptr [EBP + -0x4]
007db96b  ADD ECX,0x1
007db96e  MOV dword ptr [EBP + -0x4],ECX
007db971  JMP 0x007dbaea
007db976  MOV EDX,dword ptr [EBP + -0x18]
007db979  MOV EAX,dword ptr [EBP + 0xc]
007db97c  LEA ECX,[EAX + EDX*0x1 + -0x1]
007db980  CMP dword ptr [EBP + -0x4],ECX
007db983  JNC 0x007db9cc
007db985  MOV EDX,dword ptr [EBP + -0x4]
007db988  MOVSX EAX,byte ptr [EDX + 0x1]
007db98c  CMP EAX,0xa
007db98f  JNZ 0x007db9ab
007db991  MOV ECX,dword ptr [EBP + -0x4]
007db994  ADD ECX,0x2
007db997  MOV dword ptr [EBP + -0x4],ECX
007db99a  MOV EDX,dword ptr [EBP + -0x14]
007db99d  MOV byte ptr [EDX],0xa
007db9a0  MOV EAX,dword ptr [EBP + -0x14]
007db9a3  ADD EAX,0x1
007db9a6  MOV dword ptr [EBP + -0x14],EAX
007db9a9  JMP 0x007db9c7
007db9ab  MOV ECX,dword ptr [EBP + -0x14]
007db9ae  MOV EDX,dword ptr [EBP + -0x4]
007db9b1  MOV AL,byte ptr [EDX]
007db9b3  MOV byte ptr [ECX],AL
007db9b5  MOV ECX,dword ptr [EBP + -0x14]
007db9b8  ADD ECX,0x1
007db9bb  MOV dword ptr [EBP + -0x14],ECX
007db9be  MOV EDX,dword ptr [EBP + -0x4]
007db9c1  ADD EDX,0x1
007db9c4  MOV dword ptr [EBP + -0x4],EDX
007db9c7  JMP 0x007dbaea
007db9cc  MOV EAX,dword ptr [EBP + -0x4]
007db9cf  ADD EAX,0x1
007db9d2  MOV dword ptr [EBP + -0x4],EAX
007db9d5  MOV dword ptr [EBP + -0x10],0x0
007db9dc  PUSH 0x0
007db9de  LEA ECX,[EBP + -0xc]
007db9e1  PUSH ECX
007db9e2  PUSH 0x1
007db9e4  LEA EDX,[EBP + -0x5]
007db9e7  PUSH EDX
007db9e8  MOV EAX,dword ptr [EBP + 0x8]
007db9eb  SAR EAX,0x5
007db9ee  MOV ECX,dword ptr [EBP + 0x8]
007db9f1  AND ECX,0x1f
007db9f4  IMUL ECX,ECX,0x24
007db9f7  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007db9fe  MOV EAX,dword ptr [EDX + ECX*0x1]
007dba01  PUSH EAX
007dba02  CALL dword ptr [0x00890250]
007dba08  TEST EAX,EAX
007dba0a  JNZ 0x007dba15
007dba0c  CALL dword ptr [0x00890188]
007dba12  MOV dword ptr [EBP + -0x10],EAX
007dba15  CMP dword ptr [EBP + -0x10],0x0
007dba19  JNZ 0x007dba21
007dba1b  CMP dword ptr [EBP + -0xc],0x0
007dba1f  JNZ 0x007dba35
007dba21  MOV ECX,dword ptr [EBP + -0x14]
007dba24  MOV byte ptr [ECX],0xd
007dba27  MOV EDX,dword ptr [EBP + -0x14]
007dba2a  ADD EDX,0x1
007dba2d  MOV dword ptr [EBP + -0x14],EDX
007dba30  JMP 0x007dbaea
007dba35  MOV EAX,dword ptr [EBP + 0x8]
007dba38  SAR EAX,0x5
007dba3b  MOV ECX,dword ptr [EBP + 0x8]
007dba3e  AND ECX,0x1f
007dba41  IMUL ECX,ECX,0x24
007dba44  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007dba4b  MOVSX EAX,byte ptr [EDX + ECX*0x1 + 0x4]
007dba50  AND EAX,0x48
007dba53  JZ 0x007dba9d
007dba55  MOVSX ECX,byte ptr [EBP + -0x5]
007dba59  CMP ECX,0xa
007dba5c  JNZ 0x007dba6f
007dba5e  MOV EDX,dword ptr [EBP + -0x14]
007dba61  MOV byte ptr [EDX],0xa
007dba64  MOV EAX,dword ptr [EBP + -0x14]
007dba67  ADD EAX,0x1
007dba6a  MOV dword ptr [EBP + -0x14],EAX
007dba6d  JMP 0x007dba9b
007dba6f  MOV ECX,dword ptr [EBP + -0x14]
007dba72  MOV byte ptr [ECX],0xd
007dba75  MOV EDX,dword ptr [EBP + -0x14]
007dba78  ADD EDX,0x1
007dba7b  MOV dword ptr [EBP + -0x14],EDX
007dba7e  MOV EAX,dword ptr [EBP + 0x8]
007dba81  SAR EAX,0x5
007dba84  MOV ECX,dword ptr [EBP + 0x8]
007dba87  AND ECX,0x1f
007dba8a  IMUL ECX,ECX,0x24
007dba8d  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007dba94  MOV AL,byte ptr [EBP + -0x5]
007dba97  MOV byte ptr [EDX + ECX*0x1 + 0x5],AL
007dba9b  JMP 0x007dbaea
007dba9d  MOV ECX,dword ptr [EBP + -0x14]
007dbaa0  CMP ECX,dword ptr [EBP + 0xc]
007dbaa3  JNZ 0x007dbabf
007dbaa5  MOVSX EDX,byte ptr [EBP + -0x5]
007dbaa9  CMP EDX,0xa
007dbaac  JNZ 0x007dbabf
007dbaae  MOV EAX,dword ptr [EBP + -0x14]
007dbab1  MOV byte ptr [EAX],0xa
007dbab4  MOV ECX,dword ptr [EBP + -0x14]
007dbab7  ADD ECX,0x1
007dbaba  MOV dword ptr [EBP + -0x14],ECX
007dbabd  JMP 0x007dbaea
007dbabf  PUSH 0x1
007dbac1  PUSH -0x1
007dbac3  MOV EDX,dword ptr [EBP + 0x8]
007dbac6  PUSH EDX
007dbac7  CALL 0x007e3b90
007dbacc  ADD ESP,0xc
007dbacf  MOV dword ptr [EBP + -0x20],EAX
007dbad2  MOVSX EAX,byte ptr [EBP + -0x5]
007dbad6  CMP EAX,0xa
007dbad9  JZ 0x007dbaea
007dbadb  MOV ECX,dword ptr [EBP + -0x14]
007dbade  MOV byte ptr [ECX],0xd
007dbae1  MOV EDX,dword ptr [EBP + -0x14]
007dbae4  ADD EDX,0x1
007dbae7  MOV dword ptr [EBP + -0x14],EDX
007dbaea  JMP 0x007db8d3
007dbaef  MOV EAX,dword ptr [EBP + -0x14]
007dbaf2  SUB EAX,dword ptr [EBP + 0xc]
007dbaf5  MOV dword ptr [EBP + -0x18],EAX
007dbaf8  MOV EAX,dword ptr [EBP + -0x18]
007dbafb  MOV ESP,EBP
007dbafd  POP EBP
007dbafe  RET
