/* speed.exe 007ecd1a FUN_007ecd1a; analysis pseudocode, not buildable source.
 */

void FUN_007ecd1a(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_009bb10c)[iVar1] == param_1) {
      (&DAT_009bb10c)[iVar1] = 0;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}

