/* speed.exe 00719910 FUN_00719910; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __thiscall FUN_00719910(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(param_1 + 0xc);
  local_4 = param_2;
  FUN_00713b20(8,&local_8,&PTR_s_Interrupts_InterruptRam_HO_00901f34,&DAT_0099234c,param_1);
  return;
}

