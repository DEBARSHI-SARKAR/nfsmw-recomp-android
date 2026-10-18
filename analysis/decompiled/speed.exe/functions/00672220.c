/* speed.exe 00672220 FUN_00672220; analysis pseudocode, not buildable source.
 * calls 0066b400 FUN_0066b400
 * calls 005d29d0 FUN_005d29d0
 */

void __thiscall FUN_00672220(int param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a8af;
  local_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 0xe0);
  if ((puVar1 != (undefined4 *)0x0) != (bool)param_2) {
    if (param_2 == '\0') {
      if (puVar1 != (undefined4 *)0x0) {
        ExceptionList = &local_c;
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0xe0) = 0;
      ExceptionList = local_c;
      return;
    }
    ExceptionList = &local_c;
    iVar2 = FUN_005d29d0(0x1c,0);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0066b400(param_1);
    }
    *(undefined4 *)(param_1 + 0xe0) = uVar3;
  }
  ExceptionList = local_c;
  return;
}

