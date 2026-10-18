/* speed.exe 006b7360 FUN_006b7360; analysis pseudocode, not buildable source.
 * calls 006b6fb0 FUN_006b6fb0
 * calls 00401ae0 FUN_00401ae0
 */

void __thiscall FUN_006b7360(int param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  FUN_006b6fb0(param_2);
  if ((*(int *)(param_1 + 0xc0) != 0) && (*(int **)(param_1 + 0xbc) != (int *)0x0)) {
    uVar4 = (**(code **)(**(int **)(param_1 + 0xbc) + 4))();
    *(undefined4 *)(param_2 + 0x78) = uVar4;
    uVar4 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x28))();
    *(undefined4 *)(param_2 + 0x74) = uVar4;
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc0) + 0x20))();
    *(undefined1 *)(param_2 + 0x71) = uVar2;
    iVar5 = (**(code **)(**(int **)(param_1 + 0xbc) + 4))();
    if ((1 < iVar5) && (cVar3 = (**(code **)(**(int **)(param_1 + 0x48) + 0x20))(), cVar3 == '\0'))
    {
      return;
    }
    piVar1 = *(int **)(param_1 + 0xc0);
    fVar6 = (float10)(**(code **)(*piVar1 + 0xc))();
    fVar6 = (float10)(**(code **)(*piVar1 + 0x10))((float)fVar6);
    fVar6 = (float10)(**(code **)(*piVar1 + 4))((float)fVar6);
    fVar6 = (float10)FUN_00401ae0((float)fVar6);
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0xc0) + 0x34))();
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0xc0) + 0x38))();
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0xc0) + 0x3c))((float)fVar8,(float)fVar7);
    fVar7 = (float10)FUN_00401ae0((float)fVar7);
    *(float *)(param_2 + 0x7c) = (float)fVar7;
    *(float *)(param_2 + 0x80) = (float)fVar6;
  }
  return;
}

