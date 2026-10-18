/* speed.exe 007ffeb9 FUN_007ffeb9; analysis pseudocode, not buildable source.
 * calls 00806d1a FUN_00806d1a
 */

void FUN_007ffeb9(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  iVar3 = param_1;
  uVar1 = *(uint *)(param_1 + 0x22c);
  uVar2 = *(uint *)(param_1 + 0x230);
  param_1 = 0;
  if (uVar1 != 0) {
    local_8 = 5;
    do {
      iVar4 = 0;
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          FUN_00806d1a(iVar3,*(int *)(iVar3 + 0x1b8) * local_8 + 5 + iVar4,&DAT_0089d764,
                       (int)*(char *)(*(int *)(iVar3 + 0x230) * param_1 + *(int *)(iVar3 + 0x6f4) +
                                     uVar5));
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 0x10;
        } while (uVar5 < uVar2);
      }
      param_1 = param_1 + 1;
      local_8 = local_8 + 0x10;
    } while (param_1 < uVar1);
  }
  return;
}

