/* speed.exe 00832ace FUN_00832ace; analysis pseudocode, not buildable source.
 * calls 00832a5c FUN_00832a5c
 * calls 008326ec FUN_008326ec
 */

int FUN_00832ace(int param_1)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = -1;
  if (DAT_009c2c10 != 0) {
    sVar2 = FUN_008326ec(param_1);
    iVar4 = (int)sVar2;
    if ((iVar4 < DAT_009c2c18) && (-1 < iVar4)) {
      iVar3 = DAT_009c2c1c;
      if ((*(byte *)(param_1 + 4) & 0x80) != 0) {
        FUN_00832a5c(param_1);
        iVar3 = DAT_009c2c1c;
      }
      for (; iVar4 < iVar3; iVar3 = iVar3 + -1) {
        puVar1 = (undefined4 *)(DAT_009c2c10 + iVar3 * 8);
        *puVar1 = puVar1[-2];
        puVar1[1] = puVar1[-1];
      }
      *(int *)(iVar4 * 8 + 4 + DAT_009c2c10) = param_1;
      iVar3 = DAT_009c2c14;
      *(int *)(iVar4 * 8 + DAT_009c2c10) = DAT_009c2c14;
      DAT_009c2c14 = DAT_009c2c14 + 1;
      DAT_009c2c1c = DAT_009c2c1c + 1;
    }
  }
  return iVar3;
}

