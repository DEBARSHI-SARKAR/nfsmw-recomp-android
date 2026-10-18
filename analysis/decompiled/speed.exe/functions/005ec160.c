/* speed.exe 005ec160 FUN_005ec160; analysis pseudocode, not buildable source.
 * calls 0056d740 FUN_0056d740
 * calls 005e5c10 FUN_005e5c10
 * calls 0056d750 FUN_0056d750
 * calls 0056d720 FUN_0056d720
 */

int __fastcall FUN_005ec160(int param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)**(int **)(param_1 + 0x2a8);
  iVar5 = -1;
  if (piVar6 != *(int **)(param_1 + 0x2a8)) {
    do {
      iVar1 = piVar6[2];
      iVar4 = FUN_0056d720(iVar1);
      if (iVar4 != 0) {
        cVar2 = FUN_0056d750();
        if ((cVar2 != '\0') && (iVar5 == -1)) {
          iVar5 = iVar1;
        }
        *(undefined1 *)(iVar4 + 1) = 2;
        uVar3 = FUN_0056d740();
        *(undefined2 *)(iVar4 + 2) = uVar3;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(param_1 + 0x2a8));
    if (iVar5 != -1) goto LAB_005ec1f7;
  }
  if (*(int *)(param_1 + 0x2ac) != 0) {
    iVar5 = *(int *)(**(int **)(param_1 + 0x2a8) + 8);
  }
LAB_005ec1f7:
  FUN_005e5c10();
  return iVar5;
}

