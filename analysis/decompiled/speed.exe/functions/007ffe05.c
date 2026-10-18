/* speed.exe 007ffe05 FUN_007ffe05; analysis pseudocode, not buildable source.
 * calls 00806d1a FUN_00806d1a
 */

void FUN_007ffe05(int param_1)

{
  FUN_00806d1a(param_1,(*(int *)(param_1 + 0x1b8) + 1) * 0x30,
               "F:%d G:%d Q:%d S:%d B: %d W:%d H:%d V:%d Decode:%8d, Blit:%8d, PP:%8d, P:%d",
               *(undefined1 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x69c),
               **(undefined4 **)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x1e8),
               *(undefined4 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x1f8),
               *(undefined4 *)(param_1 + 500),*(undefined1 *)(param_1 + 0x19c),
               *(undefined4 *)(param_1 + 0x918),*(undefined4 *)(param_1 + 0x944),
               *(undefined4 *)(param_1 + 0x93c),*(undefined4 *)(param_1 + 0x1a0));
  return;
}

