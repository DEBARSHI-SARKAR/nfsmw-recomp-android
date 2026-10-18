/* speed.exe 004f4b70 FUN_004f4b70; analysis pseudocode, not buildable source.
 * calls 004afec0 FUN_004afec0
 * calls 004f4af0 FUN_004f4af0
 */

undefined4 __fastcall FUN_004f4b70(int param_1)

{
  FUN_004f4af0();
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_004afec0(0);
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return 1;
}

