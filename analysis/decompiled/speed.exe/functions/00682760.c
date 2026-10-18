/* speed.exe 00682760 FUN_00682760; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00682760(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  void **ppvVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b6a8;
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar2 = (undefined4 *)*puVar1;
  local_4 = 0;
  ppvVar4 = &pvStack_c;
  pvStack_c = ExceptionList;
  for (; ExceptionList = ppvVar4, puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    if ((undefined4 *)puVar2[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar2[2])(1);
    }
    ppvVar4 = ExceptionList;
  }
  piVar3 = *(int **)(param_1 + 4);
  piVar5 = (int *)*piVar3;
  *piVar3 = (int)piVar3;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (piVar5 != *(int **)(param_1 + 4)) {
    do {
      piVar3 = (int *)*piVar5;
      FUN_005d0370(piVar5,0xc,0);
      piVar5 = piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 4));
  }
  piVar3 = *(int **)(param_1 + 4);
  piVar5 = (int *)*piVar3;
  *piVar3 = (int)piVar3;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  if (piVar5 != *(int **)(param_1 + 4)) {
    do {
      piVar3 = (int *)*piVar5;
      FUN_005d0370(piVar5,0xc,0);
      piVar5 = piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  ExceptionList = pvStack_c;
  return;
}

