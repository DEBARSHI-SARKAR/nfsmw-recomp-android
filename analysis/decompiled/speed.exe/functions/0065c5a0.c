/* speed.exe 0065c5a0 FUN_0065c5a0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 0065c540 FUN_0065c540
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 * __thiscall FUN_0065c5a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a0d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_007c4b80();
  FUN_0065c540(uVar1);
  local_4 = 0;
  param_1[0xb] = 0;
  iVar2 = (uint)*(byte *)((int)param_1 + 5) << 2;
  param_1[10] = param_2;
  *param_1 = &PTR_FUN_008a8adc;
  param_1[0xd] = iVar2;
  puVar3 = (undefined4 *)FUN_005d29d0(iVar2,"AverageWindow::TimeData");
  param_1[0xc] = puVar3;
  for (uVar4 = (uint)*(byte *)((int)param_1 + 5); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  ExceptionList = local_c;
  return param_1;
}

