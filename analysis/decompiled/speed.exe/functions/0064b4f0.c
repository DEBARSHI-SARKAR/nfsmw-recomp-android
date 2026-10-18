/* speed.exe 0064b4f0 FUN_0064b4f0; analysis pseudocode, not buildable source.
 * calls 0062d450 FUN_0062d450
 * calls 00627400 FUN_00627400
 */

void __fastcall FUN_0064b4f0(undefined4 param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00879faf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00627400(8,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_0062d450(iVar1);
  }
  ExceptionList = local_c;
  return;
}

