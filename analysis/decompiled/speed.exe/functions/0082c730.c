/* speed.exe 0082c730 FUN_0082c730; analysis pseudocode, not buildable source.
 * calls 00829450 FUN_00829450
 * calls 00829410 FUN_00829410
 * calls 0082e390 FUN_0082e390
 * calls 0082c560 FUN_0082c560
 */

undefined4 __thiscall FUN_0082c730(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00829410(param_1);
  if (iVar1 == 0) {
    return 0xffffffee;
  }
  uVar4 = 0xfffffff8;
  uVar2 = 0;
  do {
    iVar1 = FUN_0082e390(uVar2 & 0xff,param_2);
    if (iVar1 != 0) {
      iVar1 = 0;
      uVar4 = 0;
      iVar3 = 0xc0;
      do {
        if (*(int *)(iVar3 + DAT_009c2964) != 0) {
          FUN_0082c560(iVar1,2);
          iVar1 = iVar1 + -1;
          iVar3 = iVar3 + -4;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar1 < 0x10);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  FUN_00829450();
  return uVar4;
}

