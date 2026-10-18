/* speed.exe 006cb190 FUN_006cb190; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006cb190(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_008faf20 != 0) {
    puVar2 = &DAT_008faf20;
    iVar1 = DAT_008faf20;
    do {
      if ((iVar1 == param_1) && (puVar2[1] == param_2)) {
        return (float10)*(float *)(iVar3 * 0xc + 0x8faf28);
      }
      iVar1 = puVar2[3];
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + 1;
    } while (iVar1 != 0);
  }
  return (float10)_DAT_0089096c;
}

