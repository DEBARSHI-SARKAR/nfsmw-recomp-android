/* speed.exe 0081db11 FUN_0081db11; analysis pseudocode, not buildable source.
 * calls 008224d5 FUN_008224d5
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 008224d8 FUN_008224d8
 */

int FUN_0081db11(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_009c2188 == '\0') {
    return -10;
  }
  FUN_0081bccb();
  iVar3 = 0;
  if (DAT_009c205e != 0) {
    do {
      if ((&DAT_009c1f44)[iVar3] == 0) {
        iVar1 = FUN_008224d8(iVar3,param_4);
        if (iVar1 < 0) {
          iVar3 = -6;
        }
        else {
          iVar1 = FUN_008224d5();
          puVar2 = (undefined4 *)(param_4 + iVar1);
          iVar1 = FUN_008224d5();
          puVar2[0x15] = param_1;
          puVar2[0x16] = param_2;
          *(short *)(puVar2 + 0x10) = (short)((param_5 - iVar1) - 0x9cU >> 5);
          puVar2[0x14] = param_4;
          puVar2[0x17] = param_3;
          *puVar2 = 0xffffffff;
          (&DAT_009c1f44)[iVar3] = puVar2;
        }
        goto LAB_0081db48;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)DAT_009c205e);
  }
  iVar3 = -9;
LAB_0081db48:
  FUN_0081bcd9();
  return iVar3;
}

