/* speed.exe 00659ff0 FUN_00659ff0; analysis pseudocode, not buildable source.
 * calls 00659db0 FUN_00659db0
 * calls 007c4b80 FUN_007c4b80
 * calls 0045f340 FUN_0045f340
 * calls 007c66d0 _malloc
 * calls 007c7250 FUN_007c7250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00659ff0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  float local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 == 0) {
LAB_0065a01b:
    iVar8 = *(int *)(param_1 + 4) + -1;
LAB_0065a027:
    local_50 = (float)iVar8;
  }
  else {
    if (iVar8 == 1) {
      iVar8 = *(int *)(param_1 + 4);
      goto LAB_0065a027;
    }
    if (iVar8 == 2) goto LAB_0065a01b;
    local_50 = 0.0;
  }
  local_54 = 0.0;
  FUN_00659db0(&local_20,0);
  local_4c = 0.1;
  if (_DAT_00890cd4 < local_50 != (_DAT_00890cd4 == local_50)) {
    do {
      FUN_00659db0(&local_30,local_4c);
      fVar10 = (float10)FUN_0045f340(&local_20,&local_30);
      local_54 = (float)(fVar10 + (float10)local_54);
      local_20 = local_30;
      local_4c = local_4c + _DAT_00890cd4;
      local_1c = local_2c;
      local_18 = local_28;
    } while (local_4c < local_50 != (local_4c == local_50));
  }
  fVar2 = local_54 * _DAT_008a8db8 * _DAT_00893348;
  bVar4 = false;
  do {
    iVar8 = 0;
    do {
      if (fVar2 <= (float)*(int *)(param_1 + 0x18) * (float)(&DAT_008f8108)[iVar8]) {
        *(int *)(param_1 + 0x1c) = iVar8;
        bVar4 = true;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 7);
    if (iVar8 == 7) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) * 2;
    }
  } while (!bVar4);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_007c7250(*(int *)(param_1 + 0x2c));
  }
  puVar7 = _malloc(*(int *)(param_1 + 0x18) << 2);
  *(undefined4 **)(param_1 + 0x2c) = puVar7;
  local_48 = (float)(&DAT_008f8108)[*(int *)(param_1 + 0x1c)] * _DAT_00890980;
  local_40 = 0.0;
  local_54 = 0.0;
  iVar9 = 1;
  *puVar7 = 0;
  FUN_00659db0(&local_20,0);
  local_44 = 0;
  iVar8 = FUN_007c4b80();
  fVar2 = (float)iVar8;
  fVar5 = local_48;
  while( true ) {
    fVar3 = fVar2;
    if (local_50 < fVar2) {
      fVar3 = fVar2 - _DAT_0089096c;
    }
    local_4c = (float)local_44;
    if (fVar3 <= (float)local_44) break;
    local_44 = local_44 + 1;
    fVar3 = (float)local_44;
    if (local_4c <= fVar3) {
      do {
        FUN_00659db0(&local_30,local_4c);
        fVar10 = (float10)FUN_0045f340(&local_20,&local_30);
        local_54 = (float)(fVar10 + (float10)local_54);
        if (local_48 < local_54) {
          fVar5 = (float)(&DAT_008f8108)[*(int *)(param_1 + 0x1c)] * _DAT_00890980;
          fVar6 = local_4c - _DAT_008a8db4;
          do {
            iVar9 = iVar9 + 1;
            *(float *)(*(int *)(param_1 + 0x2c) + -4 + iVar9 * 4) =
                 ((local_48 - local_40) / fVar5) * _DAT_008a8db4 + fVar6;
            fVar5 = (float)(&DAT_008f8108)[*(int *)(param_1 + 0x1c)] * _DAT_00890980;
            local_48 = fVar5 + local_48;
          } while (local_48 < local_54);
        }
        local_1c = local_2c;
        local_4c = local_4c + _DAT_008a8db4;
        local_20 = local_30;
        local_18 = local_28;
        local_40 = local_54;
        fVar5 = local_48;
      } while (local_4c < fVar3 != (local_4c == fVar3));
    }
  }
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      fVar2 = (float)*(int *)(param_1 + 4);
      goto LAB_0065a2f2;
    }
    fVar2 = _DAT_00890968;
    if (iVar8 != 2) goto LAB_0065a2f2;
  }
  fVar2 = (float)(*(int *)(param_1 + 4) + -1);
LAB_0065a2f2:
  pfVar1 = (float *)(*(int *)(param_1 + 0x2c) + iVar9 * 4);
  *pfVar1 = ((fVar2 - *(float *)(*(int *)(param_1 + 0x2c) + -4 + iVar9 * 4)) *
             (float)(&DAT_008f8108)[*(int *)(param_1 + 0x1c)] * _DAT_00890980) /
            (local_54 - (fVar5 - (float)(&DAT_008f8108)[*(int *)(param_1 + 0x1c)] * _DAT_00890980))
            + pfVar1[-1];
  *(int *)(param_1 + 0x28) = iVar9 + 1;
  *(float *)(param_1 + 0x20) = local_54;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

