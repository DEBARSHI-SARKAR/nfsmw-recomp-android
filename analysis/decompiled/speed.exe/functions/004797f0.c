/* speed.exe 004797f0 FUN_004797f0; analysis pseudocode, not buildable source.
 * calls 004d5ce0 FUN_004d5ce0
 */

void __thiscall
FUN_004797f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(char **)(param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  if (((*(int **)(param_1 + 0x20) != (int *)0x0) &&
      ((**(code **)(**(int **)(param_1 + 0x20) + 0x10))(&param_2), param_5 != (char *)0x0)) &&
     (*param_5 != '\0')) {
    *(char **)(param_1 + 0x1c) = param_5;
    *(undefined4 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x14) = param_3;
    *(undefined4 *)(param_1 + 0x18) = param_4;
  }
  if (((((*(int **)(param_1 + 0x20) == (int *)0x0) ||
        (piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0xc))(),
        *piVar2 != *(int *)(param_1 + 0x10))) || (piVar2[1] != *(int *)(param_1 + 0x14))) &&
      ((*(char **)(param_1 + 0x1c) != (char *)0x0 && (**(char **)(param_1 + 0x1c) != '\0')))) &&
     (piVar2 = DAT_009111fc, DAT_009111fc != (int *)0x0)) {
    while (*piVar2 != *(int *)(param_1 + 0x18)) {
      piVar1 = piVar2 + 2;
      piVar2 = (int *)*piVar1;
      if ((int *)*piVar1 == (int *)0x0) {
        return;
      }
    }
    iVar3 = (*(code *)piVar2[1])(param_1);
    if (iVar3 != 0) {
      if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      *(int *)(param_1 + 0x20) = iVar3;
      FUN_004d5ce0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                   *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                   *(undefined4 *)(param_1 + 8));
    }
  }
  return;
}

