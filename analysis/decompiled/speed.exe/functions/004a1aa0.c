/* speed.exe 004a1aa0 FUN_004a1aa0; analysis pseudocode, not buildable source.
 * calls 00490e70 FUN_00490e70
 * calls 004909f0 FUN_004909f0
 * calls 0048fe20 FUN_0048fe20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a1aa0(int param_1,float param_2,int param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (param_4 != *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(int *)(param_1 + 0x20) = param_4;
  }
  iVar7 = *(int *)(param_1 + 0xc);
  uVar2 = *(ushort *)(iVar7 + 0xc);
  iVar3 = *(int *)(iVar7 + 8);
  iVar1 = iVar7 + 0xe;
  if ((*(int *)(param_1 + 0x1c) == 0) && (**(ushort **)(iVar7 + 4) != 0)) {
    uVar6 = (uint)**(ushort **)(iVar7 + 4);
    uVar4 = (**(code **)(*DAT_009117f4 + 0x14))(uVar6 * 2);
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    if (uVar6 != 0) {
      do {
        uVar5 = *(ushort *)(iVar1 + iVar7 * 2) / 0xc;
        if ((*(uint *)(param_4 + ((int)(uVar5 & 0xff) >> 5) * 4) & 1 << ((byte)uVar5 & 0x1f)) != 0)
        {
          *(short *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) * 2) = (short)iVar7;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar6);
    }
  }
  iVar7 = FUN_0048fe20(param_2);
  FUN_004909f0(1,*(undefined4 *)(param_1 + 0x10),iVar7,*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x10) = iVar7;
  if (iVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar3 + -2 + iVar7 * 2);
  }
  if ((((float)uVar6 != param_2) &&
      ((iVar7 != uVar2 - 1 || (param_2 <= (float)*(ushort *)(iVar3 + -4 + (uint)uVar2 * 2))))) &&
     ((iVar7 != 0 || (_DAT_00890968 <= param_2)))) {
    FUN_00490e70(iVar7,iVar7 + 1,*(undefined4 *)(param_1 + 0x14),param_3,1,iVar1,
                 (param_2 - (float)uVar6) / (float)(int)(*(ushort *)(iVar3 + iVar7 * 2) - uVar6),
                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    return 1;
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + iVar7 * 2);
      *(undefined4 *)(param_3 + (uint)*(ushort *)(iVar1 + uVar6 * 2) * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + uVar6 * 4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x18));
  }
  return 1;
}

