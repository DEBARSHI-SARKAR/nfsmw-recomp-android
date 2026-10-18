/* speed.exe 007082f0 FUN_007082f0; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_007082f0(int param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  if ((*(int *)(param_1 + 0x5c) == 0) ||
     (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 3 == 0)) {
    return (int *)0x0;
  }
  iVar4 = *(int *)(param_1 + 0x5c);
  piVar3 = (int *)0x0;
  if (iVar4 != *(int *)(param_1 + 0x60)) {
    do {
      piVar1 = *(int **)(iVar4 + 4);
      if (piVar1 != (int *)0x0) {
        if (piVar3 != (int *)0x0) {
          fVar5 = (float10)(**(code **)(*piVar1 + 0x58))();
          fVar6 = (float10)(**(code **)(*piVar3 + 0x58))();
          if ((float10)(float)fVar5 <= fVar6) goto LAB_0070836f;
        }
        cVar2 = (**(code **)(*piVar1 + 0x1a0))();
        if (((cVar2 != '\0') && (param_2 != '\0')) ||
           (cVar2 = (**(code **)(*piVar1 + 0x1a0))(), cVar2 == '\0')) {
          piVar3 = piVar1;
        }
      }
LAB_0070836f:
      iVar4 = iVar4 + 8;
    } while (iVar4 != *(int *)(param_1 + 0x60));
  }
  return piVar3;
}

