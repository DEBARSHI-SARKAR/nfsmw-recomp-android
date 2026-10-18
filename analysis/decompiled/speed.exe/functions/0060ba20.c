/* speed.exe 0060ba20 FUN_0060ba20; analysis pseudocode, not buildable source.
 * calls 00607c40 FUN_00607c40
 * calls 00613880 FUN_00613880
 * calls 00613970 FUN_00613970
 * calls 00607b60 FUN_00607b60
 * calls 00607bb0 FUN_00607bb0
 * calls 0060bd50 FUN_0060bd50
 * calls 007c4b80 FUN_007c4b80
 * calls 00607cb0 FUN_00607cb0
 */

/* WARNING: Removing unreachable block (ram,0x0060bc3e) */

void FUN_0060ba20(int param_1,int param_2,undefined4 param_3)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  int in_EAX;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int local_30;
  undefined4 *local_2c;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = param_2;
  iVar9 = *(int *)(param_2 + 0x1c);
  bVar2 = *(byte *)(param_2 + 7);
  local_2c = *(undefined4 **)(param_2 + 0x10);
  if (bVar2 == 0) {
    local_14 = *local_2c;
    local_10 = local_2c[1];
    local_c = local_2c[2];
    local_8 = local_2c[3];
    local_4 = local_2c[4];
    local_2c = &local_14;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x40) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x48) = 0;
  }
  if (iVar9 < in_EAX) {
    FUN_00607b60(param_1);
  }
  FUN_00607bb0(param_3);
  if (in_EAX < iVar9) {
    iVar8 = in_EAX * 8;
    *(int *)(param_2 + 0x1c) = in_EAX;
    iVar10 = iVar9 - in_EAX;
    local_30 = iVar8;
    do {
      param_2 = in_EAX + 1;
      piVar6 = (int *)(*(int *)(iVar3 + 0xc) + local_30);
      if (*piVar6 != 0) {
        piVar4 = (int *)FUN_00607cb0(iVar3,param_2);
        if (piVar4 == &DAT_008a3c5c) {
          local_18 = (float)param_2;
          local_1c = 3;
          piVar4 = (int *)FUN_0060bd50(param_1,iVar3,&local_1c);
        }
        *piVar4 = *piVar6;
        piVar4[1] = piVar6[1];
      }
      local_30 = local_30 + 8;
      iVar10 = iVar10 + -1;
      in_EAX = param_2;
    } while (iVar10 != 0);
    uVar5 = FUN_00613970(param_1,*(undefined4 *)(iVar3 + 0xc),iVar9 * 8,iVar8,6);
    *(undefined4 *)(iVar3 + 0xc) = uVar5;
  }
  iVar9 = 1 << (bVar2 & 0x1f);
  if (-1 < iVar9 + -1) {
    pfVar11 = (float *)(local_2c + (iVar9 + -1) * 5 + 1);
    param_2 = iVar9;
    do {
      pfVar1 = pfVar11 + -1;
      if (pfVar11[1] != 0.0) {
        if (*pfVar1 == 4.2039e-45) {
          iVar8 = FUN_007c4b80();
          if (*pfVar11 != (float)iVar8) goto LAB_0060bc08;
          pfVar7 = (float *)FUN_00607cb0(iVar3,iVar8);
        }
        else if (*pfVar1 == 5.60519e-45) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x10) +
                          ((1 << (*(byte *)(iVar3 + 7) & 0x1f)) - 1U & *(uint *)((int)*pfVar11 + 8))
                          * 0x14);
          do {
            if ((*piVar6 == 4) && ((float)piVar6[1] == *pfVar11)) {
              pfVar7 = (float *)(piVar6 + 2);
              goto LAB_0060bc11;
            }
            piVar6 = (int *)piVar6[4];
          } while (piVar6 != (int *)0x0);
          pfVar7 = (float *)&DAT_008a3c5c;
        }
        else {
LAB_0060bc08:
          pfVar7 = (float *)FUN_00607c40(iVar3);
        }
LAB_0060bc11:
        *(undefined1 *)(iVar3 + 6) = 0;
        if (pfVar7 == (float *)&DAT_008a3c5c) {
          if (*pfVar1 == 0.0) {
            FUN_00613880(param_1,"table index is nil");
          }
          pfVar7 = (float *)FUN_0060bd50(param_1,iVar3,pfVar1);
        }
        *pfVar7 = pfVar11[1];
        pfVar7[1] = pfVar11[2];
      }
      pfVar11 = pfVar11 + -5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (bVar2 != 0) {
    FUN_00613970(param_1,local_2c,iVar9 * 0x14,0,0x11);
  }
  return;
}

