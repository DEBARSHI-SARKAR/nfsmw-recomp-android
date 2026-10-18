/* speed.exe 004dd330 FUN_004dd330; analysis pseudocode, not buildable source.
 * calls 004d2830 FUN_004d2830
 * calls 004023c0 FUN_004023c0
 * calls 0065faf0 FUN_0065faf0
 */

int __fastcall FUN_004dd330(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  
  **(undefined4 **)(param_1 + 0xc) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = 0;
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar5 + 0x38) != '\0') {
    if ((*(int *)(param_1 + 0x30) != 0) && (*(char *)(*(int *)(param_1 + 0x30) + 0x20) == '\0')) {
      iVar5 = (**(code **)(**(int **)(param_1 + 0x28) + 0x1c))();
      return iVar5;
    }
    if ((*(char *)(param_1 + 0x54) != '\0') && (*(int *)(param_1 + 0x38) == 0)) {
      uVar3 = *(uint *)(*(int *)(param_1 + 0x2c) + 0xec);
      if ((uVar3 & 8) == 0) {
        if ((uVar3 & 2) == 0) {
          if ((uVar3 & 0x10) != 0) {
            *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0x7fff;
            iVar5 = *(int *)(param_1 + 0x2c);
            FUN_004023c0("FRONT_BARRIER_HIT");
            iVar5 = FUN_004d2830(*(undefined4 *)(iVar5 + 0x50),0,0);
            *(undefined4 *)(iVar5 + 4) = local_20;
            FUN_0065faf0();
          }
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = 0x7fff;
        }
      }
      else {
        **(undefined4 **)(param_1 + 0xc) = 0x7fff;
      }
      *(int *)(*(int *)(param_1 + 0xc) + 0x10) = *(int *)(*(int *)(param_1 + 0x2c) + 0xd4) * 0xff;
    }
    iVar5 = *(int *)(param_1 + 0x2c);
    uVar3 = *(uint *)(iVar5 + 0xec);
    if (((((uVar3 & 1) != 0) && ((uVar3 & 0x10) != 0)) && ((uVar3 & 4) != 0)) &&
       (*(int *)(param_1 + 0x38) != 0)) {
      FUN_004023c0("FRONT_BARRIER_HIT");
      iVar5 = FUN_004d2830(*(undefined4 *)(iVar5 + 0x50),0,0);
      *(undefined4 *)(iVar5 + 4) = local_20;
      FUN_0065faf0();
    }
    iVar4 = *(int *)(param_1 + 0x2c);
    uVar1 = *(undefined4 *)(iVar4 + 0xa4);
    uVar2 = *(undefined4 *)(iVar4 + 0xa8);
    iVar5 = iVar4 + 0xa0;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar4 + 0xa0);
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x78) = uVar2;
  }
  return iVar5;
}

