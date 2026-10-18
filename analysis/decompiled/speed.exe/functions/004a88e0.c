/* speed.exe 004a88e0 FUN_004a88e0; analysis pseudocode, not buildable source.
 * calls 00490370 FUN_00490370
 * calls 0048ff00 FUN_0048ff00
 * calls 007c4b80 FUN_007c4b80
 * calls 004a15c0 FUN_004a15c0
 */

undefined4 __thiscall FUN_004a88e0(int param_1,float param_2,int param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int iVar7;
  
  if (param_4 != 0) {
    uVar5 = FUN_004a15c0(param_2,param_3,param_4);
    return uVar5;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar3 = FUN_007c4b80();
  uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 8);
  if (iVar3 < (int)uVar4) {
    iVar7 = iVar3;
    if (iVar3 < 0) {
      iVar7 = 0;
    }
  }
  else {
    iVar7 = uVar4 - 1;
  }
  FUN_0048ff00(0,**(undefined2 **)(*(int *)(param_1 + 0xc) + 4),*(undefined4 *)(param_1 + 0x10),
               iVar7,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x14));
  iVar2 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x10) = iVar7;
  if ((param_2 != (float)iVar3) && (iVar3 + 1 < (int)(uint)*(ushort *)(iVar2 + 8))) {
    FUN_00490370(0,**(ushort **)(iVar2 + 4),iVar3,iVar3 + 1,*(undefined4 *)(param_1 + 0x14),param_3,
                 1,iVar2 + 10,param_2 - (float)iVar3);
    return 1;
  }
  uVar4 = (uint)**(ushort **)(iVar2 + 4);
  iVar3 = 0;
  if (3 < uVar4) {
    puVar6 = (ushort *)(iVar2 + 0xe);
    do {
      *(undefined4 *)(param_3 + (uint)puVar6[-2] * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 * 4);
      *(undefined4 *)(param_3 + (uint)puVar6[-1] * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + iVar3 * 4);
      *(undefined4 *)(param_3 + (uint)*puVar6 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + 8 + iVar3 * 4);
      puVar1 = puVar6 + 1;
      iVar7 = iVar3 * 4;
      iVar3 = iVar3 + 4;
      puVar6 = puVar6 + 4;
      *(undefined4 *)(param_3 + (uint)*puVar1 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc + iVar7);
    } while (iVar3 < (int)(uVar4 - 3));
  }
  for (; iVar3 < (int)uVar4; iVar3 = iVar3 + 1) {
    *(undefined4 *)(param_3 + (uint)*(ushort *)(iVar2 + 10 + iVar3 * 2) * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 * 4);
  }
  return 1;
}

