/* speed.exe 00605250 FUN_00605250; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 007696b0 FUN_007696b0
 * calls 0062fe40 FUN_0062fe40
 */

void __fastcall FUN_00605250(undefined4 param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087653f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007696b0(0,param_1);
  iVar1 = FUN_00627400(0x10);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_0062fe40(5,"Car_Select.fng");
  }
  ExceptionList = local_c;
  return;
}

