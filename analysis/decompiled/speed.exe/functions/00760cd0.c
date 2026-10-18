/* speed.exe 00760cd0 FUN_00760cd0; analysis pseudocode, not buildable source.
 * calls 00760ca0 FUN_00760ca0
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_00760cd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     ((((iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x1144), iVar3 == 4 || (iVar3 == 6)) ||
       (iVar3 == 0)) || (iVar3 == 5)))) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  piVar4 = (int *)(param_1 + 8);
  iVar3 = 4;
  do {
    iVar1 = *piVar4;
    if ((iVar1 != 0) &&
       (((iVar2 = *(int *)(iVar1 + 0x1144), iVar2 == 4 || (iVar2 == 6)) ||
        ((iVar2 == 0 || (iVar2 == 5)))))) {
      FUN_00760ca0();
      FUN_004655f0(iVar1);
      *piVar4 = 0;
      *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + -1;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

