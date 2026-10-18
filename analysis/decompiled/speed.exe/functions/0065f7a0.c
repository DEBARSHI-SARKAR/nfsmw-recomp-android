/* speed.exe 0065f7a0 FUN_0065f7a0; analysis pseudocode, not buildable source.
 * calls 0065ad80 FUN_0065ad80
 * calls 0045ce40 FUN_0045ce40
 * calls 00463ca0 FUN_00463ca0
 * calls 0065f680 FUN_0065f680
 */

int FUN_0065f7a0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0045ce40();
  iVar2 = FUN_0065f680(param_1,1,0);
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar2 + 0xc);
  if (0 < *(int *)(iVar2 + 0x20)) {
    *(undefined4 *)(iVar2 + 0x1c) = 1;
    return iVar1 + 1;
  }
  FUN_0065ad80();
  FUN_00463ca0(DAT_00925914,iVar2);
  return iVar1 + 1;
}

