/* speed.exe 007317a0 FUN_007317a0; analysis pseudocode, not buildable source.
 * calls 00730460 FUN_00730460
 * calls 0072df20 FUN_0072df20
 * calls 00730390 FUN_00730390
 */

void __fastcall FUN_007317a0(int param_1)

{
  char cVar1;
  int local_4;
  
  *(undefined1 *)(param_1 + 0x2b0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  local_4 = param_1;
  if ((*(char *)(param_1 + 0x2b1) == '\0') && (*(int *)(param_1 + 0x838) != 0)) {
    cVar1 = FUN_0072df20(&local_4);
    if (cVar1 != '\0') {
      FUN_00730460(&local_4);
    }
  }
  FUN_00730390();
  return;
}

