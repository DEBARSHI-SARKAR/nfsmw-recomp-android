/* speed.exe 008329be FUN_008329be; analysis pseudocode, not buildable source.
 * calls 0083264d FUN_0083264d
 */

int FUN_008329be(int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(param_1 + 6);
  if (uVar4 != 0) {
    pbVar1 = (byte *)FUN_0083264d(param_1);
    uVar2 = (uint)*pbVar1;
    iVar3 = 0;
    if (uVar4 != 0) {
      do {
        uVar2 = uVar2 - 1;
        if ((int)uVar2 < 0) {
          uVar2 = uVar4 - 1;
        }
        if (pbVar1[uVar2 + 1] == param_2) {
          return iVar3 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar4);
    }
  }
  return 0;
}

