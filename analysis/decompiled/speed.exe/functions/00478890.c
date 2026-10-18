/* speed.exe 00478890 FUN_00478890; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00478890(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    iVar4 = *(int *)(param_2 + 8);
    piVar3 = (int *)(param_2 + 0xc);
    if (0 < iVar4) {
      do {
        piVar3[2] = (int)piVar1;
        puVar2 = (undefined4 *)piVar1[2];
        *puVar2 = piVar3;
        piVar1[2] = (int)piVar3;
        piVar3[1] = (int)puVar2;
        *piVar3 = (int)(piVar1 + 1);
        iVar4 = iVar4 + -1;
        *piVar1 = *piVar1 + 1;
        piVar3 = piVar3 + (short)piVar3[3] * 6 + 8;
      } while (iVar4 != 0);
    }
  }
  return;
}

