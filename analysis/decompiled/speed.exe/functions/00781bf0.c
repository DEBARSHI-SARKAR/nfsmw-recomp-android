/* speed.exe 00781bf0 FUN_00781bf0; analysis pseudocode, not buildable source.
 * calls 0076ad80 FUN_0076ad80
 * calls 00780330 FUN_00780330
 */

void __thiscall FUN_00781bf0(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_4;
  
  piVar4 = *(int **)(*(int *)(param_1 + 8) + 4);
  piVar5 = (int *)*piVar4;
  local_4 = param_1;
  if (piVar5 != piVar4) {
    do {
      if (param_2 == piVar5[3]) {
        FUN_0076ad80();
        FUN_00780330(&local_4,piVar5);
        piVar4 = *(int **)(*(int *)(param_1 + 8) + 4);
        if (piVar5 == piVar4) {
          return;
        }
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != piVar4);
  }
  return;
}

