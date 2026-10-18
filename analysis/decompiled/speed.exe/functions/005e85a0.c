/* speed.exe 005e85a0 FUN_005e85a0; analysis pseudocode, not buildable source.
 * calls 00785430 FUN_00785430
 * calls 005db520 FUN_005db520
 */

void __fastcall FUN_005e85a0(int param_1)

{
  if (0 < *(int *)(param_1 + 200)) {
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
  }
  if (*(int *)(param_1 + 200) < 1) {
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_00785430(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffeff;
    FUN_005db520();
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  return;
}

