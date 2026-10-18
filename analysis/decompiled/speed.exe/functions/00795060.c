/* speed.exe 00795060 FUN_00795060; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 00844b00 FUN_00844b00
 */

void __fastcall FUN_00795060(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_00794f80();
  if (*(int *)(iVar1 + 0x38) != 0) {
    iVar1 = 0;
    piVar3 = param_1;
    do {
      piVar3 = piVar3 + 1;
      if (*piVar3 != 0) {
        iVar2 = FUN_00794f80(iVar1 + 5,*piVar3);
        FUN_00844b00(*(undefined4 *)(iVar2 + 0x38));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x12);
  }
  piVar3 = param_1;
  for (iVar1 = 0x21; piVar3 = piVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = 0;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  piVar3 = param_1 + 0x2b;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  puVar4 = &DAT_009b3e20;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  return;
}

