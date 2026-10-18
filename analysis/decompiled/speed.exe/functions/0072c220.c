/* speed.exe 0072c220 FUN_0072c220; analysis pseudocode, not buildable source.
 * calls 00660ed0 thunk_FUN_0065f740
 * calls 00465a70 FUN_00465a70
 * calls 00661cb0 thunk_FUN_00660ee0
 */

void __thiscall FUN_0072c220(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
    *(undefined4 *)(param_1 + 0xb4) = param_2;
    uVar1 = thunk_FUN_0065f740(param_2);
    *(undefined4 *)(param_1 + 0xbc) = uVar1;
    uVar1 = FUN_00465a70(uVar1,0x2047);
    *(undefined4 *)(param_1 + 0xb8) = uVar1;
    local_8 = 0;
    local_4 = 0;
    local_10 = 0;
    local_c = 0x400000;
    thunk_FUN_00660ee0(uVar1,*(undefined4 *)(param_1 + 0xb4),0,*(undefined4 *)(param_1 + 0xbc),
                       FUN_0072bb00,param_1,&local_10);
  }
  return;
}

