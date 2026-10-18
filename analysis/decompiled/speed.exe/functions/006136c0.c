/* speed.exe 006136c0 FUN_006136c0; analysis pseudocode, not buildable source.
 * calls 0060c6e0 FUN_0060c6e0
 */

int __fastcall FUN_006136c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0060c6e0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

