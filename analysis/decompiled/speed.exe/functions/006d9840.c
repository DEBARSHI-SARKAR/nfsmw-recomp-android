/* speed.exe 006d9840 FUN_006d9840; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006d9840(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(param_1 + 0x40);
  iVar2 = 2;
  do {
    iVar4 = 8;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

