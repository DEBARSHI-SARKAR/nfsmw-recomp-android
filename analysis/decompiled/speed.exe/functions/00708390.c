/* speed.exe 00708390 FUN_00708390; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_00708390(int param_1,char param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  
  if ((*(int *)(param_1 + 0x5c) != 0) &&
     (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 3 != 0)) {
    iVar3 = *(int *)(param_1 + 0x5c);
    piVar4 = (int *)0x0;
    if (iVar3 != *(int *)(param_1 + 0x60)) {
      do {
        piVar1 = *(int **)(iVar3 + 4);
        if (((piVar1 != (int *)0x0) &&
            ((param_2 == '\0' || (cVar2 = (**(code **)(*piVar1 + 0x70))(), cVar2 != '\0')))) &&
           ((param_3 != '\0' || (cVar2 = (**(code **)(*piVar1 + 0x1a0))(), cVar2 == '\0')))) {
          if (piVar4 == (int *)0x0) {
            piVar4 = piVar1;
          }
          fVar5 = (float10)(**(code **)(*piVar1 + 0x58))();
          fVar6 = (float10)(**(code **)(*piVar4 + 0x58))();
          if ((float10)(float)fVar5 < fVar6) {
            piVar4 = piVar1;
          }
        }
        iVar3 = iVar3 + 8;
      } while (iVar3 != *(int *)(param_1 + 0x60));
    }
    return piVar4;
  }
  return (int *)0x0;
}

