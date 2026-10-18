/* speed.exe 00846110 FUN_00846110; analysis pseudocode, not buildable source.
 */

void FUN_00846110(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
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
  } while ((bVar2 != 0) && (bVar2 == bVar1));
  return;
}

