/* speed.exe 0082e170 FUN_0082e170; analysis pseudocode, not buildable source.
 * calls 00829450 FUN_00829450
 * calls 00829410 FUN_00829410
 * calls 0082e390 FUN_0082e390
 */

undefined4 FUN_0082e170(uint param_1,char param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = FUN_00829410();
  if (iVar2 == 0) {
    return 0xffffffee;
  }
  uVar5 = 0xfffffff8;
  local_c = 0;
  do {
    iVar2 = FUN_0082e390(local_c,param_1);
    if (iVar2 != 0) {
      bVar3 = 2;
      iVar2 = 0x44;
      local_10 = 4;
      do {
        iVar1 = *(int *)(iVar2 + -4 + DAT_009c2964);
        uVar4 = (undefined2)param_4;
        if ((iVar1 != 0) && ((param_1 & 1 << (bVar3 - 2 & 0x1f)) != 0)) {
          *(short *)(iVar1 + 0x2a) = (short)param_2;
          if (-1 < param_4) {
            *(undefined2 *)(iVar1 + 0x2c) = uVar4;
          }
          uVar5 = 0;
        }
        iVar1 = *(int *)(iVar2 + DAT_009c2964);
        if ((iVar1 != 0) && ((param_1 & 1 << (bVar3 - 1 & 0x1f)) != 0)) {
          *(short *)(iVar1 + 0x2a) = (short)param_2;
          if (-1 < param_4) {
            *(undefined2 *)(iVar1 + 0x2c) = uVar4;
          }
          uVar5 = 0;
        }
        iVar1 = *(int *)(iVar2 + 4 + DAT_009c2964);
        if ((iVar1 != 0) && ((param_1 & 1 << (bVar3 & 0x1f)) != 0)) {
          *(short *)(iVar1 + 0x2a) = (short)param_2;
          if (-1 < param_4) {
            *(undefined2 *)(iVar1 + 0x2c) = uVar4;
          }
          uVar5 = 0;
        }
        iVar1 = *(int *)(iVar2 + 8 + DAT_009c2964);
        if ((iVar1 != 0) && ((param_1 & 1 << (bVar3 + 1 & 0x1f)) != 0)) {
          *(short *)(iVar1 + 0x2a) = (short)param_2;
          if (-1 < param_4) {
            *(undefined2 *)(iVar1 + 0x2c) = uVar4;
          }
          uVar5 = 0;
        }
        iVar1 = *(int *)(iVar2 + 0xc + DAT_009c2964);
        if ((iVar1 != 0) && ((param_1 & 1 << (bVar3 + 2 & 0x1f)) != 0)) {
          *(short *)(iVar1 + 0x2a) = (short)param_2;
          if (-1 < param_4) {
            *(undefined2 *)(iVar1 + 0x2c) = uVar4;
          }
          uVar5 = 0;
        }
        iVar1 = *(int *)(iVar2 + 0x10 + DAT_009c2964);
        if ((iVar1 != 0) && ((param_1 & 1 << (bVar3 + 3 & 0x1f)) != 0)) {
          *(short *)(iVar1 + 0x2a) = (short)param_2;
          if (-1 < param_4) {
            *(undefined2 *)(iVar1 + 0x2c) = uVar4;
          }
          uVar5 = 0;
        }
        bVar3 = bVar3 + 6;
        iVar2 = iVar2 + 0x18;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    local_c = local_c + 1;
  } while (local_c < 4);
  FUN_00829450();
  return uVar5;
}

