/* speed.exe 007ed4a1 FUN_007ed4a1; analysis pseudocode, not buildable source.
 * calls 007ee3f3 FUN_007ee3f3
 * calls 007ee4ab FUN_007ee4ab
 */

void __fastcall FUN_007ed4a1(int param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  cVar1 = FUN_007ee4ab(param_1,0);
  if (cVar1 != '\0') {
    FUN_007ee3f3(param_1);
    (**(code **)(param_1 + 0x1c))
              (*(undefined4 *)(param_1 + 0xc),0xffffffff,*(undefined4 *)(param_1 + 0x18));
  }
  return;
}

