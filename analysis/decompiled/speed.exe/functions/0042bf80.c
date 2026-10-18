/* speed.exe 0042bf80 FUN_0042bf80; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_0042bf80(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 != 0)) {
    puVar4 = *(undefined4 **)(param_1 + 0xc);
    if (puVar4 != *(undefined4 **)(param_1 + 0x10)) {
      do {
        piVar1 = (int *)*puVar4;
        piVar2 = (int *)(**(code **)(*piVar1 + 4))();
        iVar3 = (**(code **)(*piVar2 + 0x34))();
        if (iVar3 == param_2) {
          return piVar1;
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != *(undefined4 **)(param_1 + 0x10));
    }
    return (int *)0x0;
  }
  return (int *)0x0;
}

