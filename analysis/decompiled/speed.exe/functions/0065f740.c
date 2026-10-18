/* speed.exe 0065f740 FUN_0065f740; analysis pseudocode, not buildable source.
 * calls 0065ad80 FUN_0065ad80
 * calls 00463ca0 FUN_00463ca0
 * calls 0065f680 FUN_0065f680
 */

uint FUN_0065f740(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0065f680(param_1,1,1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = ((int)*(uint *)(iVar1 + 0xc) < 0) - 1 & *(uint *)(iVar1 + 0xc);
  if (0 < *(int *)(iVar1 + 0x20)) {
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    return uVar2;
  }
  FUN_0065ad80();
  FUN_00463ca0(DAT_00925914,iVar1);
  return uVar2;
}

