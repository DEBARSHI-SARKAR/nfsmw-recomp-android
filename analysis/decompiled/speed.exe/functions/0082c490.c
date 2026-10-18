/* speed.exe 0082c490 FUN_0082c490; analysis pseudocode, not buildable source.
 * calls 0082c1d0 FUN_0082c1d0
 * calls 0082bfd0 FUN_0082bfd0
 * calls 0082c020 FUN_0082c020
 * calls 00829450 FUN_00829450
 * calls 00829410 FUN_00829410
 * calls 0082e390 FUN_0082e390
 */

undefined4 __thiscall FUN_0082c490(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00829410(param_1);
  if (iVar1 == 0) {
    return 0xffffffee;
  }
  iVar1 = 0;
  uVar4 = 0xfffffff8;
  uVar3 = 0;
  do {
    iVar2 = FUN_0082e390(uVar3 & 0xff,param_2);
    if ((iVar2 != 0) &&
       ((param_3 & 0xf000000 & 0x1000000 << (*(byte *)(*(int *)(DAT_009c2964 + 0x18) + 0xc) & 0x1f))
        != 0)) {
      iVar2 = FUN_0082bfd0(param_3 & 0xffffff,0xffffffff);
      if (iVar2 != 0) {
        if ((*(uint *)(iVar2 + 0x10) & 0x20000) == 0) {
          if (iVar1 == 0) {
            iVar1 = FUN_0082c1d0(iVar2);
            if (iVar1 == 0) goto LAB_0082c540;
          }
          uVar4 = FUN_0082c020(*(undefined4 *)((&DAT_009c2954)[uVar3] + 0x14),iVar1);
        }
        else {
          uVar4 = 0xfffffff8;
        }
      }
    }
LAB_0082c540:
    uVar3 = uVar3 + 1;
    if (3 < uVar3) {
      FUN_00829450();
      return uVar4;
    }
  } while( true );
}

