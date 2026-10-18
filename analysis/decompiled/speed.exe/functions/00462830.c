/* speed.exe 00462830 FUN_00462830; analysis pseudocode, not buildable source.
 * calls 0045d490 FUN_0045d490
 */

void __thiscall FUN_00462830(int *param_1,code *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = (int *)*param_1;
  iVar3 = 0;
  piVar4 = (int *)*piVar6;
  if (piVar6 != param_1) {
    do {
      if (piVar4 == param_1) break;
      iVar2 = (*param_2)(piVar6,piVar4);
      if (iVar2 == 0) {
        iVar2 = *piVar4;
        piVar5 = (int *)piVar4[1];
        *piVar5 = iVar2;
        *(int **)(iVar2 + 4) = piVar5;
        puVar1 = (undefined4 *)piVar6[1];
        *puVar1 = piVar4;
        piVar6[1] = (int)piVar4;
        piVar4[1] = (int)puVar1;
        *piVar4 = (int)piVar6;
        piVar5 = (int *)*piVar6;
        iVar3 = iVar3 + 1;
      }
      else {
        piVar5 = (int *)*piVar4;
        piVar6 = piVar4;
      }
      piVar4 = piVar5;
    } while (piVar6 != param_1);
    if (iVar3 != 0) {
      FUN_0045d490(param_2);
    }
  }
  return;
}

