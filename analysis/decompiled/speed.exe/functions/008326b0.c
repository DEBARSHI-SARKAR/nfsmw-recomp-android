/* speed.exe 008326b0 FUN_008326b0; analysis pseudocode, not buildable source.
 */

void FUN_008326b0(int param_1,int param_2)

{
  int iVar1;
  
  DAT_009c2c18 = param_1;
  DAT_009c2c10 = param_2;
  if ((param_2 != 0) && (iVar1 = 0, 0 < param_1)) {
    do {
      *(undefined4 *)(DAT_009c2c10 + iVar1 * 8) = 0;
      *(undefined4 *)(DAT_009c2c10 + 4 + iVar1 * 8) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_009c2c18);
  }
  return;
}

