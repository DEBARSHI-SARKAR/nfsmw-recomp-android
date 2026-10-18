/* speed.exe 00646940 FUN_00646940; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00644d90 FUN_00644d90
 */

void __fastcall FUN_00646940(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  piVar3 = (int *)**(int **)(param_1[4] + 4);
  if (piVar3 != *(int **)(param_1[4] + 4)) {
    do {
      piVar1 = piVar3 + 2;
      piVar3 = (int *)*piVar3;
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
    } while (piVar3 != (int *)*(int *)(param_1[4] + 4));
  }
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    FUN_00644d90();
    FUN_005d0370(iVar2,0xc,0);
  }
  return;
}

