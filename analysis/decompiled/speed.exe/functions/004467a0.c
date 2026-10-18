/* speed.exe 004467a0 FUN_004467a0; analysis pseudocode, not buildable source.
 * calls 0045e300 FUN_0045e300
 * calls 00444fe0 FUN_00444fe0
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 007477f0 FUN_007477f0
 * calls 0045ecf0 FUN_0045ecf0
 */

void __thiscall FUN_004467a0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_d0 [48];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(iVar1 + 0xf4) != 0) {
    FUN_007477f0();
  }
  FUN_00444fe0(local_50,iVar1 + 0x20);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x2c);
  FUN_0045e300(local_90,*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x20) + 0x24) + 0x40 +
                        param_2 * 0x70);
  FUN_0045ecf0(local_d0,param_2 * 0x40 + iVar1,local_90);
  *param_3 = local_a0;
  param_3[1] = local_9c;
  param_3[2] = local_98;
  thunk_FUN_006bd940(param_3,local_50,param_3);
  return;
}

