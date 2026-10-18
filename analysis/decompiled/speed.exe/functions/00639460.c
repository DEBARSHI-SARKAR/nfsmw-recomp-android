/* speed.exe 00639460 FUN_00639460; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00639350 FUN_00639350
 */

undefined4 __thiscall FUN_00639460(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00878fdf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_2,param_1);
  if (iVar1 == 0) {
    iVar1 = DAT_00920390 + 0x10;
    bVar2 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar2) {
      FUN_00639350(DAT_0091f1b8);
    }
  }
  ExceptionList = local_c;
  return 0;
}

