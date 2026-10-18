/* speed.exe 00717ca0 FUN_00717ca0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __thiscall FUN_00717ca0(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(param_1 + 0xc);
  local_4 = param_2;
  FUN_00713b20(8,&local_8,&PTR_s_HeliSpecific_HeliHazardAlert_00901ef4,&DAT_0099235c,param_1);
  return;
}

