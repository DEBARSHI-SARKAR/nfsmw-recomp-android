/* speed.exe 004cb750 FUN_004cb750; analysis pseudocode, not buildable source.
 * calls 004c00a0 FUN_004c00a0
 */

int __fastcall FUN_004cb750(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004c00a0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

