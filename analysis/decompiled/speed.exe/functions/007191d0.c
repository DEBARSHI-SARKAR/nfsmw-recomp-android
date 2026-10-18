/* speed.exe 007191d0 FUN_007191d0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_007191d0(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)(param_1 + 0xc);
  local_8 = 4;
  local_4 = 1;
  if ((*(int *)(DAT_00993cc8 + 0x130) != 0) && (1 < *(short *)(DAT_00993cc8 + 0x148))) {
    local_4 = 2;
  }
  FUN_00713b20(0xc,&local_c,&PTR_s_AnytimeEvents_CollisionWorld_00901da4,&DAT_00992494,param_1);
  return;
}

