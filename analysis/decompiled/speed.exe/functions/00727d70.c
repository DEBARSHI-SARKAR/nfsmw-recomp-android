/* speed.exe 00727d70 FUN_00727d70; analysis pseudocode, not buildable source.
 * calls 0065d530 thunk_FUN_006589a0
 */

void __fastcall FUN_00727d70(int param_1)

{
  thunk_FUN_006589a0(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),
                     *(undefined4 *)(param_1 + 0xb4));
  *(undefined1 *)(param_1 + 0xb1) = 0;
  return;
}

