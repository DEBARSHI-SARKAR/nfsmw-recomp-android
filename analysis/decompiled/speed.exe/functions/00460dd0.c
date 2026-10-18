/* speed.exe 00460dd0 FUN_00460dd0; analysis pseudocode, not buildable source.
 */

int FUN_00460dd0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 == (byte *)0x0) {
    return -(uint)(param_2 != (byte *)0x0);
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  do {
    bVar2 = *param_1;
    if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
      bVar2 = bVar2 & 0x5f;
    }
    bVar1 = *param_2;
    param_1 = param_1 + 1;
    if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
      bVar1 = bVar1 & 0x5f;
    }
    param_2 = param_2 + 1;
  } while (((bVar2 != 0) && (bVar1 != 0)) && (bVar2 == bVar1));
  return (int)(char)bVar2 - (int)(char)bVar1;
}

