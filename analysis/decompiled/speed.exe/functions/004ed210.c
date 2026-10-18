/* speed.exe 004ed210 FUN_004ed210; analysis pseudocode, not buildable source.
 * calls 00831667 FUN_00831667
 * calls 007c4b80 FUN_007c4b80
 * calls 004ae980 FUN_004ae980
 * calls 004d8720 FUN_004d8720
 */

undefined4 __thiscall
FUN_004ed210(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d24b;
  local_c = ExceptionList;
  if (DAT_008f86f8 == 1) {
    uVar4 = 0;
    if (*(int **)(param_1 + 0x10) == (int *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(int **)(param_1 + 0x10) >> 0x10 & 0x7fff;
    }
    ExceptionList = &local_c;
    FUN_004ae980("SND:Turbo Spool");
    iVar2 = FUN_00831667(0x1c);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      if (*(uint **)(param_1 + 0x10) != (uint *)0x0) {
        if (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = **(uint **)(param_1 + 0x10) & 0xffff;
        }
      }
      uVar3 = FUN_007c4b80();
      uVar3 = FUN_004d8720(param_2,(int)(uVar1 * param_3) >> 0xf,param_4,uVar4,param_6,uVar3);
    }
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    DAT_009142f4 = DAT_009142f4 + 1;
  }
  ExceptionList = local_c;
  return 0;
}

