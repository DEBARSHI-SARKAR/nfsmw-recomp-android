/* speed.exe 008548e0 FUN_008548e0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_008548e0(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *in_EAX;
  byte bVar2;
  
  do {
    bVar2 = *in_EAX;
    in_EAX = in_EAX + 1;
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

