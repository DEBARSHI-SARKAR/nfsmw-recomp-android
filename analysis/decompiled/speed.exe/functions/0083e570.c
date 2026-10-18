/* speed.exe 0083e570 FUN_0083e570; analysis pseudocode, not buildable source.
 * calls 0084d340 FUN_0084d340
 */

void FUN_0083e570(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xd8);
  iVar2 = 4;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 4))(iVar1);
    }
    *piVar3 = 0;
    piVar3 = piVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_0084d340(*(int *)(param_1 + 0xa8));
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_0084d340(*(int *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  return;
}

