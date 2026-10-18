/* speed.exe 0082e710 FUN_0082e710; analysis pseudocode, not buildable source.
 * calls 0082e510 FUN_0082e510
 * calls 0082cb10 FUN_0082cb10
 * calls 00829450 FUN_00829450
 * calls 00829410 FUN_00829410
 * calls 0082ced0 FUN_0082ced0
 */

void FUN_0082e710(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (DAT_009c2975 == '\0') {
    iVar2 = FUN_00829410();
    if (iVar2 != 0) {
      DAT_0090d1e1 = param_1;
      uVar3 = 0;
      if (DAT_009c29a8 != (int *)0x0) {
        uVar3 = (**(code **)(*DAT_009c29a8 + 0x10))();
      }
      DAT_009c2980 = uVar3;
      FUN_0082ced0(0);
      piVar4 = &DAT_009c2954;
      iVar2 = 4;
      do {
        if ((((0x9c2953 < (int)piVar4) && ((int)piVar4 < 0x9c2964)) && (iVar1 = *piVar4, iVar1 != 0)
            ) && (((*(int *)(iVar1 + 0x18) != 0 && ((*(uint *)(iVar1 + 0x14) & 0xf0000000) != 0)) &&
                  (((*(uint *)(iVar1 + 0x14) & 0xf000000) != 0 &&
                   (DAT_009c2964 = iVar1, *(int *)(iVar1 + 0x14) != 0)))))) {
          FUN_0082cb10();
          FUN_0082e510();
        }
        piVar4 = piVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      FUN_0082ced0(1);
      FUN_00829450();
      return;
    }
  }
  return;
}

