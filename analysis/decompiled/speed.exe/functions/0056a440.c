/* speed.exe 0056a440 FUN_0056a440; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0056a440(undefined1 *param_1,int *param_2,int *param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  if (param_2 != (int *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x2c))();
    if (cVar1 == '\0') {
      uVar2 = 1;
      goto LAB_0056a460;
    }
  }
  uVar2 = 0;
LAB_0056a460:
  *param_1 = uVar2;
  if (param_2 != (int *)0x0) {
    fVar5 = (float10)(**(code **)(*param_2 + 0x18))();
    *(float *)(param_1 + 4) = (float)fVar5;
    uVar3 = (**(code **)(*param_2 + 0x94))();
    *(undefined4 *)(param_1 + 8) = uVar3;
    uVar3 = (**(code **)(*param_2 + 0x98))();
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar3 = (**(code **)(*param_2 + 0xb8))();
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar3 = (**(code **)(*param_2 + 0xa4))();
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    uVar3 = (**(code **)(*param_2 + 0xe0))();
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if (param_3 != (int *)0x0) {
    iVar4 = (**(code **)(*param_3 + 0x40))();
    if (0 < iVar4) {
      uVar3 = (**(code **)(*param_3 + 0x40))();
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
    }
    iVar4 = (**(code **)(*param_3 + 0x44))();
    if (0 < iVar4) {
      uVar3 = (**(code **)(*param_3 + 0x44))();
      *(undefined4 *)(param_1 + 0x20) = uVar3;
    }
  }
  if (-1 < param_4) {
    *(int *)(param_1 + 0x24) = param_4;
  }
  return;
}

