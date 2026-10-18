/* speed.exe 0058aff0 FUN_0058aff0; analysis pseudocode, not buildable source.
 * calls 0045f1c0 FUN_0045f1c0
 * calls 0045f2e0 FUN_0045f2e0
 * calls 00466330 FUN_00466330
 */

void __fastcall FUN_0058aff0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    iVar3 = FUN_0045f1c0(piVar1);
    if (iVar3 < 0) {
      FUN_0045f2e0(piVar1);
      if (*(int *)(DAT_0091cfa4 + 0x18) == 0) {
        FUN_00466330(DAT_0091cfa4);
        DAT_0091cfa4 = 0;
      }
    }
    else {
      FUN_0045f2e0(piVar1);
    }
    piVar1 = (int *)*param_1;
  }
  return;
}

