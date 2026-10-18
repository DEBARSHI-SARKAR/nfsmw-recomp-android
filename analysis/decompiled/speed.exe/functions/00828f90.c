/* speed.exe 00828f90 FUN_00828f90; analysis pseudocode, not buildable source.
 * calls 00829410 FUN_00829410
 * calls 00829450 FUN_00829450
 * calls 0082e390 FUN_0082e390
 */

undefined4 FUN_00828f90(uint param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  uint local_8;
  
  iVar1 = FUN_00829410();
  if (iVar1 != 0) {
    uVar3 = 0xfffffff8;
    if (param_2 < 0x80) {
      local_8 = 0;
      do {
        iVar1 = FUN_0082e390(local_8 & 0xff,param_1);
        if (iVar1 != 0) {
          bVar2 = 0;
          iVar1 = 0x40;
          do {
            if ((*(int *)(iVar1 + DAT_009c2964) != 0) && ((param_1 & 1 << (bVar2 & 0x1f)) != 0)) {
              *(undefined1 *)(*(int *)(iVar1 + DAT_009c2964) + 1) = (undefined1)param_2;
              uVar3 = 0;
            }
            iVar1 = iVar1 + 4;
            bVar2 = bVar2 + 1;
          } while (iVar1 < 0xa0);
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < 4);
    }
    FUN_00829450();
    return uVar3;
  }
  return 0xffffffee;
}

