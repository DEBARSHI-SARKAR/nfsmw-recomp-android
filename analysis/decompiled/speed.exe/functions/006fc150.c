/* speed.exe 006fc150 FUN_006fc150; analysis pseudocode, not buildable source.
 * calls 006fbf80 FUN_006fbf80
 * calls 005d29d0 FUN_005d29d0
 * calls 00478ec0 FUN_00478ec0
 */

void __thiscall FUN_006fc150(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f57f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x34) == 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_005d29d0(0x14,0);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &PTR_FUN_008952f0;
      uVar2 = FUN_00478ec0();
      puVar1[2] = uVar2;
      puVar1[3] = 0;
      puVar1[4] = -(uint)(param_1 != 0x2c) & param_1;
    }
    *(undefined4 **)(param_1 + 0x34) = puVar1;
  }
  local_4 = 0xffffffff;
  FUN_006fbf80(param_2);
  ExceptionList = local_c;
  return;
}

