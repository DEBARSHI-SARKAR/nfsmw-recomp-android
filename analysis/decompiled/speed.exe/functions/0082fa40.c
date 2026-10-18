/* speed.exe 0082fa40 FUN_0082fa40; analysis pseudocode, not buildable source.
 * calls 00829230 FUN_00829230
 */

undefined4 FUN_0082fa40(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_3c [8];
  undefined4 local_34;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if (*(short *)(param_1 + 4) < 0) {
    return 0xffffffff;
  }
  iVar2 = (int)*(short *)(param_1 + 4);
  if (-1 < iVar2) {
    if (iVar2 <= (int)(uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x18) + 0x12)) {
      iVar2 = *(int *)(DAT_009c2964 + 0x18) +
              (uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x1c) + iVar2 * 2) * 4;
      goto LAB_0082fa84;
    }
  }
  iVar2 = 0;
LAB_0082fa84:
  FUN_00829230(param_1,local_3c);
  if (param_2 != (uint *)0x0) {
    uVar3 = *param_2 ^ (*(uint *)(iVar2 + 4) >> 0x14 ^ *param_2) & 0xf;
    *param_2 = uVar3;
    uVar1 = *(uint *)(iVar2 + 8);
    param_2[1] = local_1c;
    param_2[2] = local_20;
    param_2[3] = local_24;
    param_2[5] = local_14;
    param_2[4] = local_10;
    *param_2 = (uVar1 >> 0x14 ^ uVar3) & 0xf0 ^ uVar3;
    *(char *)((int)param_2 + 1) = (char)local_34;
    param_2[6] = local_18;
  }
  return local_34;
}

