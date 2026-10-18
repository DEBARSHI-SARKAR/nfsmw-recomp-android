/* speed.exe 005d8b00 FUN_005d8b00; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d8b00(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    *(undefined4 *)(param_1 + 0x18) = 1;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x18) = 2;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x18) = 3;
    break;
  case 3:
    goto switchD_005d8b08_caseD_3;
  }
  if ((*(int *)(param_1 + 0x18) != 3) && (*(int *)(param_1 + 0x18) != 2)) {
    *(undefined4 *)(param_1 + 0x20) = _DAT_0089096c;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = _DAT_00890968;
switchD_005d8b08_caseD_3:
  return;
}

