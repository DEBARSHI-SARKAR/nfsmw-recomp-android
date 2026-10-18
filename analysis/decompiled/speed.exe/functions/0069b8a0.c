/* speed.exe 0069b8a0 FUN_0069b8a0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452d40 FUN_00452d40
 * calls 00454c30 FUN_00454c30
 */

int FUN_0069b8a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_00452d40();
  if (iVar1 != 0) {
    do {
      iVar1 = *(int *)(param_2 + 0xc);
      if (iVar1 == 0) {
        iVar1 = FUN_00454c30(uVar3);
LAB_0069b8cd:
        if (iVar1 == 0) goto LAB_0069b8d1;
      }
      else {
        if (uVar3 == 0) goto LAB_0069b8cd;
LAB_0069b8d1:
        iVar1 = FUN_006269b0(0x20);
      }
      if (*(int *)(iVar1 + 4) == param_1) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
      uVar2 = FUN_00452d40();
    } while (uVar3 < uVar2);
  }
  return 0;
}

