/* speed.exe 0056a750 FUN_0056a750; analysis pseudocode, not buildable source.
 * calls 00507e40 FUN_00507e40
 * calls 00503360 FUN_00503360
 * calls 00730390 FUN_00730390
 * calls 00503380 FUN_00503380
 */

void __fastcall FUN_0056a750(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_4;
  
  local_4 = param_1;
  if (*(char *)(param_1 + 0x131) == '\0') {
    FUN_00730390();
  }
  FUN_00503380(0);
  piVar1 = (int *)(param_1 + 0x104);
  iVar2 = 4;
  do {
    if (*piVar1 != 0) {
      local_4 = *piVar1;
      FUN_00503360(&local_4,1);
    }
    piVar1 = piVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00507e40(param_1);
  DAT_009aac81 = 0;
  return;
}

