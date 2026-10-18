/* speed.exe 00512a90 FUN_00512a90; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

undefined4 __fastcall FUN_00512a90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00460d20(param_1 + 0x40,param_1 + 0x60);
  if (iVar1 != 0) {
    return 1;
  }
  if ((((0 < *(int *)(param_1 + 0x104)) && (*(int *)(param_1 + 0x104) < 0x20)) &&
      (0 < *(int *)(param_1 + 0x108))) && (*(int *)(param_1 + 0x108) < 0xd)) {
    return 0;
  }
  return 4;
}

