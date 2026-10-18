/* speed.exe 005eb5d0 FUN_005eb5d0; analysis pseudocode, not buildable source.
 * calls 005e9860 FUN_005e9860
 * calls 005e3650 FUN_005e3650
 * calls 004655f0 FUN_004655f0
 * calls 005dc970 FUN_005dc970
 */

void __fastcall FUN_005eb5d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1d) != '\0')) {
    FUN_005dc970(iVar1);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_005e3650();
  FUN_005e9860();
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_004655f0(*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

