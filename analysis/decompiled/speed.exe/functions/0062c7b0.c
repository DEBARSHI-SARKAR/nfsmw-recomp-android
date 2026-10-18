/* speed.exe 0062c7b0 FUN_0062c7b0; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00621d60 FUN_00621d60
 */

undefined4 __thiscall FUN_0062c7b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00877aaf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00605a50(param_2,param_1);
  iVar1 = DAT_00920390;
  if (iVar2 == 0) {
    iVar2 = DAT_00920390 + 0x10;
    bVar3 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar2;
    if (bVar3) {
      FUN_00621d60(iVar1);
    }
  }
  ExceptionList = local_c;
  return 0;
}

