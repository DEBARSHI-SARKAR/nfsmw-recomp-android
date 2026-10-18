/* speed.exe 0062b800 FUN_0062b800; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 0062b720 FUN_0062b720
 * calls 00614d10 FUN_00614d10
 */

undefined4 FUN_0062b800(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087793f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 1) {
    iVar1 = DAT_00920390 + 0x10;
    bVar3 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar3) {
      uVar2 = FUN_00614d10(param_1,1);
      FUN_0062b720(uVar2);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

