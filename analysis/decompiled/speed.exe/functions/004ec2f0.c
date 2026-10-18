/* speed.exe 004ec2f0 FUN_004ec2f0; analysis pseudocode, not buildable source.
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 007c4b80 FUN_007c4b80
 * calls 004ae980 FUN_004ae980
 * calls 008311aa FUN_008311aa
 * calls 00831a8a FUN_00831a8a
 * calls 0083179c FUN_0083179c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ec2f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d16b;
  local_c = ExceptionList;
  if (DAT_008f86f8 != 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x40) == 0) {
      ExceptionList = &local_c;
      FUN_004ae980("Csis:Whine");
      piVar2 = (int *)FUN_00831667(0x28);
      local_4 = 0;
      local_10 = piVar2;
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar1 = piVar2 + 1;
        *piVar1 = 0;
        piVar2[2] = 0;
        piVar2[3] = 0;
        piVar2[4] = 0;
        piVar2[5] = 0;
        piVar2[6] = 0;
        piVar2[7] = 25000;
        piVar2[8] = 0;
        piVar2[9] = 0x7fff;
        iVar3 = FUN_00831a8a(&DAT_0091488c,piVar1,piVar2);
        if (iVar3 < 0) {
          FUN_0083198b(&PTR_s_CAR_WHINE_008f0258);
          FUN_00831a8a(&DAT_0091488c,piVar1,piVar2);
        }
      }
      local_4 = 0xffffffff;
      *(int **)(param_1 + 0x40) = piVar2;
      if ((piVar2 != (int *)0x0) && (local_10 = (int *)0x0, *piVar2 != 0)) {
        FUN_008311aa(&local_10);
      }
    }
    iVar3 = *(int *)(param_1 + 0x40);
    if (iVar3 != 0) {
      iVar4 = FUN_007c4b80();
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x8013 < iVar4) {
        iVar4 = 0x8013;
      }
      *(int *)(iVar3 + 0xc) = iVar4;
      if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) ||
         (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = **(uint **)(param_1 + 0x10) & 0xffff;
      }
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (0x10000 < uVar5) {
        uVar5 = 0x10000;
      }
      *(uint *)(*(int *)(param_1 + 0x40) + 0x10) = uVar5;
      iVar3 = FUN_007c4b80();
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (10000 < iVar3) {
        iVar3 = 10000;
      }
      *(int *)(*(int *)(param_1 + 0x40) + 8) = iVar3;
      if (**(int **)(param_1 + 0x40) != 0) {
        FUN_0083179c(*(int **)(param_1 + 0x40) + 1);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

