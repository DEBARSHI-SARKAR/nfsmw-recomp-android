/* speed.exe 007187c0 FUN_007187c0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __thiscall FUN_007187c0(int *param_1,undefined4 param_2)

{
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = (**(code **)(*param_1 + 0x78))();
  switch(param_2) {
  case 1:
    uStack_4 = 0x20;
    break;
  case 2:
    uStack_4 = 4;
    break;
  case 3:
    uStack_4 = 2;
    break;
  default:
    goto switchD_007187d9_caseD_4;
  case 6:
    uStack_4 = 0x10;
  }
  iStack_c = param_1[3];
  FUN_00713b20(0xc,&iStack_c,&PTR_s_RollingStrategy_InitStrategy_00901d4c,&DAT_0099252c,param_1);
switchD_007187d9_caseD_4:
  return;
}

