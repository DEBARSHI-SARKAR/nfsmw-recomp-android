/* speed.exe 007a9d60 FUN_007a9d60; analysis pseudocode, not buildable source.
 * calls 007a94c0 FUN_007a94c0
 */

void __fastcall FUN_007a9d60(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x574) = 1;
  if ((*(uint *)(DAT_0091cf90 + 300) >> 2 & 1) == 0) {
    FUN_007a94c0(1);
    (**(code **)(**(int **)(param_1 + 0x4c) + 8))(0);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}

