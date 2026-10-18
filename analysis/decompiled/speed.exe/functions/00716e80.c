/* speed.exe 00716e80 FUN_00716e80; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_00716e80(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_c = *(undefined4 *)(param_1 + 0xc);
  local_8 = 1;
  local_4 = (*(char *)(param_1 + 0x34) != '\0') + 1;
  FUN_00713b20(0xc,&local_c,&PTR_s_Acknowledge_00901bcc,&DAT_00992584,param_1);
  return;
}

