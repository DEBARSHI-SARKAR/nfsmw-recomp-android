/* speed.exe 00717d70 FUN_00717d70; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

undefined4 __thiscall FUN_00717d70(int *param_1,int param_2)

{
  undefined4 uVar1;
  int local_c [3];
  
  uVar1 = 0;
  if ((param_2 == 0) && (0 < param_1[0xe])) {
    local_c[0] = param_1[3];
    FUN_00713b20(0xc,local_c,&PTR_s_Setup_PrimaryEngage_00901bfc,&DAT_00992444,param_1);
    (**(code **)(*param_1 + 0x7c))();
    uVar1 = 1;
  }
  param_1[0xe] = param_2;
  return uVar1;
}

