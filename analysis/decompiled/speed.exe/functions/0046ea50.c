/* speed.exe 0046ea50 FUN_0046ea50; analysis pseudocode, not buildable source.
 * calls 00516990 FUN_00516990
 * calls 0062d450 FUN_0062d450
 * calls 00627400 FUN_00627400
 * calls 0046e9c0 FUN_0046e9c0
 */

void FUN_0046ea50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a18f;
  local_c = ExceptionList;
  if (((byte)param_1 != 0) && (((DAT_009110a1 & 0x7f) == 0 || ((char)DAT_009110a1 < '\0')))) {
    ExceptionList = &local_c;
    iVar1 = FUN_00627400(8);
    local_4 = 0;
    if (iVar1 != 0) {
      FUN_0062d450();
    }
    uVar3 = 0x67;
    local_4 = 0xffffffff;
    DAT_009110a1 = (byte)param_1;
    uVar2 = FUN_0046e9c0(param_1,0x67);
    FUN_00516990(uVar2,uVar3);
  }
  ExceptionList = local_c;
  return;
}

