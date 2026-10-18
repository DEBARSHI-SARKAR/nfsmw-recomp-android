/* speed.exe 00575550 FUN_00575550; analysis pseudocode, not buildable source.
 * calls 0054e8e0 FUN_0054e8e0
 */

void __fastcall FUN_00575550(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0054e8e0(*(undefined4 *)(param_1 + 0x48));
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    return;
  }
  cVar1 = FUN_0054e8e0(*(undefined4 *)(param_1 + 0x4c));
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x58) = 1;
  }
  return;
}

