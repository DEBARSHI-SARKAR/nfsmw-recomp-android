/* speed.exe 00437a70 FUN_00437a70; analysis pseudocode, not buildable source.
 * calls 0042d300 FUN_0042d300
 * calls 0040bbc0 FUN_0040bbc0
 * calls 0040cd00 FUN_0040cd00
 * calls 005d29d0 FUN_005d29d0
 * calls 0040e9a0 FUN_0040e9a0
 * calls 0040f200 FUN_0040f200
 * calls 00435dc0 FUN_00435dc0
 * calls 0040f630 FUN_0040f630
 * calls 0041dda0 FUN_0041dda0
 */

void __thiscall FUN_00437a70(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  uint uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00868ca0;
  local_10 = ExceptionList;
  local_28 = *param_4;
  local_24 = param_4[1];
  local_20 = param_4[2];
  iVar3 = *(int *)(param_1 + 4);
  local_14 = &stack0xffffffcc;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0xc;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
    }
    ExceptionList = &local_10;
    local_1c = param_1;
    puVar1 = &stack0xffffffcc;
    if (0x15555555U - iVar2 < param_3) {
      ExceptionList = &local_10;
      FUN_00435dc0();
      iVar3 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
    }
    if (uVar5 < iVar2 + param_3) {
      if (0x15555555 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
      }
      if (uVar5 < iVar3 + param_3) {
        iVar3 = FUN_0040bbc0();
        uVar5 = iVar3 + param_3;
      }
      if (uVar5 == 0) {
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = (undefined4 *)FUN_005d29d0(uVar5 * 0xc,0);
      }
      local_8 = 0;
      local_18 = FUN_0040f630(*(undefined4 *)(param_1 + 4),param_2,param_4,param_1,param_2);
      FUN_0041dda0(local_18,param_3,&local_28,param_1,param_2);
      FUN_0040f630(param_2,*(undefined4 *)(param_1 + 8),local_18 + param_3 * 0xc,param_1,param_2);
      iVar3 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
      }
      if (iVar3 != 0) {
        FUN_0040cd00(iVar3,(*(int *)(param_1 + 0xc) - iVar3) / 0xc);
      }
      *(uint *)(param_1 + 0xc) = (int)param_4 + uVar5 * 0xc;
      *(uint *)(param_1 + 8) = (int)param_4 + (param_3 + iVar2) * 0xc;
      *(undefined4 **)(param_1 + 4) = param_4;
      ExceptionList = local_10;
      return;
    }
    iVar3 = *(int *)(param_1 + 8);
    if ((uint)((iVar3 - param_2) / 0xc) < param_3) {
      iVar2 = param_3 * 0xc;
      FUN_0040f630(param_2,iVar3,iVar2 + param_2,param_1,iVar2);
      local_8 = 2;
      FUN_0042d300(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2) / 0xc,&local_28
                  );
      iVar2 = *(int *)(param_1 + 8) + iVar2;
      *(int *)(param_1 + 8) = iVar2;
      FUN_0040e9a0(param_2,iVar2 + param_3 * -0xc,&local_28);
      ExceptionList = local_10;
      return;
    }
    iVar2 = iVar3 + param_3 * -0xc;
    uVar4 = FUN_0040f630(iVar2,iVar3,iVar3,param_1,iVar2);
    *(undefined4 *)(param_1 + 8) = uVar4;
    FUN_0040f200(param_2,iVar2,iVar3,iVar2);
    FUN_0040e9a0(param_2,param_3 * 0xc + param_2,&local_28);
  }
  ExceptionList = local_10;
  return;
}

