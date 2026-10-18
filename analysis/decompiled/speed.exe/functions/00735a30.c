/* speed.exe 00735a30 FUN_00735a30; analysis pseudocode, not buildable source.
 * calls 0078b2c0 FUN_0078b2c0
 */

/* WARNING: Removing unreachable block (ram,0x00735a73) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00735a30(int param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  iVar2 = FUN_0078b2c0();
  fVar3 = (float10)((iVar2 + ((uVar1 % 0xe10) * 1000 - *(int *)(param_1 + 0x20))) % 3600000) *
          (float10)_DAT_008b474c;
  if ((float10)_DAT_0089096c <= fVar3) {
    fVar3 = (float10)_DAT_00890d3c - fVar3;
  }
  return fVar3;
}

