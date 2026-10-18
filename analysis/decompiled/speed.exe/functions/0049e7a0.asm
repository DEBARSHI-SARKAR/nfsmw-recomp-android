0049e7a0  SUB ESP,0x1c
0049e7a3  MOV EAX,dword ptr [ESP + 0x2c]
0049e7a7  PUSH EBX
0049e7a8  PUSH EBP
0049e7a9  MOV EBP,dword ptr [ECX + 0x8]
0049e7ac  PUSH ESI
0049e7ad  TEST EAX,EAX
0049e7af  MOV EAX,dword ptr [ESP + 0x2c]
0049e7b3  PUSH EDI
0049e7b4  MOV dword ptr [ESP + 0x10],ECX
0049e7b8  MOV dword ptr [ESP + 0x14],EBP
0049e7bc  JZ 0x0049ee96
0049e7c2  MOV ECX,dword ptr [ESP + 0x34]
0049e7c6  XOR ESI,ESI
0049e7c8  CMP EAX,ECX
0049e7ca  JNZ 0x0049eba6
0049e7d0  CMP EBP,0x4
0049e7d3  JL 0x0049eac0
0049e7d9  MOV EAX,dword ptr [ESP + 0x10]
0049e7dd  MOV EBX,dword ptr [ESP + 0x3c]
0049e7e1  ADD EAX,0xac
0049e7e6  MOV dword ptr [ESP + 0x30],EAX
0049e7ea  MOV EAX,ECX
0049e7ec  MOV EDI,0x2
0049e7f1  ADD EAX,0x4c
0049e7f4  MOV ECX,ESI
0049e7f6  AND ECX,0x1f
0049e7f9  MOV EDX,0x1
0049e7fe  SHL EDX,CL
0049e800  MOV ECX,ESI
0049e802  SAR ECX,0x5
0049e805  TEST dword ptr [EBX + ECX*0x4],EDX
0049e808  JZ 0x0049e89d
0049e80e  MOV EDX,dword ptr [ESP + 0x30]
0049e812  MOV ECX,dword ptr [EDX + -0x70]
0049e815  CMP ECX,ESI
0049e817  JLE 0x0049e883
0049e819  MOV EDX,dword ptr [ESP + 0x34]
0049e81d  LEA ECX,[ECX + ECX*0x2]
0049e820  SHL ECX,0x4
0049e823  FLD float ptr [ECX + EDX*0x1 + 0x10]
0049e827  ADD ECX,EDX
0049e829  FLD float ptr [EAX + -0x3c]
0049e82c  FCHS
0049e82e  FSTP float ptr [ECX + 0x10]
0049e831  FCHS
0049e833  FSTP float ptr [EAX + -0x3c]
0049e836  FLD float ptr [ECX + 0x14]
0049e839  FLD float ptr [EAX + -0x38]
0049e83c  FCHS
0049e83e  FSTP float ptr [ECX + 0x14]
0049e841  MOV EDX,dword ptr [EAX + -0x34]
0049e844  FCHS
0049e846  FSTP float ptr [EAX + -0x38]
0049e849  FLD float ptr [ECX + 0x18]
0049e84c  MOV dword ptr [ECX + 0x18],EDX
0049e84f  MOV EDX,dword ptr [EAX + -0x30]
0049e852  FSTP float ptr [EAX + -0x34]
0049e855  FLD float ptr [ECX + 0x1c]
0049e858  MOV dword ptr [ECX + 0x1c],EDX
0049e85b  MOV EDX,dword ptr [EAX + -0x2c]
0049e85e  FSTP float ptr [EAX + -0x30]
0049e861  FLD float ptr [ECX + 0x20]
0049e864  MOV dword ptr [ECX + 0x20],EDX
0049e867  MOV EDX,dword ptr [EAX + -0x28]
0049e86a  FSTP float ptr [EAX + -0x2c]
0049e86d  FLD float ptr [ECX + 0x24]
0049e870  MOV dword ptr [ECX + 0x24],EDX
0049e873  FSTP float ptr [EAX + -0x28]
0049e876  FLD float ptr [ECX + 0x28]
0049e879  FLD float ptr [EAX + -0x24]
0049e87c  FCHS
0049e87e  FSTP float ptr [ECX + 0x28]
0049e881  JMP 0x0049e898
0049e883  JNZ 0x0049e89d
0049e885  FLD float ptr [EAX + -0x3c]
0049e888  FCHS
0049e88a  FSTP float ptr [EAX + -0x3c]
0049e88d  FLD float ptr [EAX + -0x38]
0049e890  FCHS
0049e892  FSTP float ptr [EAX + -0x38]
0049e895  FLD float ptr [EAX + -0x24]
0049e898  FCHS
0049e89a  FSTP float ptr [EAX + -0x24]
0049e89d  LEA EDX,[EDI + -0x1]
0049e8a0  MOV ECX,EDX
0049e8a2  AND ECX,0x1f
0049e8a5  MOV EBP,0x1
0049e8aa  SHL EBP,CL
0049e8ac  MOV ECX,EDX
0049e8ae  SAR ECX,0x5
0049e8b1  TEST dword ptr [EBX + ECX*0x4],EBP
0049e8b4  JZ 0x0049e946
0049e8ba  MOV ECX,dword ptr [ESP + 0x30]
0049e8be  MOV ECX,dword ptr [ECX]
0049e8c0  CMP ECX,EDX
0049e8c2  JLE 0x0049e92c
0049e8c4  MOV EDX,dword ptr [ESP + 0x34]
0049e8c8  LEA ECX,[ECX + ECX*0x2]
0049e8cb  SHL ECX,0x4
0049e8ce  FLD float ptr [ECX + EDX*0x1 + 0x10]
0049e8d2  ADD ECX,EDX
0049e8d4  FLD float ptr [EAX + -0xc]
0049e8d7  FCHS
0049e8d9  FSTP float ptr [ECX + 0x10]
0049e8dc  FCHS
0049e8de  FSTP float ptr [EAX + -0xc]
0049e8e1  FLD float ptr [ECX + 0x14]
0049e8e4  FLD float ptr [EAX + -0x8]
0049e8e7  FCHS
0049e8e9  FSTP float ptr [ECX + 0x14]
0049e8ec  MOV EDX,dword ptr [EAX + -0x4]
0049e8ef  FCHS
0049e8f1  FSTP float ptr [EAX + -0x8]
0049e8f4  FLD float ptr [ECX + 0x18]
0049e8f7  MOV dword ptr [ECX + 0x18],EDX
0049e8fa  MOV EDX,dword ptr [EAX]
0049e8fc  FSTP float ptr [EAX + -0x4]
0049e8ff  FLD float ptr [ECX + 0x1c]
0049e902  MOV dword ptr [ECX + 0x1c],EDX
0049e905  MOV EDX,dword ptr [EAX + 0x4]
0049e908  FSTP float ptr [EAX]
0049e90a  FLD float ptr [ECX + 0x20]
0049e90d  MOV dword ptr [ECX + 0x20],EDX
0049e910  MOV EDX,dword ptr [EAX + 0x8]
0049e913  FSTP float ptr [EAX + 0x4]
0049e916  FLD float ptr [ECX + 0x24]
0049e919  MOV dword ptr [ECX + 0x24],EDX
0049e91c  FSTP float ptr [EAX + 0x8]
0049e91f  FLD float ptr [ECX + 0x28]
0049e922  FLD float ptr [EAX + 0xc]
0049e925  FCHS
0049e927  FSTP float ptr [ECX + 0x28]
0049e92a  JMP 0x0049e941
0049e92c  JNZ 0x0049e946
0049e92e  FLD float ptr [EAX + -0xc]
0049e931  FCHS
0049e933  FSTP float ptr [EAX + -0xc]
0049e936  FLD float ptr [EAX + -0x8]
0049e939  FCHS
0049e93b  FSTP float ptr [EAX + -0x8]
0049e93e  FLD float ptr [EAX + 0xc]
0049e941  FCHS
0049e943  FSTP float ptr [EAX + 0xc]
0049e946  MOV ECX,EDI
0049e948  AND ECX,0x1f
0049e94b  MOV EDX,0x1
0049e950  SHL EDX,CL
0049e952  MOV ECX,EDI
0049e954  SAR ECX,0x5
0049e957  TEST dword ptr [EBX + ECX*0x4],EDX
0049e95a  JZ 0x0049e9ef
0049e960  MOV EDX,dword ptr [ESP + 0x30]
0049e964  MOV ECX,dword ptr [EDX + 0x70]
0049e967  CMP ECX,EDI
0049e969  JLE 0x0049e9d5
0049e96b  MOV EDX,dword ptr [ESP + 0x34]
0049e96f  LEA ECX,[ECX + ECX*0x2]
0049e972  SHL ECX,0x4
0049e975  FLD float ptr [ECX + EDX*0x1 + 0x10]
0049e979  ADD ECX,EDX
0049e97b  FLD float ptr [EAX + 0x24]
0049e97e  FCHS
0049e980  FSTP float ptr [ECX + 0x10]
0049e983  FCHS
0049e985  FSTP float ptr [EAX + 0x24]
0049e988  FLD float ptr [ECX + 0x14]
0049e98b  FLD float ptr [EAX + 0x28]
0049e98e  FCHS
0049e990  FSTP float ptr [ECX + 0x14]
0049e993  MOV EDX,dword ptr [EAX + 0x2c]
0049e996  FCHS
0049e998  FSTP float ptr [EAX + 0x28]
0049e99b  FLD float ptr [ECX + 0x18]
0049e99e  MOV dword ptr [ECX + 0x18],EDX
0049e9a1  MOV EDX,dword ptr [EAX + 0x30]
0049e9a4  FSTP float ptr [EAX + 0x2c]
0049e9a7  FLD float ptr [ECX + 0x1c]
0049e9aa  MOV dword ptr [ECX + 0x1c],EDX
0049e9ad  MOV EDX,dword ptr [EAX + 0x34]
0049e9b0  FSTP float ptr [EAX + 0x30]
0049e9b3  FLD float ptr [ECX + 0x20]
0049e9b6  MOV dword ptr [ECX + 0x20],EDX
0049e9b9  MOV EDX,dword ptr [EAX + 0x38]
0049e9bc  FSTP float ptr [EAX + 0x34]
0049e9bf  FLD float ptr [ECX + 0x24]
0049e9c2  MOV dword ptr [ECX + 0x24],EDX
0049e9c5  FSTP float ptr [EAX + 0x38]
0049e9c8  FLD float ptr [ECX + 0x28]
0049e9cb  FLD float ptr [EAX + 0x3c]
0049e9ce  FCHS
0049e9d0  FSTP float ptr [ECX + 0x28]
0049e9d3  JMP 0x0049e9ea
0049e9d5  JNZ 0x0049e9ef
0049e9d7  FLD float ptr [EAX + 0x24]
0049e9da  FCHS
0049e9dc  FSTP float ptr [EAX + 0x24]
0049e9df  FLD float ptr [EAX + 0x28]
0049e9e2  FCHS
0049e9e4  FSTP float ptr [EAX + 0x28]
0049e9e7  FLD float ptr [EAX + 0x3c]
0049e9ea  FCHS
0049e9ec  FSTP float ptr [EAX + 0x3c]
0049e9ef  LEA EDX,[EDI + 0x1]
0049e9f2  MOV ECX,EDX
0049e9f4  AND ECX,0x1f
0049e9f7  MOV EBP,0x1
0049e9fc  SHL EBP,CL
0049e9fe  MOV ECX,EDX
0049ea00  SAR ECX,0x5
0049ea03  TEST dword ptr [EBX + ECX*0x4],EBP
0049ea06  JZ 0x0049ea9e
0049ea0c  MOV ECX,dword ptr [ESP + 0x30]
0049ea10  MOV ECX,dword ptr [ECX + 0xe0]
0049ea16  CMP ECX,EDX
0049ea18  JLE 0x0049ea84
0049ea1a  MOV EDX,dword ptr [ESP + 0x34]
0049ea1e  LEA ECX,[ECX + ECX*0x2]
0049ea21  SHL ECX,0x4
0049ea24  FLD float ptr [ECX + EDX*0x1 + 0x10]
0049ea28  ADD ECX,EDX
0049ea2a  FLD float ptr [EAX + 0x54]
0049ea2d  FCHS
0049ea2f  FSTP float ptr [ECX + 0x10]
0049ea32  FCHS
0049ea34  FSTP float ptr [EAX + 0x54]
0049ea37  FLD float ptr [ECX + 0x14]
0049ea3a  FLD float ptr [EAX + 0x58]
0049ea3d  FCHS
0049ea3f  FSTP float ptr [ECX + 0x14]
0049ea42  MOV EDX,dword ptr [EAX + 0x5c]
0049ea45  FCHS
0049ea47  FSTP float ptr [EAX + 0x58]
0049ea4a  FLD float ptr [ECX + 0x18]
0049ea4d  MOV dword ptr [ECX + 0x18],EDX
0049ea50  MOV EDX,dword ptr [EAX + 0x60]
0049ea53  FSTP float ptr [EAX + 0x5c]
0049ea56  FLD float ptr [ECX + 0x1c]
0049ea59  MOV dword ptr [ECX + 0x1c],EDX
0049ea5c  MOV EDX,dword ptr [EAX + 0x64]
0049ea5f  FSTP float ptr [EAX + 0x60]
0049ea62  FLD float ptr [ECX + 0x20]
0049ea65  MOV dword ptr [ECX + 0x20],EDX
0049ea68  MOV EDX,dword ptr [EAX + 0x68]
0049ea6b  FSTP float ptr [EAX + 0x64]
0049ea6e  FLD float ptr [ECX + 0x24]
0049ea71  MOV dword ptr [ECX + 0x24],EDX
0049ea74  FSTP float ptr [EAX + 0x68]
0049ea77  FLD float ptr [ECX + 0x28]
0049ea7a  FLD float ptr [EAX + 0x6c]
0049ea7d  FCHS
0049ea7f  FSTP float ptr [ECX + 0x28]
0049ea82  JMP 0x0049ea99
0049ea84  JNZ 0x0049ea9e
0049ea86  FLD float ptr [EAX + 0x54]
0049ea89  FCHS
0049ea8b  FSTP float ptr [EAX + 0x54]
0049ea8e  FLD float ptr [EAX + 0x58]
0049ea91  FCHS
0049ea93  FSTP float ptr [EAX + 0x58]
0049ea96  FLD float ptr [EAX + 0x6c]
0049ea99  FCHS
0049ea9b  FSTP float ptr [EAX + 0x6c]
0049ea9e  ADD dword ptr [ESP + 0x30],0x1c0
0049eaa6  MOV EBP,dword ptr [ESP + 0x14]
0049eaaa  ADD ESI,0x4
0049eaad  LEA ECX,[EBP + -0x3]
0049eab0  ADD EAX,0xc0
0049eab5  ADD EDI,0x4
0049eab8  CMP ESI,ECX
0049eaba  JL 0x0049e7f4
0049eac0  CMP ESI,EBP
0049eac2  JGE 0x0049ee2f
0049eac8  MOV ECX,dword ptr [ESP + 0x34]
0049eacc  MOV EBX,dword ptr [ESP + 0x3c]
0049ead0  LEA EAX,[ESI + ESI*0x2]
0049ead3  SHL EAX,0x4
0049ead6  LEA EDX,[EAX + ECX*0x1 + 0x1c]
0049eada  MOV ECX,dword ptr [ESP + 0x10]
0049eade  MOV EAX,ESI
0049eae0  IMUL EAX,EAX,0x70
0049eae3  LEA EDI,[EAX + ECX*0x1 + 0x3c]
0049eae7  JMP 0x0049eaf0
0049eaf0  MOV ECX,ESI
0049eaf2  AND ECX,0x1f
0049eaf5  MOV EAX,0x1
0049eafa  SHL EAX,CL
0049eafc  MOV ECX,ESI
0049eafe  SAR ECX,0x5
0049eb01  TEST dword ptr [EBX + ECX*0x4],EAX
0049eb04  JZ 0x0049eb92
0049eb0a  MOV EAX,dword ptr [EDI]
0049eb0c  CMP EAX,ESI
0049eb0e  JLE 0x0049eb78
0049eb10  MOV ECX,dword ptr [ESP + 0x34]
0049eb14  LEA EAX,[EAX + EAX*0x2]
0049eb17  SHL EAX,0x4
0049eb1a  FLD float ptr [EAX + ECX*0x1 + 0x10]
0049eb1e  ADD EAX,ECX
0049eb20  FLD float ptr [EDX + -0xc]
0049eb23  FCHS
0049eb25  FSTP float ptr [EAX + 0x10]
0049eb28  FCHS
0049eb2a  FSTP float ptr [EDX + -0xc]
0049eb2d  FLD float ptr [EAX + 0x14]
0049eb30  FLD float ptr [EDX + -0x8]
0049eb33  FCHS
0049eb35  FSTP float ptr [EAX + 0x14]
0049eb38  MOV ECX,dword ptr [EDX + -0x4]
0049eb3b  FCHS
0049eb3d  FSTP float ptr [EDX + -0x8]
0049eb40  FLD float ptr [EAX + 0x18]
0049eb43  MOV dword ptr [EAX + 0x18],ECX
0049eb46  MOV ECX,dword ptr [EDX]
0049eb48  FSTP float ptr [EDX + -0x4]
0049eb4b  FLD float ptr [EAX + 0x1c]
0049eb4e  MOV dword ptr [EAX + 0x1c],ECX
0049eb51  MOV ECX,dword ptr [EDX + 0x4]
0049eb54  FSTP float ptr [EDX]
0049eb56  FLD float ptr [EAX + 0x20]
0049eb59  MOV dword ptr [EAX + 0x20],ECX
0049eb5c  MOV ECX,dword ptr [EDX + 0x8]
0049eb5f  FSTP float ptr [EDX + 0x4]
0049eb62  FLD float ptr [EAX + 0x24]
0049eb65  MOV dword ptr [EAX + 0x24],ECX
0049eb68  FSTP float ptr [EDX + 0x8]
0049eb6b  FLD float ptr [EAX + 0x28]
0049eb6e  FLD float ptr [EDX + 0xc]
0049eb71  FCHS
0049eb73  FSTP float ptr [EAX + 0x28]
0049eb76  JMP 0x0049eb8d
0049eb78  JNZ 0x0049eb92
0049eb7a  FLD float ptr [EDX + -0xc]
0049eb7d  FCHS
0049eb7f  FSTP float ptr [EDX + -0xc]
0049eb82  FLD float ptr [EDX + -0x8]
0049eb85  FCHS
0049eb87  FSTP float ptr [EDX + -0x8]
0049eb8a  FLD float ptr [EDX + 0xc]
0049eb8d  FCHS
0049eb8f  FSTP float ptr [EDX + 0xc]
0049eb92  INC ESI
0049eb93  ADD EDI,0x70
0049eb96  ADD EDX,0x30
0049eb99  CMP ESI,EBP
0049eb9b  JL 0x0049eaf0
0049eba1  JMP 0x0049ee2f
0049eba6  CMP EBP,0x4
0049eba9  JL 0x0049ed94
0049ebaf  MOV EDI,dword ptr [ESP + 0x10]
0049ebb3  ADD EDI,0xac
0049ebb9  MOV EBX,0x2
0049ebbe  ADD EAX,0x38
0049ebc1  MOV EBP,dword ptr [ESP + 0x3c]
0049ebc5  MOV ECX,ESI
0049ebc7  AND ECX,0x1f
0049ebca  MOV EDX,0x1
0049ebcf  SHL EDX,CL
0049ebd1  MOV ECX,ESI
0049ebd3  SAR ECX,0x5
0049ebd6  TEST dword ptr [EBP + ECX*0x4],EDX
0049ebda  JZ 0x0049ec2c
0049ebdc  MOV ECX,dword ptr [EDI + -0x70]
0049ebdf  MOV EDX,dword ptr [ESP + 0x34]
0049ebe3  LEA ECX,[ECX + ECX*0x2]
0049ebe6  SHL ECX,0x4
0049ebe9  ADD ECX,EDX
0049ebeb  MOV EDX,dword ptr [EAX + -0x38]
0049ebee  MOV dword ptr [ECX],EDX
0049ebf0  MOV EDX,dword ptr [EAX + -0x34]
0049ebf3  MOV dword ptr [ECX + 0x4],EDX
0049ebf6  MOV EDX,dword ptr [EAX + -0x30]
0049ebf9  MOV dword ptr [ECX + 0x8],EDX
0049ebfc  FLD float ptr [EAX + -0x28]
0049ebff  FCHS
0049ec01  FSTP float ptr [ECX + 0x10]
0049ec04  FLD float ptr [EAX + -0x24]
0049ec07  FCHS
0049ec09  FSTP float ptr [ECX + 0x14]
0049ec0c  MOV EDX,dword ptr [EAX + -0x20]
0049ec0f  MOV dword ptr [ECX + 0x18],EDX
0049ec12  MOV EDX,dword ptr [EAX + -0x1c]
0049ec15  MOV dword ptr [ECX + 0x1c],EDX
0049ec18  MOV EDX,dword ptr [EAX + -0x18]
0049ec1b  MOV dword ptr [ECX + 0x20],EDX
0049ec1e  MOV EDX,dword ptr [EAX + -0x14]
0049ec21  MOV dword ptr [ECX + 0x24],EDX
0049ec24  FLD float ptr [EAX + -0x10]
0049ec27  FCHS
0049ec29  FSTP float ptr [ECX + 0x28]
0049ec2c  LEA EDX,[EBX + -0x1]
0049ec2f  MOV ECX,EDX
0049ec31  AND ECX,0x1f
0049ec34  MOV EBP,0x1
0049ec39  SHL EBP,CL
0049ec3b  SAR EDX,0x5
0049ec3e  MOV ECX,EBP
0049ec40  MOV EBP,dword ptr [ESP + 0x3c]
0049ec44  TEST dword ptr [EBP + EDX*0x4],ECX
0049ec48  JZ 0x0049ec98
0049ec4a  MOV ECX,dword ptr [EDI]
0049ec4c  MOV EDX,dword ptr [ESP + 0x34]
0049ec50  LEA ECX,[ECX + ECX*0x2]
0049ec53  SHL ECX,0x4
0049ec56  ADD ECX,EDX
0049ec58  MOV EDX,dword ptr [EAX + -0x8]
0049ec5b  MOV dword ptr [ECX],EDX
0049ec5d  MOV EDX,dword ptr [EAX + -0x4]
0049ec60  MOV dword ptr [ECX + 0x4],EDX
0049ec63  MOV EDX,dword ptr [EAX]
0049ec65  MOV dword ptr [ECX + 0x8],EDX
0049ec68  FLD float ptr [EAX + 0x8]
0049ec6b  FCHS
0049ec6d  FSTP float ptr [ECX + 0x10]
0049ec70  FLD float ptr [EAX + 0xc]
0049ec73  FCHS
0049ec75  FSTP float ptr [ECX + 0x14]
0049ec78  MOV EDX,dword ptr [EAX + 0x10]
0049ec7b  MOV dword ptr [ECX + 0x18],EDX
0049ec7e  MOV EDX,dword ptr [EAX + 0x14]
0049ec81  MOV dword ptr [ECX + 0x1c],EDX
0049ec84  MOV EDX,dword ptr [EAX + 0x18]
0049ec87  MOV dword ptr [ECX + 0x20],EDX
0049ec8a  MOV EDX,dword ptr [EAX + 0x1c]
0049ec8d  MOV dword ptr [ECX + 0x24],EDX
0049ec90  FLD float ptr [EAX + 0x20]
0049ec93  FCHS
0049ec95  FSTP float ptr [ECX + 0x28]
0049ec98  MOV ECX,EBX
0049ec9a  AND ECX,0x1f
0049ec9d  MOV EDX,0x1
0049eca2  SHL EDX,CL
0049eca4  MOV ECX,EBX
0049eca6  SAR ECX,0x5
0049eca9  TEST dword ptr [EBP + ECX*0x4],EDX
0049ecad  JZ 0x0049ecff
0049ecaf  MOV ECX,dword ptr [EDI + 0x70]
0049ecb2  MOV EDX,dword ptr [ESP + 0x34]
0049ecb6  LEA ECX,[ECX + ECX*0x2]
0049ecb9  SHL ECX,0x4
0049ecbc  ADD ECX,EDX
0049ecbe  MOV EDX,dword ptr [EAX + 0x28]
0049ecc1  MOV dword ptr [ECX],EDX
0049ecc3  MOV EDX,dword ptr [EAX + 0x2c]
0049ecc6  MOV dword ptr [ECX + 0x4],EDX
0049ecc9  MOV EDX,dword ptr [EAX + 0x30]
0049eccc  MOV dword ptr [ECX + 0x8],EDX
0049eccf  FLD float ptr [EAX + 0x38]
0049ecd2  FCHS
0049ecd4  FSTP float ptr [ECX + 0x10]
0049ecd7  FLD float ptr [EAX + 0x3c]
0049ecda  FCHS
0049ecdc  FSTP float ptr [ECX + 0x14]
0049ecdf  MOV EDX,dword ptr [EAX + 0x40]
0049ece2  MOV dword ptr [ECX + 0x18],EDX
0049ece5  MOV EDX,dword ptr [EAX + 0x44]
0049ece8  MOV dword ptr [ECX + 0x1c],EDX
0049eceb  MOV EDX,dword ptr [EAX + 0x48]
0049ecee  MOV dword ptr [ECX + 0x20],EDX
0049ecf1  MOV EDX,dword ptr [EAX + 0x4c]
0049ecf4  MOV dword ptr [ECX + 0x24],EDX
0049ecf7  FLD float ptr [EAX + 0x50]
0049ecfa  FCHS
0049ecfc  FSTP float ptr [ECX + 0x28]
0049ecff  LEA EDX,[EBX + 0x1]
0049ed02  MOV ECX,EDX
0049ed04  AND ECX,0x1f
0049ed07  MOV EBP,0x1
0049ed0c  SHL EBP,CL
0049ed0e  MOV ECX,dword ptr [ESP + 0x3c]
0049ed12  SAR EDX,0x5
0049ed15  TEST dword ptr [ECX + EDX*0x4],EBP
0049ed18  JZ 0x0049ed70
0049ed1a  MOV ECX,dword ptr [EDI + 0xe0]
0049ed20  MOV EDX,dword ptr [ESP + 0x34]
0049ed24  LEA ECX,[ECX + ECX*0x2]
0049ed27  SHL ECX,0x4
0049ed2a  ADD ECX,EDX
0049ed2c  MOV EDX,dword ptr [EAX + 0x58]
0049ed2f  MOV dword ptr [ECX],EDX
0049ed31  MOV EDX,dword ptr [EAX + 0x5c]
0049ed34  MOV dword ptr [ECX + 0x4],EDX
0049ed37  MOV EDX,dword ptr [EAX + 0x60]
0049ed3a  MOV dword ptr [ECX + 0x8],EDX
0049ed3d  FLD float ptr [EAX + 0x68]
0049ed40  FCHS
0049ed42  FSTP float ptr [ECX + 0x10]
0049ed45  FLD float ptr [EAX + 0x6c]
0049ed48  FCHS
0049ed4a  FSTP float ptr [ECX + 0x14]
0049ed4d  MOV EDX,dword ptr [EAX + 0x70]
0049ed50  MOV dword ptr [ECX + 0x18],EDX
0049ed53  MOV EDX,dword ptr [EAX + 0x74]
0049ed56  MOV dword ptr [ECX + 0x1c],EDX
0049ed59  MOV EDX,dword ptr [EAX + 0x78]
0049ed5c  MOV dword ptr [ECX + 0x20],EDX
0049ed5f  MOV EDX,dword ptr [EAX + 0x7c]
0049ed62  MOV dword ptr [ECX + 0x24],EDX
0049ed65  FLD float ptr [EAX + 0x80]
0049ed6b  FCHS
0049ed6d  FSTP float ptr [ECX + 0x28]
0049ed70  MOV EBP,dword ptr [ESP + 0x14]
0049ed74  ADD ESI,0x4
0049ed77  LEA ECX,[EBP + -0x3]
0049ed7a  ADD EAX,0xc0
0049ed7f  ADD EBX,0x4
0049ed82  ADD EDI,0x1c0
0049ed88  CMP ESI,ECX
0049ed8a  JL 0x0049ebc1
0049ed90  MOV EAX,dword ptr [ESP + 0x30]
0049ed94  CMP ESI,EBP
0049ed96  JGE 0x0049ee2f
0049ed9c  MOV EBX,dword ptr [ESP + 0x3c]
0049eda0  LEA ECX,[ESI + ESI*0x2]
0049eda3  SHL ECX,0x4
0049eda6  LEA EDX,[ECX + EAX*0x1 + 0x8]
0049edaa  MOV ECX,dword ptr [ESP + 0x10]
0049edae  MOV EAX,ESI
0049edb0  IMUL EAX,EAX,0x70
0049edb3  LEA EDI,[EAX + ECX*0x1 + 0x3c]
0049edb7  JMP 0x0049edc0
0049edc0  MOV ECX,ESI
0049edc2  AND ECX,0x1f
0049edc5  MOV EAX,0x1
0049edca  SHL EAX,CL
0049edcc  MOV ECX,ESI
0049edce  SAR ECX,0x5
0049edd1  TEST dword ptr [EBX + ECX*0x4],EAX
0049edd4  JZ 0x0049ee24
0049edd6  MOV EAX,dword ptr [EDI]
0049edd8  MOV ECX,dword ptr [ESP + 0x34]
0049eddc  LEA EAX,[EAX + EAX*0x2]
0049eddf  SHL EAX,0x4
0049ede2  ADD EAX,ECX
0049ede4  MOV ECX,dword ptr [EDX + -0x8]
0049ede7  MOV dword ptr [EAX],ECX
0049ede9  MOV ECX,dword ptr [EDX + -0x4]
0049edec  MOV dword ptr [EAX + 0x4],ECX
0049edef  MOV ECX,dword ptr [EDX]
0049edf1  MOV dword ptr [EAX + 0x8],ECX
0049edf4  FLD float ptr [EDX + 0x8]
0049edf7  FCHS
0049edf9  FSTP float ptr [EAX + 0x10]
0049edfc  FLD float ptr [EDX + 0xc]
0049edff  FCHS
0049ee01  FSTP float ptr [EAX + 0x14]
0049ee04  MOV ECX,dword ptr [EDX + 0x10]
0049ee07  MOV dword ptr [EAX + 0x18],ECX
0049ee0a  MOV ECX,dword ptr [EDX + 0x14]
0049ee0d  MOV dword ptr [EAX + 0x1c],ECX
0049ee10  MOV ECX,dword ptr [EDX + 0x18]
0049ee13  MOV dword ptr [EAX + 0x20],ECX
0049ee16  MOV ECX,dword ptr [EDX + 0x1c]
0049ee19  MOV dword ptr [EAX + 0x24],ECX
0049ee1c  FLD float ptr [EDX + 0x20]
0049ee1f  FCHS
0049ee21  FSTP float ptr [EAX + 0x28]
0049ee24  INC ESI
0049ee25  ADD EDX,0x30
0049ee28  ADD EDI,0x70
0049ee2b  CMP ESI,EBP
0049ee2d  JL 0x0049edc0
0049ee2f  MOV AL,byte ptr [ESP + 0x38]
0049ee33  TEST AL,AL
0049ee35  JNZ 0x0049f404
0049ee3b  MOV EAX,dword ptr [ESP + 0x34]
0049ee3f  LEA ECX,[EAX + 0x10]
0049ee42  MOV EDX,ECX
0049ee44  MOV ESI,dword ptr [EDX]
0049ee46  MOV dword ptr [ESP + 0x1c],ESI
0049ee4a  FLD float ptr [ESP + 0x1c]
0049ee4e  MOV ESI,dword ptr [EDX + 0x4]
0049ee51  FCHS
0049ee53  MOV dword ptr [ESP + 0x20],ESI
0049ee57  MOV ESI,dword ptr [EDX + 0x8]
0049ee5a  MOV EDX,dword ptr [EDX + 0xc]
0049ee5d  FSTP float ptr [EAX + 0x18]
0049ee60  FLD float ptr [ESP + 0x20]
0049ee64  POP EDI
0049ee65  FCHS
0049ee67  MOV dword ptr [ESP + 0x24],EDX
0049ee6b  FSTP float ptr [EAX + 0x1c]
0049ee6e  MOV EDX,ESI
0049ee70  FLD float ptr [EAX + 0x20]
0049ee73  MOV dword ptr [ESP + 0x20],ESI
0049ee77  FCHS
0049ee79  POP ESI
0049ee7a  FSTP float ptr [EAX + 0x20]
0049ee7d  MOV dword ptr [ECX],EDX
0049ee7f  FLD float ptr [EAX + 0x28]
0049ee82  MOV ECX,dword ptr [ESP + 0x20]
0049ee86  FCHS
0049ee88  POP EBP
0049ee89  FSTP float ptr [EAX + 0x28]
0049ee8c  MOV dword ptr [EAX + 0x14],ECX
0049ee8f  POP EBX
0049ee90  ADD ESP,0x1c
0049ee93  RET 0x10
0049ee96  MOV ESI,dword ptr [ESP + 0x34]
0049ee9a  CMP EAX,ESI
0049ee9c  JNZ 0x0049f1c8
0049eea2  XOR EDX,EDX
0049eea4  CMP EBP,0x4
0049eea7  JL 0x0049f110
0049eead  MOV EDI,dword ptr [ESP + 0x10]
0049eeb1  MOV dword ptr [ESP + 0x34],0x2
0049eeb9  ADD EDI,0xac
0049eebf  LEA EAX,[ESI + 0x4c]
0049eec2  MOV ECX,dword ptr [EDI + -0x70]
0049eec5  CMP ECX,EDX
0049eec7  JLE 0x0049ef2f
0049eec9  LEA ECX,[ECX + ECX*0x2]
0049eecc  SHL ECX,0x4
0049eecf  FLD float ptr [ECX + ESI*0x1 + 0x10]
0049eed3  ADD ECX,ESI
0049eed5  FLD float ptr [EAX + -0x3c]
0049eed8  FCHS
0049eeda  FSTP float ptr [ECX + 0x10]
0049eedd  FCHS
0049eedf  FSTP float ptr [EAX + -0x3c]
0049eee2  FLD float ptr [ECX + 0x14]
0049eee5  FLD float ptr [EAX + -0x38]
0049eee8  FCHS
0049eeea  FSTP float ptr [ECX + 0x14]
0049eeed  MOV EBX,dword ptr [EAX + -0x34]
0049eef0  FCHS
0049eef2  FSTP float ptr [EAX + -0x38]
0049eef5  FLD float ptr [ECX + 0x18]
0049eef8  MOV dword ptr [ECX + 0x18],EBX
0049eefb  MOV EBX,dword ptr [EAX + -0x30]
0049eefe  FSTP float ptr [EAX + -0x34]
0049ef01  FLD float ptr [ECX + 0x1c]
0049ef04  MOV dword ptr [ECX + 0x1c],EBX
0049ef07  MOV EBX,dword ptr [EAX + -0x2c]
0049ef0a  FSTP float ptr [EAX + -0x30]
0049ef0d  FLD float ptr [ECX + 0x20]
0049ef10  MOV dword ptr [ECX + 0x20],EBX
0049ef13  MOV EBX,dword ptr [EAX + -0x28]
0049ef16  FSTP float ptr [EAX + -0x2c]
0049ef19  FLD float ptr [ECX + 0x24]
0049ef1c  MOV dword ptr [ECX + 0x24],EBX
0049ef1f  FSTP float ptr [EAX + -0x28]
0049ef22  FLD float ptr [ECX + 0x28]
0049ef25  FLD float ptr [EAX + -0x24]
0049ef28  FCHS
0049ef2a  FSTP float ptr [ECX + 0x28]
0049ef2d  JMP 0x0049ef44
0049ef2f  JNZ 0x0049ef49
0049ef31  FLD float ptr [EAX + -0x3c]
0049ef34  FCHS
0049ef36  FSTP float ptr [EAX + -0x3c]
0049ef39  FLD float ptr [EAX + -0x38]
0049ef3c  FCHS
0049ef3e  FSTP float ptr [EAX + -0x38]
0049ef41  FLD float ptr [EAX + -0x24]
0049ef44  FCHS
0049ef46  FSTP float ptr [EAX + -0x24]
0049ef49  MOV EBX,dword ptr [ESP + 0x34]
0049ef4d  MOV ECX,dword ptr [EDI]
0049ef4f  DEC EBX
0049ef50  CMP ECX,EBX
0049ef52  JLE 0x0049efb8
0049ef54  LEA ECX,[ECX + ECX*0x2]
0049ef57  SHL ECX,0x4
0049ef5a  FLD float ptr [ECX + ESI*0x1 + 0x10]
0049ef5e  ADD ECX,ESI
0049ef60  FLD float ptr [EAX + -0xc]
0049ef63  FCHS
0049ef65  FSTP float ptr [ECX + 0x10]
0049ef68  FCHS
0049ef6a  FSTP float ptr [EAX + -0xc]
0049ef6d  FLD float ptr [ECX + 0x14]
0049ef70  FLD float ptr [EAX + -0x8]
0049ef73  FCHS
0049ef75  FSTP float ptr [ECX + 0x14]
0049ef78  MOV EBX,dword ptr [EAX + -0x4]
0049ef7b  FCHS
0049ef7d  FSTP float ptr [EAX + -0x8]
0049ef80  FLD float ptr [ECX + 0x18]
0049ef83  MOV dword ptr [ECX + 0x18],EBX
0049ef86  MOV EBX,dword ptr [EAX]
0049ef88  FSTP float ptr [EAX + -0x4]
0049ef8b  FLD float ptr [ECX + 0x1c]
0049ef8e  MOV dword ptr [ECX + 0x1c],EBX
0049ef91  MOV EBX,dword ptr [EAX + 0x4]
0049ef94  FSTP float ptr [EAX]
0049ef96  FLD float ptr [ECX + 0x20]
0049ef99  MOV dword ptr [ECX + 0x20],EBX
0049ef9c  MOV EBX,dword ptr [EAX + 0x8]
0049ef9f  FSTP float ptr [EAX + 0x4]
0049efa2  FLD float ptr [ECX + 0x24]
0049efa5  MOV dword ptr [ECX + 0x24],EBX
0049efa8  FSTP float ptr [EAX + 0x8]
0049efab  FLD float ptr [ECX + 0x28]
0049efae  FLD float ptr [EAX + 0xc]
0049efb1  FCHS
0049efb3  FSTP float ptr [ECX + 0x28]
0049efb6  JMP 0x0049efcd
0049efb8  JNZ 0x0049efd2
0049efba  FLD float ptr [EAX + -0xc]
0049efbd  FCHS
0049efbf  FSTP float ptr [EAX + -0xc]
0049efc2  FLD float ptr [EAX + -0x8]
0049efc5  FCHS
0049efc7  FSTP float ptr [EAX + -0x8]
0049efca  FLD float ptr [EAX + 0xc]
0049efcd  FCHS
0049efcf  FSTP float ptr [EAX + 0xc]
0049efd2  MOV ECX,dword ptr [EDI + 0x70]
0049efd5  MOV EBX,dword ptr [ESP + 0x34]
0049efd9  CMP ECX,EBX
0049efdb  JLE 0x0049f047
0049efdd  LEA ECX,[ECX + ECX*0x2]
0049efe0  SHL ECX,0x4
0049efe3  FLD float ptr [ECX + ESI*0x1 + 0x10]
0049efe7  ADD ECX,ESI
0049efe9  FLD float ptr [EAX + 0x24]
0049efec  FCHS
0049efee  FSTP float ptr [ECX + 0x10]
0049eff1  FCHS
0049eff3  FSTP float ptr [EAX + 0x24]
0049eff6  FLD float ptr [ECX + 0x14]
0049eff9  FLD float ptr [EAX + 0x28]
0049effc  FCHS
0049effe  FSTP float ptr [ECX + 0x14]
0049f001  MOV EBX,dword ptr [EAX + 0x2c]
0049f004  FCHS
0049f006  FSTP float ptr [EAX + 0x28]
0049f009  FLD float ptr [ECX + 0x18]
0049f00c  MOV dword ptr [ECX + 0x18],EBX
0049f00f  MOV EBX,dword ptr [EAX + 0x30]
0049f012  FSTP float ptr [EAX + 0x2c]
0049f015  FLD float ptr [ECX + 0x1c]
0049f018  MOV dword ptr [ECX + 0x1c],EBX
0049f01b  MOV EBX,dword ptr [EAX + 0x34]
0049f01e  FSTP float ptr [EAX + 0x30]
0049f021  FLD float ptr [ECX + 0x20]
0049f024  MOV dword ptr [ECX + 0x20],EBX
0049f027  MOV EBX,dword ptr [EAX + 0x38]
0049f02a  FSTP float ptr [EAX + 0x34]
0049f02d  FLD float ptr [ECX + 0x24]
0049f030  MOV dword ptr [ECX + 0x24],EBX
0049f033  MOV EBX,dword ptr [ESP + 0x34]
0049f037  FSTP float ptr [EAX + 0x38]
0049f03a  FLD float ptr [ECX + 0x28]
0049f03d  FLD float ptr [EAX + 0x3c]
0049f040  FCHS
0049f042  FSTP float ptr [ECX + 0x28]
0049f045  JMP 0x0049f05c
0049f047  JNZ 0x0049f061
0049f049  FLD float ptr [EAX + 0x24]
0049f04c  FCHS
0049f04e  FSTP float ptr [EAX + 0x24]
0049f051  FLD float ptr [EAX + 0x28]
0049f054  FCHS
0049f056  FSTP float ptr [EAX + 0x28]
0049f059  FLD float ptr [EAX + 0x3c]
0049f05c  FCHS
0049f05e  FSTP float ptr [EAX + 0x3c]
0049f061  MOV ECX,dword ptr [EDI + 0xe0]
0049f067  INC EBX
0049f068  CMP ECX,EBX
0049f06a  JLE 0x0049f0d2
0049f06c  LEA ECX,[ECX + ECX*0x2]
0049f06f  SHL ECX,0x4
0049f072  FLD float ptr [ECX + ESI*0x1 + 0x10]
0049f076  ADD ECX,ESI
0049f078  FLD float ptr [EAX + 0x54]
0049f07b  FCHS
0049f07d  FSTP float ptr [ECX + 0x10]
0049f080  FCHS
0049f082  FSTP float ptr [EAX + 0x54]
0049f085  FLD float ptr [ECX + 0x14]
0049f088  FLD float ptr [EAX + 0x58]
0049f08b  FCHS
0049f08d  FSTP float ptr [ECX + 0x14]
0049f090  MOV EBX,dword ptr [EAX + 0x5c]
0049f093  FCHS
0049f095  FSTP float ptr [EAX + 0x58]
0049f098  FLD float ptr [ECX + 0x18]
0049f09b  MOV dword ptr [ECX + 0x18],EBX
0049f09e  MOV EBX,dword ptr [EAX + 0x60]
0049f0a1  FSTP float ptr [EAX + 0x5c]
0049f0a4  FLD float ptr [ECX + 0x1c]
0049f0a7  MOV dword ptr [ECX + 0x1c],EBX
0049f0aa  MOV EBX,dword ptr [EAX + 0x64]
0049f0ad  FSTP float ptr [EAX + 0x60]
0049f0b0  FLD float ptr [ECX + 0x20]
0049f0b3  MOV dword ptr [ECX + 0x20],EBX
0049f0b6  MOV EBX,dword ptr [EAX + 0x68]
0049f0b9  FSTP float ptr [EAX + 0x64]
0049f0bc  FLD float ptr [ECX + 0x24]
0049f0bf  MOV dword ptr [ECX + 0x24],EBX
0049f0c2  FSTP float ptr [EAX + 0x68]
0049f0c5  FLD float ptr [ECX + 0x28]
0049f0c8  FLD float ptr [EAX + 0x6c]
0049f0cb  FCHS
0049f0cd  FSTP float ptr [ECX + 0x28]
0049f0d0  JMP 0x0049f0e7
0049f0d2  JNZ 0x0049f0ec
0049f0d4  FLD float ptr [EAX + 0x54]
0049f0d7  FCHS
0049f0d9  FSTP float ptr [EAX + 0x54]
0049f0dc  FLD float ptr [EAX + 0x58]
0049f0df  FCHS
0049f0e1  FSTP float ptr [EAX + 0x58]
0049f0e4  FLD float ptr [EAX + 0x6c]
0049f0e7  FCHS
0049f0e9  FSTP float ptr [EAX + 0x6c]
0049f0ec  MOV EBX,dword ptr [ESP + 0x34]
0049f0f0  ADD EDX,0x4
0049f0f3  ADD EBX,0x4
0049f0f6  LEA ECX,[EBP + -0x3]
0049f0f9  ADD EAX,0xc0
0049f0fe  ADD EDI,0x1c0
0049f104  CMP EDX,ECX
0049f106  MOV dword ptr [ESP + 0x34],EBX
0049f10a  JL 0x0049eec2
0049f110  CMP EDX,EBP
0049f112  JGE 0x0049f3b3
0049f118  MOV EDI,dword ptr [ESP + 0x10]
0049f11c  LEA EAX,[EDX + EDX*0x2]
0049f11f  SHL EAX,0x4
0049f122  LEA ECX,[EAX + ESI*0x1 + 0x1c]
0049f126  MOV EAX,EDX
0049f128  IMUL EAX,EAX,0x70
0049f12b  LEA EDI,[EAX + EDI*0x1 + 0x3c]
0049f12f  NOP
0049f130  MOV EAX,dword ptr [EDI]
0049f132  CMP EAX,EDX
0049f134  JLE 0x0049f19a
0049f136  LEA EAX,[EAX + EAX*0x2]
0049f139  SHL EAX,0x4
0049f13c  FLD float ptr [EAX + ESI*0x1 + 0x10]
0049f140  ADD EAX,ESI
0049f142  FLD float ptr [ECX + -0xc]
0049f145  FCHS
0049f147  FSTP float ptr [EAX + 0x10]
0049f14a  FCHS
0049f14c  FSTP float ptr [ECX + -0xc]
0049f14f  FLD float ptr [EAX + 0x14]
0049f152  FLD float ptr [ECX + -0x8]
0049f155  FCHS
0049f157  FSTP float ptr [EAX + 0x14]
0049f15a  MOV EBX,dword ptr [ECX + -0x4]
0049f15d  FCHS
0049f15f  FSTP float ptr [ECX + -0x8]
0049f162  FLD float ptr [EAX + 0x18]
0049f165  MOV dword ptr [EAX + 0x18],EBX
0049f168  MOV EBX,dword ptr [ECX]
0049f16a  FSTP float ptr [ECX + -0x4]
0049f16d  FLD float ptr [EAX + 0x1c]
0049f170  MOV dword ptr [EAX + 0x1c],EBX
0049f173  MOV EBX,dword ptr [ECX + 0x4]
0049f176  FSTP float ptr [ECX]
0049f178  FLD float ptr [EAX + 0x20]
0049f17b  MOV dword ptr [EAX + 0x20],EBX
0049f17e  MOV EBX,dword ptr [ECX + 0x8]
0049f181  FSTP float ptr [ECX + 0x4]
0049f184  FLD float ptr [EAX + 0x24]
0049f187  MOV dword ptr [EAX + 0x24],EBX
0049f18a  FSTP float ptr [ECX + 0x8]
0049f18d  FLD float ptr [EAX + 0x28]
0049f190  FLD float ptr [ECX + 0xc]
0049f193  FCHS
0049f195  FSTP float ptr [EAX + 0x28]
0049f198  JMP 0x0049f1af
0049f19a  JNZ 0x0049f1b4
0049f19c  FLD float ptr [ECX + -0xc]
0049f19f  FCHS
0049f1a1  FSTP float ptr [ECX + -0xc]
0049f1a4  FLD float ptr [ECX + -0x8]
0049f1a7  FCHS
0049f1a9  FSTP float ptr [ECX + -0x8]
0049f1ac  FLD float ptr [ECX + 0xc]
0049f1af  FCHS
0049f1b1  FSTP float ptr [ECX + 0xc]
0049f1b4  INC EDX
0049f1b5  ADD EDI,0x70
0049f1b8  ADD ECX,0x30
0049f1bb  CMP EDX,EBP
0049f1bd  JL 0x0049f130
0049f1c3  JMP 0x0049f3b3
0049f1c8  XOR EBX,EBX
0049f1ca  CMP EBP,0x4
0049f1cd  JL 0x0049f340
0049f1d3  MOV EDX,dword ptr [ESP + 0x10]
0049f1d7  LEA EDI,[EBP + -0x4]
0049f1da  SHR EDI,0x2
0049f1dd  ADD EDX,0xac
0049f1e3  ADD EAX,0x38
0049f1e6  INC EDI
0049f1e7  LEA EBX,[EDI*0x4 + 0x0]
0049f1ee  MOV EDI,EDI
0049f1f0  MOV ECX,dword ptr [EDX + -0x70]
0049f1f3  MOV EBP,dword ptr [EAX + -0x38]
0049f1f6  LEA ECX,[ECX + ECX*0x2]
0049f1f9  SHL ECX,0x4
0049f1fc  MOV dword ptr [ECX + ESI*0x1],EBP
0049f1ff  MOV EBP,dword ptr [EAX + -0x34]
0049f202  MOV dword ptr [ECX + ESI*0x1 + 0x4],EBP
0049f206  MOV EBP,dword ptr [EAX + -0x30]
0049f209  MOV dword ptr [ECX + ESI*0x1 + 0x8],EBP
0049f20d  FLD float ptr [EAX + -0x28]
0049f210  ADD ECX,ESI
0049f212  FCHS
0049f214  FSTP float ptr [ECX + 0x10]
0049f217  FLD float ptr [EAX + -0x24]
0049f21a  FCHS
0049f21c  FSTP float ptr [ECX + 0x14]
0049f21f  MOV EBP,dword ptr [EAX + -0x20]
0049f222  MOV dword ptr [ECX + 0x18],EBP
0049f225  MOV EBP,dword ptr [EAX + -0x1c]
0049f228  MOV dword ptr [ECX + 0x1c],EBP
0049f22b  MOV EBP,dword ptr [EAX + -0x18]
0049f22e  MOV dword ptr [ECX + 0x20],EBP
0049f231  MOV EBP,dword ptr [EAX + -0x14]
0049f234  MOV dword ptr [ECX + 0x24],EBP
0049f237  FLD float ptr [EAX + -0x10]
0049f23a  FCHS
0049f23c  FSTP float ptr [ECX + 0x28]
0049f23f  MOV ECX,dword ptr [EDX]
0049f241  MOV EBP,dword ptr [EAX + -0x8]
0049f244  LEA ECX,[ECX + ECX*0x2]
0049f247  SHL ECX,0x4
0049f24a  MOV dword ptr [ECX + ESI*0x1],EBP
0049f24d  MOV EBP,dword ptr [EAX + -0x4]
0049f250  MOV dword ptr [ECX + ESI*0x1 + 0x4],EBP
0049f254  MOV EBP,dword ptr [EAX]
0049f256  ADD ECX,ESI
0049f258  MOV dword ptr [ECX + 0x8],EBP
0049f25b  FLD float ptr [EAX + 0x8]
0049f25e  FCHS
0049f260  FSTP float ptr [ECX + 0x10]
0049f263  FLD float ptr [EAX + 0xc]
0049f266  FCHS
0049f268  FSTP float ptr [ECX + 0x14]
0049f26b  MOV EBP,dword ptr [EAX + 0x10]
0049f26e  MOV dword ptr [ECX + 0x18],EBP
0049f271  MOV EBP,dword ptr [EAX + 0x14]
0049f274  MOV dword ptr [ECX + 0x1c],EBP
0049f277  MOV EBP,dword ptr [EAX + 0x18]
0049f27a  MOV dword ptr [ECX + 0x20],EBP
0049f27d  MOV EBP,dword ptr [EAX + 0x1c]
0049f280  MOV dword ptr [ECX + 0x24],EBP
0049f283  FLD float ptr [EAX + 0x20]
0049f286  FCHS
0049f288  FSTP float ptr [ECX + 0x28]
0049f28b  MOV ECX,dword ptr [EDX + 0x70]
0049f28e  MOV EBP,dword ptr [EAX + 0x28]
0049f291  LEA ECX,[ECX + ECX*0x2]
0049f294  SHL ECX,0x4
0049f297  ADD ECX,ESI
0049f299  MOV dword ptr [ECX],EBP
0049f29b  MOV EBP,dword ptr [EAX + 0x2c]
0049f29e  MOV dword ptr [ECX + 0x4],EBP
0049f2a1  MOV EBP,dword ptr [EAX + 0x30]
0049f2a4  MOV dword ptr [ECX + 0x8],EBP
0049f2a7  FLD float ptr [EAX + 0x38]
0049f2aa  FCHS
0049f2ac  FSTP float ptr [ECX + 0x10]
0049f2af  FLD float ptr [EAX + 0x3c]
0049f2b2  FCHS
0049f2b4  FSTP float ptr [ECX + 0x14]
0049f2b7  MOV EBP,dword ptr [EAX + 0x40]
0049f2ba  MOV dword ptr [ECX + 0x18],EBP
0049f2bd  MOV EBP,dword ptr [EAX + 0x44]
0049f2c0  MOV dword ptr [ECX + 0x1c],EBP
0049f2c3  MOV EBP,dword ptr [EAX + 0x48]
0049f2c6  MOV dword ptr [ECX + 0x20],EBP
0049f2c9  MOV EBP,dword ptr [EAX + 0x4c]
0049f2cc  MOV dword ptr [ECX + 0x24],EBP
0049f2cf  FLD float ptr [EAX + 0x50]
0049f2d2  FCHS
0049f2d4  FSTP float ptr [ECX + 0x28]
0049f2d7  MOV ECX,dword ptr [EDX + 0xe0]
0049f2dd  MOV EBP,dword ptr [EAX + 0x58]
0049f2e0  LEA ECX,[ECX + ECX*0x2]
0049f2e3  SHL ECX,0x4
0049f2e6  ADD ECX,ESI
0049f2e8  MOV dword ptr [ECX],EBP
0049f2ea  MOV EBP,dword ptr [EAX + 0x5c]
0049f2ed  MOV dword ptr [ECX + 0x4],EBP
0049f2f0  MOV EBP,dword ptr [EAX + 0x60]
0049f2f3  MOV dword ptr [ECX + 0x8],EBP
0049f2f6  FLD float ptr [EAX + 0x68]
0049f2f9  FCHS
0049f2fb  ADD EAX,0xc0
0049f300  FSTP float ptr [ECX + 0x10]
0049f303  ADD EDX,0x1c0
0049f309  DEC EDI
0049f30a  FLD float ptr [EAX + -0x54]
0049f30d  FCHS
0049f30f  FSTP float ptr [ECX + 0x14]
0049f312  MOV EBP,dword ptr [EAX + -0x50]
0049f315  MOV dword ptr [ECX + 0x18],EBP
0049f318  MOV EBP,dword ptr [EAX + -0x4c]
0049f31b  MOV dword ptr [ECX + 0x1c],EBP
0049f31e  MOV EBP,dword ptr [EAX + -0x48]
0049f321  MOV dword ptr [ECX + 0x20],EBP
0049f324  MOV EBP,dword ptr [EAX + -0x44]
0049f327  MOV dword ptr [ECX + 0x24],EBP
0049f32a  FLD float ptr [EAX + -0x40]
0049f32d  FCHS
0049f32f  FSTP float ptr [ECX + 0x28]
0049f332  JNZ 0x0049f1f0
0049f338  MOV EAX,dword ptr [ESP + 0x30]
0049f33c  MOV EBP,dword ptr [ESP + 0x14]
0049f340  CMP EBX,EBP
0049f342  JGE 0x0049f3b3
0049f344  MOV EDX,EBX
0049f346  IMUL EDX,EDX,0x70
0049f349  LEA ECX,[EBX + EBX*0x2]
0049f34c  SHL ECX,0x4
0049f34f  LEA ECX,[ECX + EAX*0x1 + 0x8]
0049f353  MOV EAX,dword ptr [ESP + 0x10]
0049f357  LEA EDX,[EDX + EAX*0x1 + 0x3c]
0049f35b  SUB EBP,EBX
0049f35d  LEA ECX,[ECX]
0049f360  MOV EAX,dword ptr [EDX]
0049f362  MOV EDI,dword ptr [ECX + -0x8]
0049f365  LEA EAX,[EAX + EAX*0x2]
0049f368  SHL EAX,0x4
0049f36b  ADD EAX,ESI
0049f36d  MOV dword ptr [EAX],EDI
0049f36f  MOV EDI,dword ptr [ECX + -0x4]
0049f372  MOV dword ptr [EAX + 0x4],EDI
0049f375  MOV EDI,dword ptr [ECX]
0049f377  MOV dword ptr [EAX + 0x8],EDI
0049f37a  FLD float ptr [ECX + 0x8]
0049f37d  FCHS
0049f37f  ADD ECX,0x30
0049f382  FSTP float ptr [EAX + 0x10]
0049f385  ADD EDX,0x70
0049f388  DEC EBP
0049f389  FLD float ptr [ECX + -0x24]
0049f38c  FCHS
0049f38e  FSTP float ptr [EAX + 0x14]
0049f391  MOV EDI,dword ptr [ECX + -0x20]
0049f394  MOV dword ptr [EAX + 0x18],EDI
0049f397  MOV EDI,dword ptr [ECX + -0x1c]
0049f39a  MOV dword ptr [EAX + 0x1c],EDI
0049f39d  MOV EDI,dword ptr [ECX + -0x18]
0049f3a0  MOV dword ptr [EAX + 0x20],EDI
0049f3a3  MOV EDI,dword ptr [ECX + -0x14]
0049f3a6  MOV dword ptr [EAX + 0x24],EDI
0049f3a9  FLD float ptr [ECX + -0x10]
0049f3ac  FCHS
0049f3ae  FSTP float ptr [EAX + 0x28]
0049f3b1  JNZ 0x0049f360
0049f3b3  MOV AL,byte ptr [ESP + 0x38]
0049f3b7  TEST AL,AL
0049f3b9  JNZ 0x0049f404
0049f3bb  LEA EAX,[ESI + 0x10]
0049f3be  MOV ECX,EAX
0049f3c0  MOV EDX,dword ptr [ECX]
0049f3c2  MOV dword ptr [ESP + 0x1c],EDX
0049f3c6  FLD float ptr [ESP + 0x1c]
0049f3ca  MOV EDX,dword ptr [ECX + 0x4]
0049f3cd  FCHS
0049f3cf  MOV dword ptr [ESP + 0x20],EDX
0049f3d3  MOV EDX,dword ptr [ECX + 0x8]
0049f3d6  MOV ECX,dword ptr [ECX + 0xc]
0049f3d9  FSTP float ptr [ESI + 0x18]
0049f3dc  FLD float ptr [ESP + 0x20]
0049f3e0  MOV dword ptr [EAX],EDX
0049f3e2  FCHS
0049f3e4  MOV EAX,ECX
0049f3e6  FSTP float ptr [ESI + 0x1c]
0049f3e9  MOV dword ptr [ESP + 0x24],EDX
0049f3ed  FLD float ptr [ESI + 0x20]
0049f3f0  MOV dword ptr [ESP + 0x28],ECX
0049f3f4  FCHS
0049f3f6  MOV dword ptr [ESI + 0x14],EAX
0049f3f9  FSTP float ptr [ESI + 0x20]
0049f3fc  FLD float ptr [ESI + 0x28]
0049f3ff  FCHS
0049f401  FSTP float ptr [ESI + 0x28]
0049f404  POP EDI
0049f405  POP ESI
0049f406  POP EBP
0049f407  POP EBX
0049f408  ADD ESP,0x1c
0049f40b  RET 0x10
