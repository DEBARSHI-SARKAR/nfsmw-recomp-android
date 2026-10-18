/* speed.exe 005e8cc0 FUN_005e8cc0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 006533b0 FUN_006533b0
 * calls 00460c50 FUN_00460c50
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005dc000 FUN_005dc000
 * calls 005dc0f0 FUN_005dc0f0
 */

int FUN_005e8cc0(undefined4 *param_1,float *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float10 fVar9;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float *local_4;
  
  iVar5 = param_3;
  iVar1 = FUN_00460c50(param_1);
  uVar6 = iVar1 + 1;
  local_18 = _malloc(uVar6);
  puVar7 = local_18;
  for (uVar3 = uVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *param_1;
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  iVar1 = FUN_005dc000(local_18,&local_20,&LAB_005dbfc0);
  if (param_3 < iVar1) {
    pfVar2 = _malloc(iVar1 * 4);
    if (0 < iVar1) {
      iVar4 = local_20 - (int)pfVar2;
      pfVar8 = pfVar2;
      local_1c = iVar1;
      do {
        fVar9 = (float10)FUN_005dc0f0(*(undefined4 *)(iVar4 + (int)pfVar8));
        *pfVar8 = (float)fVar9;
        pfVar8 = pfVar8 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_1c = 0;
    }
    local_c = (float)(param_3 + -1);
    local_10 = 0;
    local_8 = (float)(iVar1 + -1) / local_c;
    param_3 = 0;
    local_14 = iVar1;
    local_4 = pfVar2;
    if (0 < iVar5) {
      do {
        fVar9 = (float10)FUN_006533b0((float)param_3);
        param_2[param_3] = (float)fVar9;
        param_3 = param_3 + 1;
      } while (param_3 < iVar5);
    }
    thunk_FUN_007c7250(pfVar2);
    iVar1 = iVar5;
  }
  else {
    if (0 < iVar1) {
      iVar4 = local_20 - (int)param_2;
      iVar5 = iVar1;
      pfVar2 = param_2;
      do {
        fVar9 = (float10)FUN_005dc0f0(*(undefined4 *)(iVar4 + (int)pfVar2));
        *pfVar2 = (float)fVar9;
        pfVar2 = pfVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (iVar1 == 1) {
      param_2[1] = *param_2;
      iVar1 = 2;
    }
  }
  thunk_FUN_007c7250(local_20);
  thunk_FUN_007c7250(local_18);
  return iVar1;
}

