/* speed.exe 0061f3b0 FUN_0061f3b0; analysis pseudocode, not buildable source.
 * calls 0060cac0 FUN_0060cac0
 * calls 00465a70 FUN_00465a70
 * calls 0060c6e0 FUN_0060c6e0
 */

undefined4 * __thiscall FUN_0061f3b0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00876a36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = FUN_0060cac0();
  param_1[0x15] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0x15] + 4) = param_1[0x15];
  *(undefined4 *)param_1[0x15] = param_1[0x15];
  *(undefined4 *)(param_1[0x15] + 8) = param_1[0x15];
  param_1[0x16] = 0;
  local_4 = 0;
  uVar2 = FUN_0060c6e0();
  param_1[0x18] = uVar2;
  param_1[0x19] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((int)param_1 + 0x71) = 0;
  param_1[0x1d] = 0;
  param_1[1] = param_2;
  puVar3 = (undefined4 *)FUN_00465a70(param_2,0);
  uVar5 = param_1[1];
  param_1[3] = puVar3;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  puVar3 = param_1 + 4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_0091e0e0 = &LAB_0061e520;
  DAT_0091e0e4 = &LAB_0061e550;
  ExceptionList = local_c;
  return param_1;
}

