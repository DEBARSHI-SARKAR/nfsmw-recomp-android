/* speed.exe 006120c0 FUN_006120c0; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 006e8df0 FUN_006e8df0
 * calls 00625160 FUN_00625160
 */

void __fastcall FUN_006120c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087671f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_006e8df0(param_1);
  if (((iVar1 != 1) && (DAT_0092d884 != 0)) && (iVar1 = *DAT_0092d87c, iVar1 != 0)) {
    iVar2 = FUN_00627400(0xc);
    local_4 = 0;
    if (iVar2 != 0) {
      FUN_00625160(iVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

