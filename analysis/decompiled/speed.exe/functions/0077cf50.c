/* speed.exe 0077cf50 FUN_0077cf50; analysis pseudocode, not buildable source.
 * calls 00771600 FUN_00771600
 */

int __fastcall FUN_0077cf50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00771600();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

