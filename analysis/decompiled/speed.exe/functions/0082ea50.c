/* speed.exe 0082ea50 FUN_0082ea50; analysis pseudocode, not buildable source.
 * calls 0082a1d0 FUN_0082a1d0
 * calls 0082e980 FUN_0082e980
 * calls 0082fe00 FUN_0082fe00
 * calls 00829230 FUN_00829230
 * calls 00830d40 FUN_00830d40
 * calls 00830260 FUN_00830260
 */

uint FUN_0082ea50(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_3c [6];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if (param_2 == 2) {
    return *(uint *)(*(int *)(DAT_009c2964 + 0x2c) + 0x10 + param_1 * 0x14);
  }
  if (param_2 != 1) {
    return param_1;
  }
  switch(param_1) {
  case 1:
    return (uint)*(byte *)(param_3 + 1);
  case 2:
    return (int)*(short *)(param_3 + 4);
  case 3:
    if (*(short *)(param_3 + 4) < 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_0082a1d0((int)*(short *)(param_3 + 4));
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    return *(uint *)(iVar1 + 8) & 0xffff;
  case 4:
    if ((-1 < *(short *)(param_3 + 4)) &&
       (puVar2 = (uint *)FUN_0082a1d0((int)*(short *)(param_3 + 4)), puVar2 != (uint *)0x0)) {
      return *puVar2 >> 0x15 & 0x3f;
    }
    return 0xffffffff;
  case 5:
    return *(uint *)(param_4 + 4);
  case 6:
    return (*(int *)(param_4 + 0x10) << 0x10) >> 0x1c;
  case 7:
    return *(uint *)(param_3 + 8) >> 0x1c & 7;
  case 8:
    return (uint)*(ushort *)(param_3 + 0xe);
  case 9:
    return *(uint *)(param_3 + 0xc) & 0xffff;
  case 10:
    return *(uint *)(param_3 + 8) >> 0x1f;
  case 0xb:
    uVar3 = FUN_0082fe00((int)*(short *)(param_3 + 4),*(undefined1 *)(param_3 + 1),0);
    uVar4 = FUN_00830260((int)*(short *)(param_3 + 4),uVar3,*(undefined1 *)(param_3 + 1),0);
    return uVar4;
  case 0xc:
    return *(uint *)(param_3 + 8) >> 0x1a & 1;
  case 0xd:
    FUN_00829230(param_3,local_3c);
    return local_24;
  case 0xe:
    return *(uint *)(param_3 + 8) >> 0x19 & 1;
  case 0xf:
    if (*(int **)(param_3 + 300) == (int *)0x0) {
      return 1;
    }
    uVar4 = (**(code **)(**(int **)(param_3 + 300) + 0x44))();
    return uVar4;
  case 0x10:
    FUN_00829230(param_3,local_3c);
    return local_3c[0];
  case 0x11:
    uVar4 = FUN_0082e980(param_3);
    return uVar4;
  case 0x12:
    uVar4 = FUN_00830d40();
    return uVar4 / 0x17 & 0xffff;
  case 0x13:
    uVar4 = (**(code **)(*DAT_009c29a8 + 0x10))();
    return uVar4;
  case 0x14:
    FUN_00829230(param_3,local_3c);
    return local_10;
  case 0x15:
    FUN_00829230(param_3,local_3c);
    return local_14;
  case 0x16:
    FUN_00829230(param_3,local_3c);
    return local_18;
  case 0x17:
    param_1 = (uint)*(char *)(param_3 + 3);
    if (-1 < *(short *)(param_3 + 0x1a)) {
      uVar4 = (**(code **)(**(int **)(param_3 + 300) + 0x2c))();
      return uVar4;
    }
    break;
  case 0x18:
    if (*(int **)(param_3 + 300) == (int *)0x0) {
      return 1;
    }
    uVar4 = (**(code **)(**(int **)(param_3 + 300) + 0x4c))();
    return uVar4;
  case 0x19:
    FUN_00829230(param_3,local_3c);
    return local_20;
  case 0x1a:
    FUN_00829230(param_3,local_3c);
    param_1 = local_1c;
  }
  return param_1;
}

