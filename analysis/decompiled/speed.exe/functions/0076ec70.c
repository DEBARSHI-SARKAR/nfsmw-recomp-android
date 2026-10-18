/* speed.exe 0076ec70 FUN_0076ec70; analysis pseudocode, not buildable source.
 * calls 00410180 FUN_00410180
 * calls 00769900 FUN_00769900
 * calls 0076e320 FUN_0076e320
 * calls 0045f3c0 FUN_0045f3c0
 * calls 00764c20 FUN_00764c20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0076ec70(int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float afStack_40 [4];
  float fStack_30;
  float fStack_2c;
  float local_28;
  undefined4 local_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float local_10;
  undefined4 local_c;
  float local_8;
  ushort uStack_2;
  
  if (((*(char *)(param_1 + 0x50) != '\0') && (*(char *)(param_1 + 0x55) != '\0')) &&
     (piVar1 = *(int **)(param_1 + 8), piVar1 != (int *)0x0)) {
    fVar9 = (float10)_DAT_00890968;
    iVar6 = *piVar1;
    if (iVar6 != 0) {
      iVar2 = piVar1[1];
      local_58 = *(float *)(param_1 + 0x98) - (float)piVar1[iVar2 * 0x10 + 0x10];
      local_54 = *(float *)(param_1 + 0x9c) - (float)piVar1[iVar2 * 0x10 + 0x11];
      local_50 = *(float *)(param_1 + 0xa0) - (float)piVar1[iVar2 * 0x10 + 0x12];
      local_4c = local_58;
      local_48 = local_54;
      local_44 = local_50;
      fVar9 = (float10)FUN_00410180(&local_58);
      if (fVar9 < (float10)param_2) {
        return;
      }
      if (local_58 * (float)piVar1[iVar2 * 0x10 + 8] + local_50 * (float)piVar1[iVar2 * 0x10 + 9] <
          _DAT_00895c44) {
        fVar9 = (float10)FUN_0076e320();
      }
    }
    local_28 = (float)fVar9;
    local_10 = *(float *)(param_1 + 0x98);
    local_c = *(undefined4 *)(param_1 + 0x9c);
    local_8 = *(float *)(param_1 + 0xa0);
    local_24 = *(undefined4 *)(param_1 + 0x94);
    uStack_2 = (short)*(char *)(param_1 + 0x8c) << 0xf | *(ushort *)(param_1 + 0x8e) & 0x7fff;
    uStack_18 = 0;
    FUN_00764c20(*(undefined4 *)(param_1 + 0x90));
    afStack_40[0] = *(float *)(param_1 + 0xa4);
    afStack_40[1] = *(float *)(param_1 + 0xac);
    afStack_40[3] = *(float *)(param_1 + 0xb8);
    fVar3 = afStack_40[0] - local_10;
    afStack_40[2] = *(float *)(param_1 + 0xb0);
    fVar4 = afStack_40[1] - local_8;
    local_58 = afStack_40[2] - local_10;
    local_54 = afStack_40[3] - local_8;
    local_48 = local_58 - fVar3;
    local_4c = -(local_54 - fVar4);
    FUN_0045f3c0(&fStack_30,&local_4c);
    fStack_20 = fStack_2c * fVar3 - fVar4 * fStack_30;
    fStack_1c = fStack_2c * local_58 - local_54 * fStack_30;
    if (iVar6 == 0) {
      pfVar7 = afStack_40;
      pfVar8 = (float *)(param_1 + 0xc);
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar8 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar8 = pfVar8 + 1;
      }
    }
    if (**(int **)(param_1 + 8) == (*(int **)(param_1 + 8))[2]) {
      uVar5 = *(int *)(param_1 + 4) - 1;
      *(uint *)(param_1 + 4) = uVar5 & ((int)uVar5 < 0) - 1;
    }
    FUN_00769900(afStack_40);
    return;
  }
  return;
}

