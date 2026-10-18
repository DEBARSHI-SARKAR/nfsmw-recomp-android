/* speed.exe 00830890 FUN_00830890; analysis pseudocode, not buildable source.
 * calls 0082f9f0 FUN_0082f9f0
 * calls 00829260 FUN_00829260
 */

undefined4 FUN_00830890(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_2c [10];
  
  if ((((int)param_2 < 0) ||
      (iVar2 = (**(code **)(**(int **)(param_1 + 300) + 0x6c))(), iVar2 <= (int)param_2)) ||
     (piVar3 = (int *)(**(code **)(**(int **)(param_1 + 300) + 0x74))(param_2), piVar3 == (int *)0x0
     )) {
    uVar4 = 0xfffffff8;
  }
  else {
    sVar1 = *(short *)(param_1 + 4);
    piVar5 = local_2c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    if ((-1 < sVar1) && (iVar2 = FUN_0082f9f0((int)sVar1), (iVar2 >> 0x10 & 0xffffU) == param_2)) {
      FUN_00829260(param_1);
    }
    uVar4 = (**(code **)(**(int **)(param_1 + 300) + 0x88))(param_2);
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) - local_2c[2];
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) - local_2c[3];
    if (*(uint *)(param_1 + 0x11c) == param_2) {
      *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
      return uVar4;
    }
  }
  return uVar4;
}

