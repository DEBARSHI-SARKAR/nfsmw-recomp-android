/* speed.exe 00653050 FUN_00653050; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00653050(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x14) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x10) + 0x24);
    do {
      if ((piVar2[-1] == param_2) && (*piVar2 == param_3)) {
        return CONCAT31((int3)(uVar1 * 0x34 >> 8),
                        *(undefined1 *)(uVar1 * 0x34 + 0x30 + *(int *)(param_1 + 0x10)));
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0xd;
    } while (uVar1 < *(uint *)(param_1 + 0x14));
  }
  return uVar1 & 0xffffff00;
}

