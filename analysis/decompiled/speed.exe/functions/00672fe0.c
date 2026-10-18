/* speed.exe 00672fe0 FUN_00672fe0; analysis pseudocode, not buildable source.
 * calls 00452940 FUN_00452940
 * calls 007c4b80 FUN_007c4b80
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00672fe0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_00452940();
  if (uVar2 < 2) {
    return uVar2;
  }
  uVar3 = FUN_007c4b80();
  uVar4 = FUN_00452940();
  if (uVar4 <= uVar3) {
    FUN_006269b0(4);
  }
  uVar4 = uVar2 - 1;
  if (uVar3 + 1 < uVar2 - 1) {
    uVar4 = uVar3 + 1;
  }
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_00452940();
  if (uVar4 < uVar2) {
    return iVar1 + 8 + uVar4 * 4;
  }
  uVar2 = FUN_006269b0(4);
  return uVar2;
}

