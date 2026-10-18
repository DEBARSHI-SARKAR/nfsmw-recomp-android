/* speed.exe 005e3650 FUN_005e3650; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_005e3650(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = param_1 + 4;
  iVar1 = 4;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 8))(1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (param_1[3] != 0) {
    uVar3 = 0;
    if (param_1[1] + *param_1 != 0) {
      iVar1 = 0;
      do {
        (**(code **)(*(int *)(param_1[3] + iVar1) + 8))(0);
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 0x14;
      } while (uVar3 < (uint)(param_1[1] + *param_1));
    }
    FUN_004655f0(param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    FUN_004655f0(param_1[2]);
    param_1[2] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

