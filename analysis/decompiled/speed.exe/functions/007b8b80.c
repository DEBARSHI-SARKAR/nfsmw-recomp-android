/* speed.exe 007b8b80 FUN_007b8b80; analysis pseudocode, not buildable source.
 * calls 007b5a50 FUN_007b5a50
 * calls 00524850 FUN_00524850
 * calls 007a6a40 FUN_007a6a40
 * calls 0056f250 FUN_0056f250
 * calls 007af4f0 FUN_007af4f0
 * calls 005816b0 FUN_005816b0
 * calls 007b13c0 FUN_007b13c0
 * calls 00747ae0 FUN_00747ae0
 * calls 007a6770 FUN_007a6770
 * calls 00514cc0 FUN_00514cc0
 * calls 005252d0 FUN_005252d0
 * calls 00514c70 FUN_00514c70
 * calls 005251a0 FUN_005251a0
 * calls 00515b90 FUN_00515b90
 * calls 007aeca0 FUN_007aeca0
 * calls 007af110 FUN_007af110
 * calls 007aed20 FUN_007aed20
 * calls 007b5ef0 FUN_007b5ef0
 * calls 007aeb90 FUN_007aeb90
 * calls 00460bf0 FUN_00460bf0
 * calls 0056f100 FUN_0056f100
 */

void __fastcall FUN_007b8b80(int param_1)

