/* speed.exe 005ddb30 FUN_005ddb30; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_005ddb30(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x2c0) != 0) {
    piVar2 = *(int **)(param_1 + 0x2c4);
    do {
      if (*piVar2 == param_2) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x2c0));
  }
  return uVar1 & 0xffffff00;
}

