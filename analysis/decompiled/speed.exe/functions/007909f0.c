/* speed.exe 007909f0 FUN_007909f0; analysis pseudocode, not buildable source.
 * calls 0083e440 FUN_0083e440
 * calls 0083e480 FUN_0083e480
 */

void __fastcall FUN_007909f0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0083e440(*(int *)(param_1 + 0xc),1);
    FUN_0083e480(*(undefined4 *)(param_1 + 0xc));
    if (*(code **)(param_1 + 0x14) != (code *)0x0) {
      (**(code **)(param_1 + 0x14))(2,0,*(undefined4 *)(param_1 + 0x18));
    }
  }
  return;
}

