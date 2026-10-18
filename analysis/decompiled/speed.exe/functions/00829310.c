/* speed.exe 00829310 FUN_00829310; analysis pseudocode, not buildable source.
 * calls 00829410 FUN_00829410
 * calls 00829450 FUN_00829450
 * calls 0082e390 FUN_0082e390
 */

undefined4 FUN_00829310(uint param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 local_c;
  int local_8;
  
  iVar2 = FUN_00829410();
  if (iVar2 != 0) {
    local_c = 0xfffffff8;
    local_8 = 0;
    do {
      iVar2 = FUN_0082e390(local_8,param_1);
      if (iVar2 != 0) {
        bVar3 = 0;
        iVar2 = 0x40;
        do {
          iVar1 = *(int *)(iVar2 + DAT_009c2964);
          if ((iVar1 != 0) && ((param_1 & 1 << (bVar3 & 0x1f)) != 0)) {
            (**(code **)(**(int **)(iVar1 + 300) + 0xc))();
            *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0xffff;
            *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x1f00000;
            local_c = 0;
          }
          iVar2 = iVar2 + 4;
          bVar3 = bVar3 + 1;
        } while (iVar2 < 0xa0);
      }
      local_8 = local_8 + 1;
    } while (local_8 < 4);
    FUN_00829450();
    return local_c;
  }
  return 0xffffffee;
}

