/* speed.exe 0054d480 FUN_0054d480; analysis pseudocode, not buildable source.
 * calls 0083dea0 FUN_0083dea0
 * calls 008386b0 FUN_008386b0
 * calls 008397a0 FUN_008397a0
 * calls 00513b50 FUN_00513b50
 * calls 0078c730 FUN_0078c730
 */

void __thiscall FUN_0054d480(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_cc [204];
  
  FUN_0083dea0(local_cc,200,param_2,param_1 + 0x116c);
  if (DAT_0091c368 == 0) {
    iVar1 = FUN_0078c730();
    iVar1 = FUN_008386b0(*(undefined4 *)(iVar1 + 0xf8),&DAT_0091c39c,local_cc,&LAB_00544d40,param_1)
    ;
  }
  else {
    iVar1 = FUN_0078c730();
    iVar1 = FUN_008397a0(*(undefined4 *)(iVar1 + 0xf8),0x63686174,local_cc,1,&LAB_00544d40,param_1);
  }
  if (iVar1 != 0) {
    FUN_00513b50(*(undefined4 *)(param_1 + 0x10),iVar1);
    return;
  }
  *(undefined1 *)(param_1 + 0x136c) = 1;
  return;
}

