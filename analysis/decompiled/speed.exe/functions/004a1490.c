/* speed.exe 004a1490 FUN_004a1490; analysis pseudocode, not buildable source.
 * calls 00490370 FUN_00490370
 * calls 0048ff00 FUN_0048ff00
 * calls 007c4b80 FUN_007c4b80
 */

void __thiscall FUN_004a1490(int param_1,undefined4 param_2,float param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  
  iVar3 = FUN_007c4b80();
  uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 8);
  if (iVar3 < (int)uVar4) {
    iVar6 = iVar3;
    if (iVar3 < 0) {
      iVar6 = 0;
    }
  }
  else {
    iVar6 = uVar4 - 1;
  }
  FUN_0048ff00(0,**(undefined2 **)(*(int *)(param_1 + 0xc) + 4),*(undefined4 *)(param_1 + 0x10),
               iVar6,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x14));
  iVar2 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x10) = iVar6;
  if ((param_3 != (float)iVar3) && (iVar3 + 1 < (int)(uint)*(ushort *)(iVar2 + 8))) {
    FUN_00490370(0,**(ushort **)(iVar2 + 4),iVar3,iVar3 + 1,*(undefined4 *)(param_1 + 0x14),param_4,
                 1,iVar2 + 10,param_3 - (float)iVar3);
    return;
  }
  uVar4 = (uint)**(ushort **)(iVar2 + 4);
  iVar3 = 0;
  if (3 < uVar4) {
    puVar5 = (ushort *)(iVar2 + 0xe);
    do {
      *(undefined4 *)(param_4 + (uint)puVar5[-2] * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 * 4);
      *(undefined4 *)(param_4 + (uint)puVar5[-1] * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + iVar3 * 4);
      *(undefined4 *)(param_4 + (uint)*puVar5 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + 8 + iVar3 * 4);
      puVar1 = puVar5 + 1;
      iVar6 = iVar3 * 4;
      iVar3 = iVar3 + 4;
      puVar5 = puVar5 + 4;
      *(undefined4 *)(param_4 + (uint)*puVar1 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc + iVar6);
    } while (iVar3 < (int)(uVar4 - 3));
  }
  for (; iVar3 < (int)uVar4; iVar3 = iVar3 + 1) {
    *(undefined4 *)(param_4 + (uint)*(ushort *)(iVar2 + 10 + iVar3 * 2) * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 * 4);
  }
  return;
}

