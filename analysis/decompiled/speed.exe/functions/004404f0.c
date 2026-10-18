/* speed.exe 004404f0 FUN_004404f0; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 * calls 0043c6b0 FUN_0043c6b0
 * calls 00436c80 FUN_00436c80
 * calls 00438a20 FUN_00438a20
 * calls 0041e3e0 FUN_0041e3e0
 * calls 005d0370 FUN_005d0370
 */

void __thiscall FUN_004404f0(int param_1,float param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  float *pfVar10;
  float fVar11;
  int *piVar12;
  float10 fVar13;
  float local_60;
  uint local_5c;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [4];
  int *local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = (int)param_2;
  puStack_8 = &LAB_008696e8;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 200);
  local_34 = (int *)0x0;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_4 = 0;
  if (*(int *)(iVar1 + 0x14) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 5;
  }
  ExceptionList = &local_c;
  local_58 = param_1;
  FUN_00438a20(iVar5);
  fVar11 = *(float *)(iVar1 + 0x14);
  if (fVar11 != *(float *)(iVar1 + 0x18)) {
    do {
      piVar7 = local_30;
      local_60 = fVar11;
      if ((local_34 == (int *)0x0) ||
         ((uint)(local_2c - (int)local_34 >> 2) <= (uint)((int)local_30 - (int)local_34 >> 2))) {
        FUN_00436c80(local_30,1,&local_60);
      }
      else {
        local_5c = local_5c & 0xffffff00;
        FUN_0041e3e0(local_30,1,&local_60,local_38,local_5c);
        local_30 = piVar7 + 1;
      }
      fVar11 = (float)((int)fVar11 + 0x20);
    } while (fVar11 != *(float *)(iVar1 + 0x18));
  }
  while( true ) {
    if (*(int *)(iVar4 + 4) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0xc;
    }
    iVar1 = *(int *)(param_3 + 4);
    if (iVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (*(int *)(param_3 + 8) - iVar1) / 0x1c;
    }
    if (uVar9 <= uVar6) break;
    if (iVar1 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (*(int *)(param_3 + 8) - iVar1) / 0x1c;
    }
    if (*(uint *)(*(int *)(local_58 + 200) + 4) <= uVar9) break;
    local_5c = 0;
    local_60 = 0.0;
    piVar7 = local_30;
    piVar8 = local_30;
    piVar12 = local_34;
    if (local_34 == local_30) break;
    do {
      pfVar2 = (float *)*piVar12;
      if ((pfVar2 != (float *)0x0) && ((piVar8 == piVar7 || ((int)pfVar2[6] <= (int)local_5c)))) {
        local_44 = *pfVar2;
        pfVar10 = *(float **)(iVar4 + 4);
        local_40 = pfVar2[1];
        local_3c = pfVar2[2];
        param_2 = 0.0;
        if (pfVar10 != *(float **)(iVar4 + 8)) {
          do {
            local_50 = *pfVar10;
            local_4c = pfVar10[1];
            local_48 = pfVar10[2];
            local_54 = (local_50 - local_44) * (local_50 - local_44) +
                       (local_4c - local_40) * (local_4c - local_40) +
                       (local_48 - local_3c) * (local_48 - local_3c);
            fVar13 = (float10)FUN_005c5e80(local_54);
            pfVar10 = pfVar10 + 3;
            param_2 = (float)(fVar13 + (float10)param_2);
            piVar7 = local_30;
          } while (pfVar10 != *(float **)(iVar4 + 8));
        }
        if ((piVar8 == piVar7) || (param_2 <= local_60)) {
          local_60 = param_2;
          local_5c = *(uint *)(*piVar12 + 0x18);
          piVar8 = piVar12;
        }
      }
      piVar12 = piVar12 + 1;
    } while (piVar12 != piVar7);
    if (piVar8 == piVar7) break;
    puVar3 = (undefined4 *)*piVar8;
    local_28 = *puVar3;
    local_24 = puVar3[1];
    local_20 = puVar3[2];
    local_1c = puVar3[3];
    local_10 = puVar3[7];
    local_18 = puVar3[4];
    local_14 = puVar3[5];
    FUN_0043c6b0(&local_28);
    *piVar8 = 0;
  }
  local_4 = 0xffffffff;
  if (local_34 != (int *)0x0) {
    FUN_005d0370(local_34,(local_2c - (int)local_34 >> 2) << 2,0);
  }
  ExceptionList = local_c;
  return;
}

