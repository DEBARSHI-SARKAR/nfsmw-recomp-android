/* speed.exe 00581470 FUN_00581470; analysis pseudocode, not buildable source.
 * calls 0056f340 FUN_0056f340
 */

void __thiscall FUN_00581470(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  do {
    if (*piVar2 == param_2) {
      piVar2 = param_1 + iVar1 * 5;
      goto LAB_00581491;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 5;
  } while (iVar1 < 200);
  piVar2 = (int *)0x0;
LAB_00581491:
  piVar2[1] = *(int *)(param_3 + 0x48);
  piVar2[2] = *(int *)(param_3 + 0x50);
  piVar2[3] = *(int *)(param_3 + 0x58);
  if ((*(byte *)(piVar2 + 4) < 0x4c) &&
     (param_1 + (uint)*(byte *)(piVar2 + 4) * 0x66 + 1000 != (int *)0x0)) {
    FUN_0056f340(param_3);
  }
  return;
}

