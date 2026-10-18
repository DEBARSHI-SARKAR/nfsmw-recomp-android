/* speed.exe 004ccdd0 FUN_004ccdd0; analysis pseudocode, not buildable source.
 * calls 004c00a0 FUN_004c00a0
 */

int __fastcall FUN_004ccdd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004c00a0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

