/* speed.exe 006052b0 FUN_006052b0; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 0062fe40 FUN_0062fe40
 */

void __fastcall FUN_006052b0(undefined4 param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087655f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00627400(0x10,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_0062fe40(2,"MainMenu_Sub.fng");
  }
  ExceptionList = local_c;
  return;
}

