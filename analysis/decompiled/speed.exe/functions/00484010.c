/* speed.exe 00484010 FUN_00484010; analysis pseudocode, not buildable source.
 * calls 00478ec0 FUN_00478ec0
 */

int __fastcall FUN_00484010(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00478ec0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

