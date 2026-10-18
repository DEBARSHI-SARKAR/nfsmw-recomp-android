/* speed.exe 005dca70 FUN_005dca70; analysis pseudocode, not buildable source.
 */

bool __thiscall FUN_005dca70(uint *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)param_1[0xf];
  uVar2 = 0;
  if (*param_1 != 0) {
    do {
      if (*piVar1 == 0) break;
      if (*piVar1 == param_2) goto LAB_005dca95;
      piVar1 = piVar1 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  *piVar1 = param_2;
LAB_005dca95:
  return (piVar1[1] & param_3) != 0;
}

