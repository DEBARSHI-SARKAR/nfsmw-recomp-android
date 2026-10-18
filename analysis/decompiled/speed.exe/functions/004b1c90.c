/* speed.exe 004b1c90 FUN_004b1c90; analysis pseudocode, not buildable source.
 * calls 00465fd0 FUN_00465fd0
 * calls 006fff80 FUN_006fff80
 */

undefined4 FUN_004b1c90(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_006fff80();
  if (iVar1 == 0) {
    return DAT_00911fbc;
  }
  iVar1 = FUN_006fff80();
  if ((iVar1 != 0) && (iVar1 = FUN_006fff80(), *(int *)(iVar1 + 0x18) == *(int *)(iVar1 + 0x2c))) {
    return DAT_00911fbc;
  }
  uVar3 = 0;
  uVar2 = 1;
  FUN_006fff80(1,0);
  uVar2 = FUN_00465fd0(uVar2,uVar3);
  return uVar2;
}

