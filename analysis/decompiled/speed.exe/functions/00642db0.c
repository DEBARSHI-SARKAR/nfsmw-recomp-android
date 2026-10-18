/* speed.exe 00642db0 FUN_00642db0; analysis pseudocode, not buildable source.
 * calls 007356a0 FUN_007356a0
 * calls 00633ef0 FUN_00633ef0
 */

void __thiscall FUN_00642db0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(char *)(param_1 + 9) != '\0') && (param_2 != 0)) {
    param_2 = 1;
  }
  uVar1 = (uint)(DAT_009203ac == '\0') * 4 + 2;
  if ((DAT_009b0fa0 != 5) && (uVar1 < param_2)) {
    param_2 = uVar1;
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    iVar2 = 0;
    do {
      piVar3 = (int *)**(int **)(param_1[4] + 4);
      if (piVar3 != *(int **)(param_1[4] + 4)) {
        do {
          (**(code **)(*(int *)piVar3[2] + 4))(param_1[10],iVar2);
          piVar3 = (int *)*piVar3;
        } while (piVar3 != (int *)*(int *)(param_1[4] + 4));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    FUN_00633ef0();
    param_1[10] = param_1[10] + 1;
  }
  if (DAT_009b0fa0 == 5) {
    FUN_007356a0();
  }
  iVar2 = 0;
  do {
    (**(code **)(*(int *)*param_1 + 4))(0,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  FUN_00633ef0();
  return;
}

