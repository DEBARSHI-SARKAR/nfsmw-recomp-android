/* speed.exe 0083fe30 FUN_0083fe30; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0083fe30(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (((&DAT_009c3640)[iVar1 * 2] == param_1) && ((&DAT_009c3644)[iVar1 * 2] == param_2)) {
      return 0xffffffff;
    }
    if ((&DAT_009c3640)[iVar1 * 2] == 0) {
      (&DAT_009c3644)[iVar1 * 2] = param_2;
      (&DAT_009c3640)[iVar1 * 2] = param_1;
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return 0xfffffffe;
}

