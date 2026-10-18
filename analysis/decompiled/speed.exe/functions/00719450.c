/* speed.exe 00719450 FUN_00719450; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __thiscall FUN_00719450(int param_1,int param_2)

{
  byte bVar1;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  local_4 = (param_2 != 0) + 1;
  if (((int)*(char *)(*(int *)(DAT_00993cc8 + 0x184) + 0xb0) <= *(int *)(DAT_00993cc8 + 0x104)) ||
     (*(float *)(*(int *)(DAT_00993cc8 + 0x184) + 0x94) <= *(float *)(DAT_00993cc8 + 0x140))) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  local_c = *(undefined4 *)(param_1 + 0xc);
  local_8 = bVar1 + 1;
  FUN_00713b20(0xc,&local_c,&PTR_s_AnytimeEvents_UnitDisabled_00901e44,&DAT_0099253c,param_1);
  return;
}

