/* speed.exe 00524c00 FUN_00524c00; analysis pseudocode, not buildable source.
 * calls 005b3670 FUN_005b3670
 * calls 005b3630 FUN_005b3630
 */

void FUN_00524c00(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 != 0) {
    local_c = 0;
    local_10 = 0;
    local_4 = 0;
    local_8 = 0;
    FUN_005b3670(param_3,&local_10,&local_8);
    FUN_005b3630(param_3,local_10,local_c,*param_2,param_2[1]);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
  }
  return;
}

