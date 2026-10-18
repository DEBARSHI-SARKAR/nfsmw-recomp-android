/* speed.exe 0075d1a0 FUN_0075d1a0; analysis pseudocode, not buildable source.
 * calls 00621280 FUN_00621280
 * calls 00627400 FUN_00627400
 * calls 0075c6c0 FUN_0075c6c0
 */

void __thiscall FUN_0075d1a0(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088141f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_0075c6c0(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x304) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 0x40) + 4) = 0;
  if (param_2 != '\0') {
    iVar2 = FUN_00627400(8);
    local_4 = 0;
    if (iVar2 != 0) {
      FUN_00621280();
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  ExceptionList = local_c;
  return;
}

