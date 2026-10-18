/* speed.exe 00660ed0 thunk_FUN_0065f740; analysis pseudocode, not buildable source.
 */

uint thunk_FUN_0065f740(undefined4 param_1)

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

