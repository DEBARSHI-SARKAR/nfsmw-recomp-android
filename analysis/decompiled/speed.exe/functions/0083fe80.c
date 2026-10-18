/* speed.exe 0083fe80 FUN_0083fe80; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0083fe80(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while (((&DAT_009c3640)[iVar1 * 2] != param_1 || ((&DAT_009c3644)[iVar1 * 2] != param_2))) {
    iVar1 = iVar1 + 1;
    if (0xf < iVar1) {
      return 0xffffffff;
    }
  }
  (&DAT_009c3640)[iVar1 * 2] = 0;
  (&DAT_009c3644)[iVar1 * 2] = 0;
  return 0;
}

