/* speed.exe 00729120 FUN_00729120; analysis pseudocode, not buildable source.
 * calls 00405ed0 FUN_00405ed0
 * calls 00501680 FUN_00501680
 * calls 006bee80 FUN_006bee80
 * calls 0045f3c0 FUN_0045f3c0
 * calls 006c13f0 FUN_006c13f0
 * calls 004fca70 thunk_FUN_006cf2b0
 * calls 0073cad0 FUN_0073cad0
 * calls 007c4b80 FUN_007c4b80
 * calls 0045ecf0 FUN_0045ecf0
 * calls 004fc780 FUN_004fc780
 * calls 006c29a0 FUN_006c29a0
 * calls 006beeb0 FUN_006beeb0
 * calls 00729060 FUN_00729060
 * calls 006bd920 FUN_006bd920
 * calls 006bf530 FUN_006bf530
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00729120(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float *pfVar7;
  float local_78;
  int *local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  pfVar7 = (float *)(param_2 * 0x40 + *(int *)(param_1 + 0x20));
  iVar5 = *(int *)(param_3 + 0xc4);
  if ((-1 < iVar5) &&
     ((*(byte *)(*(short *)(pfVar7 + 7) * 0x80 + (iVar5 >> 3) + *(int *)(param_1 + 0x30)) &
      (byte)(1 << ((byte)iVar5 & 7))) != 0)) {
    return;
  }
  fVar6 = pfVar7[6];
  if ((((uint)fVar6 & 0x100) != 0) && (cVar2 = FUN_006c29a0(), cVar2 == '\0')) {
    return;
  }
  if ((((uint)fVar6 & 0x8000000) != 0) || (((uint)fVar6 & 0x40) != 0)) {
    fVar6 = (float)((uint)fVar6 | 0x8000040);
  }
  if ((((uint)fVar6 ^ 0xffffff60) & *(uint *)(param_3 + 0x84) & 0x80000ff) != 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x18) + *(short *)((int)pfVar7 + 0x3e) * 0x48;
  if (param_4 == 1) {
    local_70 = *pfVar7;
    local_6c = pfVar7[1];
    local_68 = pfVar7[2];
    local_60 = pfVar7[3];
    local_5c = pfVar7[4];
    local_58 = pfVar7[5];
    param_4 = thunk_FUN_006cf2b0(&local_70,&local_60,0);
    if (param_4 == 0) {
      return;
    }
  }
  iVar3 = FUN_00729060(param_3,pfVar7 + 8,*(float *)(iVar5 + 0x38) + _DAT_008b27e0,&local_78);
  if (iVar3 < 2) {
    return;
  }
  fVar6 = pfVar7[6];
  if (((uint)fVar6 & 0x2000000) != 0) {
    iVar3 = iVar3 + 10;
  }
  local_74 = (int *)iVar3;
  if ((*(uint *)(param_3 + 0x84) & 0x1800) != 0) {
    if (SUB41(fVar6,0) < '\0') {
      if (iVar3 < 0x20) {
        return;
      }
      local_78 = *(float *)(iVar5 + 0x30);
    }
    else {
      if (iVar3 < 0x20) {
        return;
      }
      if (((uint)fVar6 & 0x1000100) == 0) {
        local_78 = *(float *)(iVar5 + 0x34);
      }
      else {
        local_78 = *(float *)(iVar5 + 0x28);
      }
    }
    goto LAB_00729343;
  }
  if ((*(uint *)(param_3 + 0x84) & 0x20) == 0) {
    iVar4 = FUN_006bf530();
    if (2 < iVar4) {
      if (iVar3 < 0x17) {
        return;
      }
LAB_0072928e:
      local_78 = *(float *)(iVar5 + 0x30);
      goto LAB_00729343;
    }
    if (iVar3 < 0x12) {
      return;
    }
    if (((*(int *)(iVar5 + 0x28) != 0) &&
        (iVar3 = *(int *)(*(int *)(iVar5 + 0x28) + 0xc), iVar3 != 0)) &&
       (0x27 < *(short *)(iVar3 + 0x14))) {
      fVar6 = *(float *)(iVar3 + 0x9c);
      if (*(float *)(iVar3 + 0x9c) < _DAT_008b27e0) {
        fVar6 = _DAT_008b27e0;
      }
      if ((_DAT_008b27e4 <= local_78) && ((float)(int)local_74 / fVar6 < _DAT_008b27f0))
      goto LAB_0072928e;
    }
    iVar3 = FUN_006c13f0();
    if (iVar3 == 2) {
      local_78 = *(float *)(iVar5 + 0x28);
      goto LAB_00729343;
    }
  }
  else if (iVar3 < 0x20) {
    return;
  }
  local_78 = *(float *)(iVar5 + 0x30);
LAB_00729343:
  if (local_78 != 0.0) {
    if (((uint)pfVar7[6] & 0x200) == 0) {
      iVar5 = FUN_00405ed0(1);
      if (iVar5 != 0) {
        FUN_006beeb0(iVar5);
        FUN_006bee80(iVar5 + 0x30);
        if (((uint)pfVar7[6] & *(uint *)(param_3 + 0x84) & 0x100) != 0) {
          *(float *)(iVar5 + 0x38) = _DAT_00902148 + *(float *)(iVar5 + 0x38);
        }
        if ((*(uint *)(param_3 + 0x84) & 0x800) != 0) {
          *(float *)(iVar5 + 0x28) = -*(float *)(iVar5 + 0x28);
        }
        local_74 = *(int **)(param_3 + 0x8c);
        if (local_74 < *(int **)(param_3 + 0x90)) {
          *(int **)(param_3 + 0x8c) = local_74 + 3;
          *local_74 = param_4 + (int)local_78;
          if ((((*(uint *)(param_3 + 0x84) & 0x4000) != 0) && (*(int *)((int)local_78 + 0xc) != 0))
             && ((*(byte *)(*(int *)((int)local_78 + 0xc) + 0xe) & 0x80) != 0)) {
            iVar3 = FUN_007c4b80(iVar5);
            FUN_0073cad0(*(undefined4 *)(param_3 + 0x80),local_50,iVar3 % 0x168);
            FUN_0045ecf0(iVar5,iVar5,local_50);
          }
          local_74[1] = iVar5;
          local_74[2] = (int)pfVar7;
          if ((*(undefined4 **)(param_3 + 0x80) == &DAT_00919650) ||
             (*(undefined4 **)(param_3 + 0x80) == (undefined4 *)&DAT_009196c0)) {
            for (iVar5 = FUN_00501680(0); iVar5 != 0; iVar5 = FUN_00501680(iVar5)) {
              if ((*(int *)((int)local_78 + 0xc) != 0) &&
                 (iVar3 = FUN_004fc780((*(undefined4 **)(param_3 + 0x80) != &DAT_00919650) + '\x01')
                 , iVar3 != 0)) {
                iVar4 = *(int *)((int)local_78 + 0xc);
                local_60 = *(float *)(iVar5 + 0x40) - *(float *)(iVar4 + 0x70);
                local_5c = *(float *)(iVar5 + 0x44) - *(float *)(iVar4 + 0x74);
                local_58 = *(float *)(iVar5 + 0x48) - *(float *)(iVar4 + 0x78);
                local_54 = 0x3f800000;
                FUN_006bd920(&local_60,local_74[1],&local_60);
                iVar4 = *(int *)(*(int *)(param_3 + 0x80) + 0x68);
                if (((iVar4 != 0) && (_DAT_00890968 < *(float *)(iVar4 + 0x36a0))) &&
                   (((*(float *)(iVar3 + 0x10) != local_60 || (*(float *)(iVar3 + 0x14) != local_5c)
                     ) || (*(float *)(iVar3 + 0x18) != local_58)))) {
                  *(undefined4 *)(iVar3 + 0x1c) = 0x4479c000;
                }
                *(float *)(iVar3 + 0x10) = local_60;
                *(float *)(iVar3 + 0x14) = local_5c;
                *(float *)(iVar3 + 0x18) = local_58;
                *(char *)(iVar3 + 0x2c) = *(char *)(iVar5 + 4) + '\x0e';
                iVar4 = *(int *)(iVar5 + 4);
                if (((iVar4 == 3) || (iVar4 == 4)) || (iVar4 == 5)) {
                  *(undefined1 *)(iVar3 + 0x2d) = 4;
                  local_6c = local_5c - *(float *)(local_74[1] + 0x34);
                  local_70 = local_60 - *(float *)(local_74[1] + 0x30);
                  FUN_0045f3c0(&local_70,&local_70);
                  *(float *)(iVar3 + 0x20) = local_70;
                  *(float *)(iVar3 + 0x24) = local_6c;
                  *(undefined4 *)(iVar3 + 0x28) = 0;
                }
                else {
                  *(undefined1 *)(iVar3 + 0x2d) = 2;
                }
              }
            }
          }
        }
      }
    }
    else {
      piVar1 = *(int **)(param_3 + 0x8c);
      if (piVar1 < *(int **)(param_3 + 0x90)) {
        *(int **)(param_3 + 0x8c) = piVar1 + 3;
        *piVar1 = (int)local_78 + param_4;
        piVar1[1] = 0;
        piVar1[2] = (int)pfVar7;
        return;
      }
    }
  }
  return;
}

