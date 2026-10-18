/* speed.exe 00594bc0 FUN_00594bc0; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 004647c0 FUN_004647c0
 */

void FUN_00594bc0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uStack_88;
  undefined4 uStack_87;
  
  if (DAT_0092d884 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*DAT_0092d87c;
  }
  iVar1 = (**(code **)(*piVar2 + 0x20))();
  iVar1 = *(int *)(iVar1 + 0x314);
  if (iVar1 != 0) {
    uStack_88 = 0;
    puVar4 = &uStack_87;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    iVar3 = FUN_0056bb80();
    if (iVar3 == 0) {
      iVar3 = FUN_0056bb80();
    }
    FUN_004647c0(&uStack_88,iVar3,param_1 + 0x1156);
    (**(code **)(**(int **)(iVar1 + 0x34) + 4))(&uStack_88,0,0x9d73bc16,0,0,5);
  }
  return;
}

