/* speed.exe 0044acf0 FUN_0044acf0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0044acf0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*param_1 != -0x7ffc8fe0) {
    return 0;
  }
  if (DAT_0090dabc == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(DAT_0090dabc + -4);
  }
  do {
    puVar4 = puVar3;
    if (puVar4 == (undefined4 *)&DAT_0090dab8) {
      return 1;
    }
    if (puVar4[1] == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(puVar4[1] + -4);
    }
  } while ((int *)puVar4[3] != param_1);
  iVar1 = puVar4[1];
  piVar2 = (int *)puVar4[2];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  (**(code **)*puVar4)(1);
  return 1;
}

