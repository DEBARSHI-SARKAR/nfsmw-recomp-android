/* speed.exe 005de690 FUN_005de690; analysis pseudocode, not buildable source.
 * calls 00466340 FUN_00466340
 * calls 0075a130 FUN_0075a130
 */

int __thiscall FUN_005de690(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874f1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00466340(DAT_009b0a2c,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_0075a130(param_2,0,0);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x28) = 0;
      *(undefined1 *)(iVar1 + 0x2d) = 0;
    }
    ExceptionList = local_c;
    return iVar1;
  }
  ExceptionList = local_c;
  return 0;
}

