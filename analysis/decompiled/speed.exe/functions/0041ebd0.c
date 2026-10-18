/* speed.exe 0041ebd0 FUN_0041ebd0; analysis pseudocode, not buildable source.
 */

bool __fastcall FUN_0041ebd0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)**(int **)(param_1 + 0x94);
  iVar3 = 0;
  if (piVar4 != *(int **)(param_1 + 0x94)) {
    do {
      piVar1 = (int *)piVar4[2];
      cVar2 = (**(code **)(*piVar1 + 0x88))();
      if ((cVar2 == '\0') && (cVar2 = (**(code **)(*piVar1 + 0x5c))(), cVar2 == '\0')) {
        iVar3 = iVar3 + 1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0x94));
  }
  return (uint)(DAT_0092cd24 - iVar3) < 0x14;
}

