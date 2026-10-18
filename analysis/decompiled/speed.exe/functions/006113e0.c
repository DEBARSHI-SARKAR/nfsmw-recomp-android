/* speed.exe 006113e0 FUN_006113e0; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 006252d0 FUN_006252d0
 */

void __thiscall FUN_006113e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087668f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00627400(0x10,param_1);
  uVar2 = 0;
  local_4 = 0;
  if (iVar1 != 0) {
    if (DAT_0092d884 != 0) {
      uVar2 = *DAT_0092d87c;
    }
    FUN_006252d0(uVar2,param_2);
  }
  ExceptionList = local_c;
  return;
}

