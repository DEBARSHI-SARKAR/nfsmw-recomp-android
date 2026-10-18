/* speed.exe 0082d560 FUN_0082d560; analysis pseudocode, not buildable source.
 * calls 00829450 FUN_00829450
 * calls 00829410 FUN_00829410
 * calls 0082e390 FUN_0082e390
 */

undefined4 FUN_0082d560(uint param_1,char param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 local_10;
  int local_c;
  
  iVar2 = FUN_00829410();
  if (iVar2 != 0) {
    local_10 = 0xfffffff8;
    if (param_2 < 'e') {
      if (param_2 < '\0') {
        param_2 = '\0';
      }
    }
    else {
      param_2 = 'd';
    }
    if (param_1 == 0xffffffff) {
      DAT_0090d1e0 = param_2;
    }
    local_c = 0;
    do {
      iVar2 = FUN_0082e390(local_c,param_1);
      if (iVar2 != 0) {
        bVar3 = 0;
        iVar2 = 0x40;
        do {
          iVar1 = *(int *)(iVar2 + DAT_009c2964);
          if ((iVar1 != 0) && ((param_1 & 1 << (bVar3 & 0x1f)) != 0)) {
            *(char *)(iVar1 + 2) = param_2;
            if (*(short *)(iVar1 + 0x1a) < 0) {
              (**(code **)(**(int **)(iVar1 + 300) + 0x30))
                        (((int)*(char *)(iVar1 + 3) * (int)param_2) / 100);
            }
            local_10 = 0;
          }
          bVar3 = bVar3 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar2 < 0xa0);
      }
      local_c = local_c + 1;
    } while (local_c < 4);
    FUN_00829450();
    return local_10;
  }
  return 0xffffffee;
}

