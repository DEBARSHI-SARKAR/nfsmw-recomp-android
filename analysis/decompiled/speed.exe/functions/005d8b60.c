/* speed.exe 005d8b60 FUN_005d8b60; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d8b60(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    goto switchD_005d8b68_caseD_0;
  case 1:
    *(undefined4 *)(param_1 + 0x18) = 0;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x18) = 1;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x18) = 2;
  }
  if ((*(int *)(param_1 + 0x18) != 3) && (*(int *)(param_1 + 0x18) != 2)) {
    *(undefined4 *)(param_1 + 0x20) = _DAT_00890968;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = _DAT_0089096c;
switchD_005d8b68_caseD_0:
  return;
}

