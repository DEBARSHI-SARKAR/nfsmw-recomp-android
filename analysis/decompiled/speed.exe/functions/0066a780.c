/* speed.exe 0066a780 FUN_0066a780; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0066a780(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != DAT_0091ddbc) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      piVar2 = (int *)(param_1 + 0x38);
      do {
        if (*piVar2 == param_2) {
          return iVar1 * 0x30 + 0x10 + param_1;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0xc;
      } while (iVar1 < *(int *)(param_1 + 4));
    }
  }
  return 0;
}

