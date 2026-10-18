/* speed.exe 0083e290 FUN_0083e290; analysis pseudocode, not buildable source.
 */

void FUN_0083e290(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((*(code **)(param_1 + 0x24) != (code *)0x0) && (*param_2 != param_3)) {
    iVar1 = (**(code **)(param_1 + 0x24))
                      (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),*param_2);
    if (iVar1 < 1) {
      iVar1 = (**(code **)(param_1 + 0x24))
                        (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),param_3);
      if (iVar1 < 1) goto LAB_0083e2d4;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
LAB_0083e2d4:
  *param_2 = param_3;
  return;
}

