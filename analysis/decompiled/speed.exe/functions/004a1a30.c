/* speed.exe 004a1a30 FUN_004a1a30; analysis pseudocode, not buildable source.
 * calls 0048ff00 FUN_0048ff00
 */

void __thiscall FUN_004a1a30(int param_1,undefined4 param_2)

{
  FUN_0048ff00(0,**(undefined2 **)(*(int *)(param_1 + 0xc) + 4),*(undefined4 *)(param_1 + 0x10),
               param_2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

