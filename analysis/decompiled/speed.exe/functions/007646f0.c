/* speed.exe 007646f0 FUN_007646f0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_007646f0(int param_1,short param_2)

{
  uint uVar1;
  short *psVar2;
  
  uVar1 = 0;
  if (*(byte *)(param_1 + 0x10) != 0) {
    psVar2 = (short *)(param_1 + 0x12);
    do {
      if (*psVar2 == param_2) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 1;
    } while ((int)uVar1 < (int)(uint)*(byte *)(param_1 + 0x10));
  }
  return uVar1 & 0xffffff00;
}

