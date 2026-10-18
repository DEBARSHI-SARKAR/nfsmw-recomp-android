/* speed.exe 0082c650 FUN_0082c650; analysis pseudocode, not buildable source.
 * calls 0082c560 FUN_0082c560
 */

undefined4 FUN_0082c650(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = *(int *)(DAT_009c2964 + 0xc0 + param_1 * 4);
  uVar6 = (*(int *)(iVar1 + 0x10) << 0x10) >> 0x1c;
  uVar2 = uVar6 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  if ((int)uVar6 < 1) {
    uVar6 = -uVar6;
  }
  param_1 = param_1 + 1;
  if (param_1 < 0x10) {
    iVar5 = param_1 * 4 + 0xc0;
    do {
      if ((*(int *)(iVar5 + DAT_009c2964) != 0) &&
         (uVar3 = (*(int *)(*(int *)(iVar5 + DAT_009c2964) + 0x10) << 0x10) >> 0x1c, uVar3 != 0)) {
        uVar4 = uVar3;
        if ((int)uVar3 < 0) {
          uVar4 = -uVar3;
        }
        if (((int)((*(uint *)(iVar1 + 0x10) & 0xfffff000) << 0x10) < 1) ||
           ((int)(uVar2 + uVar6) <= (int)uVar4)) {
          if (((int)uVar3 < 0) || ((int)uVar6 < (int)uVar4)) {
            uVar3 = uVar4 & 0x80000001;
            if ((int)uVar3 < 0) {
              uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
            }
            if ((int)uVar6 < (int)(uVar3 + uVar4)) {
              return 0;
            }
          }
        }
        else {
          FUN_0082c560(param_1,2);
          param_1 = param_1 + -1;
          iVar5 = iVar5 + -4;
        }
      }
      param_1 = param_1 + 1;
      iVar5 = iVar5 + 4;
    } while (param_1 < 0x10);
  }
  return 1;
}

