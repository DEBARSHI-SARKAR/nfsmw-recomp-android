/* speed.exe 006451a0 FUN_006451a0; analysis pseudocode, not buildable source.
 * calls 00643be0 FUN_00643be0
 * calls 005d29d0 FUN_005d29d0
 * calls 005d8660 FUN_005d8660
 * calls 00644480 FUN_00644480
 */

undefined4 * __thiscall
FUN_006451a0(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00879cc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d8660(0);
  local_4 = 0;
  if (param_2 == 0) {
    param_2 = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 3);
  }
  FUN_00643be0(param_2);
  param_1[8] = param_3;
  *param_1 = &PTR_FUN_008a7ec8;
  param_1[7] = param_4;
  iVar2 = *(int *)(param_4 + 4);
  param_1[10] = iVar2;
  *(undefined1 *)(param_1 + 0xb) = 0;
  puVar1 = (undefined4 *)(param_4 + 8 + *(int *)(param_4 + 4) * 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar4 = (undefined4 *)FUN_005d29d0(iVar2 << 6,"EventSequencerSystems");
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *puVar1;
    *puVar4 = param_1;
    puVar4[3] = 0;
    FUN_00644480(param_5,param_6);
  }
  param_1[9] = puVar4;
  uVar5 = 1;
  if (1 < (uint)param_1[10]) {
    param_2 = 0x40;
    do {
      puVar4 = (undefined4 *)(param_1[9] + param_2);
      if (puVar4 != (undefined4 *)0x0) {
        uVar3 = puVar1[uVar5];
        *puVar4 = param_1;
        puVar4[1] = uVar3;
        puVar4[3] = 0;
        FUN_00644480(param_5,param_6);
      }
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 0x40;
    } while (uVar5 < (uint)param_1[10]);
  }
  ExceptionList = local_c;
  return param_1;
}

