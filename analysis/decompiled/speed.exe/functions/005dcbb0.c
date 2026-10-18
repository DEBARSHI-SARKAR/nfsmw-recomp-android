/* speed.exe 005dcbb0 FUN_005dcbb0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005dcbb0(uint *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)param_1[0xf];
  uVar2 = 0;
  if (*param_1 != 0) {
    do {
      if (*piVar1 == 0) break;
      if (*piVar1 == param_2) goto LAB_005dcbd5;
      piVar1 = piVar1 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  *piVar1 = param_2;
LAB_005dcbd5:
  piVar1[1] = piVar1[1] & 0xfffffffd;
  return;
}

