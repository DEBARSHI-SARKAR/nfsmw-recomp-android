/* speed.exe 004bace0 FUN_004bace0; analysis pseudocode, not buildable source.
 * calls 004b21b0 FUN_004b21b0
 * calls 0081c4d8 FUN_0081c4d8
 * calls 0081c4b0 FUN_0081c4b0
 */

void __thiscall FUN_004bace0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_004b21b0();
  if (cVar1 != '\0') {
    FUN_0081c4d8(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_0081c4b0(*(undefined4 *)(param_1 + 0x14),0,param_2,param_3);
  return;
}

