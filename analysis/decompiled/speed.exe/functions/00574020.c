/* speed.exe 00574020 FUN_00574020; analysis pseudocode, not buildable source.
 * calls 00573e90 FUN_00573e90
 */

/* WARNING: Removing unreachable block (ram,0x005740d9) */
/* WARNING: Removing unreachable block (ram,0x005741e1) */

void __thiscall FUN_00574020(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_2 != 1) {
    if (param_2 != -1) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x2c + *(int *)(param_1 + 0x48) * 4);
    if (iVar2 == *(int *)(param_1 + 0x3c)) {
      iVar2 = *(int *)(param_1 + 0x50) + -1;
      *(int *)(param_1 + 0x50) = iVar2;
      if (iVar2 < 1) {
        *(undefined4 *)(param_1 + 0x50) = 0xc;
        FUN_00573e90();
        return;
      }
    }
    else if (iVar2 == *(int *)(param_1 + 0x38)) {
      iVar2 = *(int *)(param_1 + 0x4c) + -1;
      *(int *)(param_1 + 0x4c) = iVar2;
      if (iVar2 < 1) {
        switch(*(undefined4 *)(param_1 + 0x50)) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 0xc:
          *(undefined4 *)(param_1 + 0x4c) = 0x1f;
          FUN_00573e90();
          return;
        case 2:
          uVar1 = *(ushort *)(param_1 + 0x54);
          if (((uVar1 & 3) == 0) && (((uint)uVar1 % 100 != 0 || ((uint)uVar1 % 400 == 0)))) {
            *(undefined4 *)(param_1 + 0x4c) = 0x1d;
            FUN_00573e90();
            return;
          }
          *(undefined4 *)(param_1 + 0x4c) = 0x1c;
          FUN_00573e90();
          return;
        case 4:
        case 6:
        case 9:
        case 0xb:
          *(undefined4 *)(param_1 + 0x4c) = 0x1e;
          FUN_00573e90();
          return;
        }
      }
    }
    else {
      *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + -1;
      if (*(ushort *)(param_1 + 0x54) < 0x76c) {
        *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_1 + 0x56);
      }
    }
    FUN_00573e90();
    return;
  }
  iVar2 = *(int *)(param_1 + 0x2c + *(int *)(param_1 + 0x48) * 4);
  if (iVar2 == *(int *)(param_1 + 0x3c)) {
    iVar2 = *(int *)(param_1 + 0x50) + 1;
    *(int *)(param_1 + 0x50) = iVar2;
    if (0xc < iVar2) {
      *(undefined4 *)(param_1 + 0x50) = 1;
      FUN_00573e90();
      return;
    }
    goto switchD_0057408c_default;
  }
  if (iVar2 != *(int *)(param_1 + 0x38)) {
    *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 1;
    if (*(ushort *)(param_1 + 0x56) < *(ushort *)(param_1 + 0x54)) {
      *(undefined2 *)(param_1 + 0x54) = 0x76c;
    }
    goto switchD_0057408c_default;
  }
  iVar2 = *(int *)(param_1 + 0x4c);
  iVar3 = iVar2 + 1;
  *(int *)(param_1 + 0x4c) = iVar3;
  switch(*(undefined4 *)(param_1 + 0x50)) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 0xc:
    if (0x1f < iVar3) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
      FUN_00573e90();
      return;
    }
    goto switchD_0057408c_default;
  case 2:
    bVar5 = SBORROW4(iVar3,0x1d);
    iVar2 = iVar2 + -0x1c;
    bVar4 = false;
    if (iVar2 == 0) {
      uVar1 = *(ushort *)(param_1 + 0x54);
      if (((uVar1 & 3) != 0) || (((uint)uVar1 % 100 == 0 && ((uint)uVar1 % 400 != 0)))) {
        *(undefined4 *)(param_1 + 0x4c) = 1;
        FUN_00573e90();
        return;
      }
      goto switchD_0057408c_default;
    }
    break;
  case 4:
  case 6:
  case 9:
  case 0xb:
    bVar5 = SBORROW4(iVar3,0x1e);
    iVar2 = iVar2 + -0x1d;
    bVar4 = iVar3 == 0x1e;
    break;
  default:
    goto switchD_0057408c_default;
  }
  if (!bVar4 && bVar5 == iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
    FUN_00573e90();
    return;
  }
switchD_0057408c_default:
  FUN_00573e90();
  return;
}

