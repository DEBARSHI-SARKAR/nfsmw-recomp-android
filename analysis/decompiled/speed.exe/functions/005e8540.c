/* speed.exe 005e8540 FUN_005e8540; analysis pseudocode, not buildable source.
 * calls 00783b60 FUN_00783b60
 * calls 005e2b10 FUN_005e2b10
 */

void __fastcall FUN_005e8540(int param_1)

{
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  if (*(char *)(param_1 + 0xc4) == '\0') {
    if (*(int *)(param_1 + 0x74) == 0) {
      FUN_00783b60(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x74) = 1;
    }
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100;
    FUN_005e2b10();
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  return;
}

