/* speed.exe 00458860 FUN_00458860; analysis pseudocode, not buildable source.
 * calls 00457c50 FUN_00457c50
 * calls 004574f0 FUN_004574f0
 */

undefined4 FUN_00458860(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869d21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004574f0(param_2);
  local_4 = 0;
  if (param_1 != 0) {
    uVar2 = FUN_00457c50(*(uint *)(iVar1 + 8),param_3,param_4,*(undefined2 *)(iVar1 + 0xc),
                         '\x01' - (*(uint *)(iVar1 + 8) < 0x10));
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

