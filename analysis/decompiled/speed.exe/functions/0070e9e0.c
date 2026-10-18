/* speed.exe 0070e9e0 FUN_0070e9e0; analysis pseudocode, not buildable source.
 * calls 00705820 FUN_00705820
 */

int __fastcall FUN_0070e9e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00705820();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

