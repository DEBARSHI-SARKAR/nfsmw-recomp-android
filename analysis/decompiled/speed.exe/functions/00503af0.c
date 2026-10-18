/* speed.exe 00503af0 FUN_00503af0; analysis pseudocode, not buildable source.
 * calls 004fd750 FUN_004fd750
 * calls 004fe5e0 FUN_004fe5e0
 */

int __thiscall FUN_00503af0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086de48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fd750(param_2,0,0);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x60);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = 0;
  FUN_004fe5e0();
  ExceptionList = local_c;
  return param_1;
}

