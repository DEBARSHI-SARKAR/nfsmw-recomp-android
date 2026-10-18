/* speed.exe 005dca40 FUN_005dca40; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005dca40(uint *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)param_1[0xf];
  uVar2 = 0;
  if (*param_1 != 0) {
    do {
      if (*piVar1 == 0) break;
      if (*piVar1 == param_2) {
        return;
      }
      piVar1 = piVar1 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  *piVar1 = param_2;
  return;
}

