/* speed.exe 006392c0 FUN_006392c0; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00639190 FUN_00639190
 * calls 0060b060 FUN_0060b060
 */

undefined4 FUN_006392c0(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00878f7f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 1) {
    iVar1 = DAT_00920390 + 0x10;
    bVar2 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar2) {
      uVar4 = DAT_0091f1b8;
      fVar3 = (float10)FUN_0060b060(param_1,1,DAT_0091f1b8);
      FUN_00639190((float)fVar3,uVar4);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

