/* speed.exe 00719830 FUN_00719830; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 * calls 00704e00 FUN_00704e00
 */

void __thiscall FUN_00719830(int param_1,char param_2)

{
  int iVar1;
  undefined4 local_8;
  int local_4;
  
  if (DAT_00993cc8 != 0) {
    iVar1 = FUN_00704e00();
    if (iVar1 != 0) {
      local_8 = *(undefined4 *)(param_1 + 0xc);
      local_4 = (param_2 != '\0') + 1;
      FUN_00713b20(8,&local_8,&PTR_s_StaticRoadblock_RBEngage_00901d0c,&DAT_009923f4,param_1);
    }
  }
  return;
}

