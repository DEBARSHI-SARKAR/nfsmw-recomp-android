/* speed.exe 004cb7c0 FUN_004cb7c0; analysis pseudocode, not buildable source.
 * calls 004c00c0 FUN_004c00c0
 */

int __fastcall FUN_004cb7c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004c00c0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

