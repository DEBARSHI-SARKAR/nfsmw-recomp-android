/* speed.exe 00716ec0 FUN_00716ec0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_00716ec0(int param_1)

{
  bool bVar1;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  local_c = *(undefined4 *)(param_1 + 0xc);
  local_4 = (*(char *)(param_1 + 0x34) != '\0') + 1;
  if (((int)*(char *)(*(int *)(DAT_00993cc8 + 0x184) + 0xb0) <= *(int *)(DAT_00993cc8 + 0x104)) ||
     (*(float *)(*(int *)(DAT_00993cc8 + 0x184) + 0x94) <= *(float *)(DAT_00993cc8 + 0x140))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_8 = !bVar1 + 1;
  FUN_00713b20(0xc,&local_c,&PTR_s_Acknowledge_00901bcc,&DAT_00992584,param_1);
  return;
}

