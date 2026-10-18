/* speed.exe 0042b070 FUN_0042b070; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0042b070(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  char local_5;
  float local_4;
  
  local_5 = '\0';
  local_4 = 0.0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    local_5 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
    local_4 = *(float *)(*(int *)(param_1 + 4) + 0x44);
  }
  piVar4 = (int *)**(int **)(param_1 + 0xc);
  piVar3 = (int *)0x0;
  if (piVar4 != *(int **)(param_1 + 0xc)) {
    do {
      piVar1 = (int *)piVar4[2];
      if (((piVar1 != *(int **)(param_1 + 4)) &&
          (cVar2 = (**(code **)(*piVar1 + 8))(param_2), cVar2 != '\0')) &&
         ((local_5 != '\0' || (local_4 <= (float)piVar1[0x11])))) {
        local_4 = (float)piVar1[0x11];
        local_5 = '\0';
        piVar3 = piVar1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0xc));
    if (piVar3 != (int *)0x0) {
      if (*(int **)(param_1 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 4) + 0x18))(param_2);
      }
      *(int **)(param_1 + 4) = piVar3;
      (**(code **)(*piVar3 + 0x14))(param_2);
    }
  }
  return;
}

