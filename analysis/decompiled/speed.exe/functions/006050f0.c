/* speed.exe 006050f0 FUN_006050f0; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 00623a90 FUN_00623a90
 */

void __fastcall FUN_006050f0(undefined4 param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087651f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00627400(0x14,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00623a90(0,0,0);
  }
  ExceptionList = local_c;
  return;
}

