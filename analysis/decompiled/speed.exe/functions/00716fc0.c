/* speed.exe 00716fc0 FUN_00716fc0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_00716fc0(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(param_1 + 0xc);
  local_4 = 1;
  FUN_00713b20(8,&local_8,&PTR_s_Interrupts_Interrupt_00901f1c,&DAT_00992614,param_1);
  return;
}

