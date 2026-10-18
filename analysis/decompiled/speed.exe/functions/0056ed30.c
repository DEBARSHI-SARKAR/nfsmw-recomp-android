/* speed.exe 0056ed30 FUN_0056ed30; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_0056ed30(int param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x1134);
  do {
    if (*pcVar2 == -1) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 0x198;
  } while ((int)uVar1 < 0x4b);
  return uVar1 & 0xffffff00;
}

