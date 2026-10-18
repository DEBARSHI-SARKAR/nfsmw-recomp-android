/* speed.exe 00591a00 FUN_00591a00; analysis pseudocode, not buildable source.
 * calls 0045f1c0 FUN_0045f1c0
 * calls 0045f2e0 FUN_0045f2e0
 * calls 00466330 FUN_00466330
 */

void __fastcall FUN_00591a00(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x18);
  while (piVar2 != piVar1) {
    piVar2 = (int *)*piVar1;
    piVar3 = (int *)piVar2[1];
    iVar4 = *piVar2;
    *piVar3 = iVar4;
    *(int **)(iVar4 + 4) = piVar3;
    iVar4 = FUN_0045f1c0(piVar2);
    if (iVar4 < 0) {
      FUN_0045f2e0(piVar2);
      if (*(int *)(DAT_0091cfa4 + 0x18) == 0) {
        FUN_00466330(DAT_0091cfa4);
        DAT_0091cfa4 = 0;
      }
    }
    else {
      FUN_0045f2e0(piVar2);
    }
    piVar2 = (int *)*piVar1;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffd;
  return;
}

