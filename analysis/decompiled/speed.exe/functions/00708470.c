/* speed.exe 00708470 FUN_00708470; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00708470(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar2 = (**(code **)(*param_2 + 0x1ac))();
  if ((((cVar2 == '\x01') && (iVar5 = *(int *)(param_1 + 0x5c), iVar5 != 0)) &&
      (1 < (uint)(*(int *)(param_1 + 0x60) - iVar5 >> 3))) &&
     ((*(int *)(param_1 + 0x1d4) != 2 && (iVar5 != *(int *)(param_1 + 0x60))))) {
    do {
      cVar2 = (**(code **)(**(int **)(iVar5 + 4) + 0x19c))();
      if (cVar2 != '\0') {
        piVar1 = *(int **)(iVar5 + 4);
        iVar3 = (**(code **)(*param_2 + 0x30))();
        iVar4 = (**(code **)(*piVar1 + 0x30))();
        if (iVar4 != iVar3) {
          (**(code **)(**(int **)(iVar5 + 4) + 0x124))();
        }
      }
      iVar5 = iVar5 + 8;
    } while (iVar5 != *(int *)(param_1 + 0x60));
  }
  return;
}