{
  int *piVar1;
  bool bVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int iVar10;
  undefined4 unaff_ESI;
  char *pcVar11;
  char *pcVar12;
  undefined4 unaff_EDI;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined **local_38 [3];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  char *local_1c;
  
  local_1c = (char *)0x0;
  local_24 = 0x71;
  *(undefined4 *)(param_1 + 0x5c) = 0x6857e5ac;
  local_28 = 0x7b8ba2;
  local_20 = (int *)(param_1 + 0x2c);
  FUN_007af4f0();
  local_1c = (char *)0x0;
  local_20 = (int *)(param_1 + 0x34);
  local_24 = 0x72;
  local_28 = 0x7b8bb4;
  FUN_007af4f0();
  local_1c = (char *)0x71;
  local_20 = (int *)0x7b8bc0;
  iVar5 = FUN_007aed20();
  iVar9 = *(int *)(param_1 + 0x2c);
  iVar10 = 0;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar9 + -4;
  }
  bVar2 = false;
  while( true ) {
    if ((int *)(param_1 + 0x2c) == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_1 + 0x28;
    }
    if (iVar9 == iVar6) break;
    local_1c = (char *)0x0;
    local_20 = (int *)0xebb03e66;
    local_24 = 0x7b8bfd;
    iVar6 = FUN_00747ae0();
    local_1c = "NUMBER_LEFT";
    local_20 = (int *)0x7b8c09;
    iVar7 = FUN_00460bf0();
    if (iVar6 == iVar7) {
      if (!bVar2) {
        local_1c = (char *)iVar9;
        if ((DAT_009b9eb1 == '\x01') && (DAT_009b9e84 == iVar10)) {
          *(int *)(param_1 + 0x3c) = iVar9;
          local_20 = (int *)0x7b8c39;
          iVar6 = FUN_007aeca0();
          if (iVar6 != 0) {
            *(uint *)(iVar9 + 0x20) = *(uint *)(iVar9 + 0x20) | 0x20;
          }
          *(short *)(param_1 + 0x4c) = (short)iVar10;
          DAT_009b9e84 = 0;
          bVar2 = true;
        }
        else if (*(int *)(iVar9 + 0xc) == iVar5) {
          *(int *)(param_1 + 0x3c) = iVar9;
          local_20 = (int *)0x7b8c6c;
          iVar6 = FUN_007aeca0();
          if (iVar6 != 0) {
            *(uint *)(iVar9 + 0x20) = *(uint *)(iVar9 + 0x20) | 0x20;
          }
          *(short *)(param_1 + 0x4c) = (short)iVar10;
        }
      }
      iVar10 = iVar10 + 1;
      if (*(int *)(iVar9 + 4) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iVar9 + 4) + -4;
      }
    }
    else {
      if (*(int *)(iVar9 + 4) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar9 + 4) + -4;
      }
      piVar8 = (int *)(-(uint)(iVar9 != 0) & iVar9 + 4U);
      iVar9 = *piVar8;
      piVar1 = (int *)piVar8[1];
      *piVar1 = iVar9;
      *(int **)(iVar9 + 4) = piVar1;
      iVar9 = iVar6;
      if (piVar8 + -1 != (int *)0x0) {
        local_1c = (char *)0x1;
        local_20 = (int *)0x7b8cc3;
        (**(code **)piVar8[-1])();
      }
    }
  }
  bVar2 = false;
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar9 = *(int *)(param_1 + 0x2c);
    *(undefined2 *)(param_1 + 0x4c) = 0xffff;
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = iVar9 + -4;
    }
    *(int *)(param_1 + 0x3c) = iVar9;
  }
  local_1c = (char *)0x72;
  local_20 = (int *)0x7b8cf6;
  iVar9 = FUN_007aed20();
  iVar5 = 0;
  if (*(int *)(param_1 + 0x34) == 0) goto LAB_007b8d08;
  pcVar11 = (char *)(*(int *)(param_1 + 0x34) + -4);
  while( true ) {
    if ((int *)(param_1 + 0x34) == (int *)0x0) {
      pcVar12 = (char *)0x0;
    }
    else {
      pcVar12 = (char *)(param_1 + 0x30);
    }
    if (pcVar11 == pcVar12) break;
    local_1c = (char *)0x0;
    local_20 = (int *)0xebb03e66;
    local_24 = 0x7b8d35;
    iVar10 = FUN_00747ae0();
    local_1c = "NUMBER_RIGHT";
    local_20 = (int *)0x7b8d41;
    iVar6 = FUN_00460bf0();
    if (iVar10 == iVar6) {
      if (!bVar2) {
        if ((DAT_009b9eb1 == '\x01') && (DAT_00905e38 == iVar5)) {
          *(char **)(param_1 + 0x40) = pcVar11;
          local_20 = (int *)0x7b8d71;
          local_1c = pcVar11;
          iVar10 = FUN_007aeca0();
          if (iVar10 != 0) {
            *(uint *)(pcVar11 + 0x20) = *(uint *)(pcVar11 + 0x20) | 0x20;
          }
          *(short *)(param_1 + 0x4e) = (short)iVar5;
          DAT_00905e38 = -1;
          bVar2 = true;
        }
        else if (*(int *)(pcVar11 + 0xc) == iVar9) {
          *(char **)(param_1 + 0x40) = pcVar11;
          local_20 = (int *)0x7b8da4;
          local_1c = pcVar11;
          iVar10 = FUN_007aeca0();
          if (iVar10 != 0) {
            *(uint *)(pcVar11 + 0x20) = *(uint *)(pcVar11 + 0x20) | 0x20;
          }
          *(short *)(param_1 + 0x4e) = (short)iVar5;
        }
      }
      iVar5 = iVar5 + 1;
      if (*(int *)(pcVar11 + 4) == 0) {
LAB_007b8d08:
        pcVar11 = (char *)0x0;
      }
      else {
        pcVar11 = (char *)(*(int *)(pcVar11 + 4) + -4);
      }
    }
    else {
      if (*(int *)(pcVar11 + 4) == 0) {
        pcVar12 = (char *)0x0;
      }
      else {
        pcVar12 = (char *)(*(int *)(pcVar11 + 4) + -4);
      }
      piVar8 = (int *)(-(uint)(pcVar11 != (char *)0x0) & (uint)(pcVar11 + 4));
      iVar10 = *piVar8;
      piVar1 = (int *)piVar8[1];
      *piVar1 = iVar10;
      *(int **)(iVar10 + 4) = piVar1;
      pcVar11 = pcVar12;
      if (piVar8 + -1 != (int *)0x0) {
        local_1c = (char *)0x1;
        local_20 = (int *)0x7b8df8;
        (**(code **)piVar8[-1])();
      }
    }
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar9 = *(int *)(param_1 + 0x34);
    *(undefined2 *)(param_1 + 0x4e) = 0xffff;
    if (iVar9 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    else {
      *(int *)(param_1 + 0x40) = iVar9 + -4;
    }
  }
  pvVar3 = ExceptionList;
  ExceptionList = &stack0xfffffff4;
  FUN_007a6770(unaff_EDI,unaff_ESI,unaff_EBP);
  FUN_007b13c0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x44),0);
  if ((*(short *)(param_1 + 0x4c) != -1) && (*(short *)(param_1 + 0x4e) != -1)) {
    uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x7a8355d9);
    FUN_00514cc0(uVar4);
    iVar9 = *(int *)(param_1 + 0x3c);
    local_2c = *(undefined4 *)(iVar9 + 0xc);
    local_28 = *(undefined4 *)(iVar9 + 0x10);
    local_24 = *(undefined4 *)(iVar9 + 0x14);
    local_20 = *(int **)(iVar9 + 0x18);
    local_1c = (char *)CONCAT31(local_1c._1_3_,*(undefined1 *)(iVar9 + 0x1c));
    local_38[0] = &PTR_FUN_008b7518;
    uVar14 = 0;
    uVar13 = 0;
    uVar4 = FUN_007b5ef0(*(undefined4 *)(param_1 + 0x44),1);
    FUN_007a6a40(local_38,uVar4,uVar13,uVar14);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x2a08ba92,&DAT_0089c2d0,
                 (int)*(short *)(param_1 + 0x4c));
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x1a88dc05,&DAT_0089c2d0,
                 (int)*(short *)(param_1 + 0x4e));
    FUN_007af110(0x71,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0xc));
    FUN_007af110(0x72,*(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc));
    FUN_007af110(0x69,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0xc));
    FUN_007af110(0x6a,*(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc));
    ExceptionList = pvVar3;
    return;
  }
  uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x7a8355d9,unaff_EBX);
  FUN_00514c70(uVar4);
  iVar9 = FUN_007aeb90(*(undefined4 *)(param_1 + 0x3c));
  FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
  uVar13 = 0x71;
  uVar4 = FUN_005816b0(0x71);
  iVar5 = FUN_0056f250(uVar4,uVar13);
  if (iVar5 == 0) {
    uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x58),0xd0582feb);
    FUN_00514cc0(uVar4);
    uVar4 = FUN_005251a0(*(undefined4 *)(param_1 + 0x58),0xd0582feb,0x696ae039);
    FUN_00515b90(uVar4);
  }
  else if ((iVar9 == 0) || (*(int *)(*(int *)(iVar9 + 0xc) + 0xc) != 0)) {
    uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x58),0xd0582feb);
    FUN_00514c70(uVar4);
  }
  else {
    uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x58),0xd0582feb);
    FUN_00514cc0(uVar4);
    uVar4 = FUN_005251a0(*(undefined4 *)(param_1 + 0x58),0xd0582feb,0x1a777e25);
    FUN_00515b90(uVar4);
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x2a08ba92,&DAT_008b7d9c);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x1a88dc05,&DAT_008b7d9c);
  FUN_007b5a50();
  ExceptionList = pvVar3;
  return;
}

