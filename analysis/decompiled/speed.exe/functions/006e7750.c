/* speed.exe 006e7750 FUN_006e7750; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006e7750(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_007c4b80();
  uVar2 = FUN_007c4b80();
  uVar3 = FUN_007c4b80();
  return (iVar1 << 8 | uVar2) << 8 | uVar3 | param_1 & 0xff000000;
}

