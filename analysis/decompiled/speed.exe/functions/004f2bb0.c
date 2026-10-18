/* speed.exe 004f2bb0 FUN_004f2bb0; analysis pseudocode, not buildable source.
 * calls 004e5770 FUN_004e5770
 */

void __fastcall FUN_004f2bb0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if (((*(uint *)(param_1 + 0x28) & 1 << ((byte)iVar4 & 0x1f)) != 0) &&
       (piVar3 = (int *)FUN_004e5770(*(undefined4 *)(param_1 + 0x10),iVar4), piVar3 != (int *)0x0))
    {
      (**(code **)(*piVar3 + 0x14))(param_1);
      iVar1 = *(int *)(param_1 + 0x24);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      if (iVar1 == 0) {
        *(int **)(param_1 + 0x24) = piVar3;
      }
      else {
        iVar2 = *(int *)(iVar1 + 4);
        while (iVar2 != 0) {
          iVar1 = *(int *)(iVar1 + 4);
          iVar2 = *(int *)(iVar1 + 4);
        }
        *(int **)(iVar1 + 4) = piVar3;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  return;
}

