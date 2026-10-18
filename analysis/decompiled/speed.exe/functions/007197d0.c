/* speed.exe 007197d0 FUN_007197d0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 * calls 00704e00 FUN_00704e00
 */

void __fastcall FUN_007197d0(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 local_8;
  int iStack_4;
  
  if (DAT_00993cc8 != 0) {
    piVar2 = (int *)FUN_00704e00();
    if (piVar2 != (int *)0x0) {
      local_8 = *(undefined4 *)(param_1 + 0xc);
      sVar1 = (**(code **)(*piVar2 + 0x48))();
      iStack_4 = (0 < sVar1) + 1;
      FUN_00713b20(8,&local_8,&PTR_s_StaticRoadblock_RBApproach_00901d04,&DAT_00993c60,param_1);
    }
  }
  return;
}

