/* speed.exe 00846150 FUN_00846150; analysis pseudocode, not buildable source.
 */

int FUN_00846150(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    if (('@' < (char)bVar2) && ((char)bVar2 < '[')) {
      bVar2 = bVar2 ^ 0x20;
    }
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    if (('@' < (char)bVar1) && ((char)bVar1 < '[')) {
      bVar1 = bVar1 ^ 0x20;
    }
    uVar3 = uVar3 + 1;
  } while (((bVar2 != 0) && ((int)(char)bVar2 - (int)(char)bVar1 == 0)) && (uVar3 < param_3));
  return (int)(char)bVar2 - (int)(char)bVar1;
}

