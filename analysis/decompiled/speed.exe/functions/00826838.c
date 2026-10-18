/* speed.exe 00826838 FUN_00826838; analysis pseudocode, not buildable source.
 * calls 0081f7cb FUN_0081f7cb
 */

int FUN_00826838(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_009c205e != 0) {
    do {
      if ((undefined4 *)(&DAT_009c1f44)[iVar2] != (undefined4 *)0x0) {
        iVar1 = FUN_0081f7cb(*(undefined4 *)(&DAT_009c1f44)[iVar2]);
        if (iVar1 == param_1) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)DAT_009c205e);
  }
  return -1;
}

