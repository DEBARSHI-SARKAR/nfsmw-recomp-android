/* speed.exe 0082e090 FUN_0082e090; analysis pseudocode, not buildable source.
 * calls 00829450 FUN_00829450
 * calls 00829410 FUN_00829410
 * calls 0082e390 FUN_0082e390
 */

undefined4 FUN_0082e090(uint param_1,char param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  byte bVar5;
  undefined4 local_10;
  int local_c;
  
  iVar4 = FUN_00829410();
  if (iVar4 != 0) {
    local_10 = 0xfffffff8;
    local_c = 0;
    do {
      iVar4 = FUN_0082e390(local_c,param_1);
      if (iVar4 != 0) {
        bVar5 = 0;
        iVar4 = 0x40;
        do {
          uVar2 = DAT_009c2980;
          iVar1 = *(int *)(iVar4 + DAT_009c2964);
          if ((iVar1 != 0) && ((param_1 & 1 << (bVar5 & 0x1f)) != 0)) {
            *(undefined4 *)(iVar1 + 0x14) = param_3;
            *(undefined4 *)(iVar1 + 0x10) = uVar2;
            *(undefined2 *)(iVar1 + 0x1c) = param_4;
            uVar3 = (**(code **)(**(int **)(iVar1 + 300) + 0x2c))();
            *(undefined2 *)(iVar1 + 0x18) = uVar3;
            *(short *)(iVar1 + 0x1a) = (short)param_2;
            *(char *)(iVar1 + 3) = param_2;
            local_10 = 0;
          }
          bVar5 = bVar5 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0xa0);
      }
      local_c = local_c + 1;
    } while (local_c < 4);
    FUN_00829450();
    return local_10;
  }
  return 0xffffffee;
}

