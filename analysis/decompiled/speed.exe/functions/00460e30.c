/* speed.exe 00460e30 FUN_00460e30; analysis pseudocode, not buildable source.
 */

int FUN_00460e30(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  if (param_1 == (byte *)0x0) {
    return -(uint)(param_2 != (byte *)0x0);
  }
  if (param_2 != (byte *)0x0) {
    do {
      iVar3 = param_3 + -1;
      if (((param_3 == 0) || (bVar2 = *param_1, bVar2 == 0)) || (bVar1 = *param_2, bVar1 == 0))
      break;
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 & 0x5f;
      }
      if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
        bVar1 = bVar1 & 0x5f;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      param_3 = iVar3;
    } while (bVar2 == bVar1);
    if (iVar3 < 0) {
      return 0;
    }
    if (*param_1 == 0) {
      if (*param_2 == 0) {
        bVar2 = param_1[-1];
        if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
          bVar2 = bVar2 & 0x5f;
        }
        bVar1 = param_2[-1];
        if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
          bVar1 = bVar1 & 0x5f;
        }
        return (int)(char)bVar2 - (int)(char)bVar1;
      }
      return -1;
    }
  }
  return 1;
}

