/* speed.exe 004f3580 FUN_004f3580; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 00653bb0 FUN_00653bb0
 * calls 004ed210 FUN_004ed210
 */

void __fastcall FUN_004f3580(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c) = 1;
  }
  *(undefined4 *)(param_1 + 300) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  iVar1 = FUN_00452430();
  if (iVar1 == -0x113dd8e6) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_00653bb0(0);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_004ed210(0,0,0,0,0);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return;
}

