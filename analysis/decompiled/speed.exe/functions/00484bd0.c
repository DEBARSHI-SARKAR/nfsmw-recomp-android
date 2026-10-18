/* speed.exe 00484bd0 FUN_00484bd0; analysis pseudocode, not buildable source.
 * calls 00478d40 FUN_00478d40
 */

int __fastcall FUN_00484bd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00478d40();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

