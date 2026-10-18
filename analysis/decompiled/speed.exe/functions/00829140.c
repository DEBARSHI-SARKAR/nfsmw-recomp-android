/* speed.exe 00829140 FUN_00829140; analysis pseudocode, not buildable source.
 * calls 00829410 FUN_00829410
 * calls 00829450 FUN_00829450
 * calls 0082e390 FUN_0082e390
 */

undefined4 FUN_00829140(uint param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 local_10;
  uint local_c;
  
  iVar2 = FUN_00829410();
  if (iVar2 != 0) {
    local_10 = 0xfffffff8;
    if (param_1 == 0xffffffff) {
      DAT_009c2975 = param_2;
    }
    local_c = 0;
    do {
      iVar2 = FUN_0082e390(local_c & 0xff,param_1);
      if (iVar2 != 0) {
        bVar3 = 0;
        iVar2 = 0x40;
        do {
          iVar1 = *(int *)(iVar2 + DAT_009c2964);
          if ((iVar1 != 0) && ((param_1 & 1 << (bVar3 & 0x1f)) != 0)) {
            local_10 = 0;
            (**(code **)(**(int **)(iVar1 + 300) + 0x10))((uint)param_2);
            *(uint *)(iVar1 + 8) =
                 *(uint *)(iVar1 + 8) ^ ((uint)param_2 << 0x19 ^ *(uint *)(iVar1 + 8)) & 0x2000000;
          }
          bVar3 = bVar3 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar2 < 0xa0);
      }
      local_c = local_c + 1;
    } while ((int)local_c < 4);
    FUN_00829450();
    return local_10;
  }
  return 0xffffffee;
}

