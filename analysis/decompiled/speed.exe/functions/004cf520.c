/* speed.exe 004cf520 FUN_004cf520; analysis pseudocode, not buildable source.
 * calls 004ceb80 FUN_004ceb80
 * calls 004cece0 FUN_004cece0
 * calls 004c01d0 FUN_004c01d0
 * calls 00465fd0 FUN_00465fd0
 */

void __thiscall FUN_004cf520(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int local_4;
  
  iVar6 = (int)*(char *)(*(int *)(param_1 + 0x1c) + 8);
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = *param_2;
    *(undefined4 *)(param_1 + 8) = param_2[1];
    *(undefined4 *)(param_1 + 0xc) = param_2[2];
    *(undefined4 *)(param_1 + 0x10) = param_2[3];
    *(undefined4 *)(param_1 + 0x14) = param_2[4];
    *(undefined4 *)(param_1 + 0x18) = param_2[5];
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) * 0x7fff >> 0xf;
  }
  local_4 = 0;
  if (*(char *)(*(int *)(param_1 + 0x1c) + 9) != '\0') {
    param_2 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)(param_1 + 0x24);
    do {
      if (((DAT_009120c4 == 0) || (*(int *)(DAT_009120c4 + 0x18) == *(int *)(DAT_009120c4 + 0x2c)))
         || (puVar2 = (undefined4 *)FUN_00465fd0(1,0), puVar2 == (undefined4 *)0x0)) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = *(int *)(*(int *)(param_1 + 0x1c) + 0x10) + (int)param_2;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[4] = 0;
      }
      *puVar7 = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 1;
        iVar8 = (int)*(char *)(*(int *)(param_1 + 0x1c) + 8);
        uVar1 = *puVar7;
        if ((uint)(&DAT_009123e8)[iVar8 * 0x5a] <= (uint)(&DAT_009123ec)[iVar8 * 0x5a]) {
          uVar3 = (**(code **)((&DAT_009123e0)[iVar8 * 0x5a] + 0xc))
                            ((&DAT_009123ec)[iVar8 * 0x5a] + 1);
          FUN_004c01d0(uVar3);
        }
        puVar2 = (undefined4 *)((&DAT_009123e4)[iVar8 * 0x5a] + (&DAT_009123ec)[iVar8 * 0x5a] * 8);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = uVar1;
          puVar2[1] = param_1;
        }
        (&DAT_009123ec)[iVar8 * 0x5a] = (&DAT_009123ec)[iVar8 * 0x5a] + 1;
      }
      local_4 = local_4 + 1;
      param_2 = (undefined4 *)((int)param_2 + 0x10);
      puVar7 = puVar7 + 1;
    } while (local_4 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x1c) + 9));
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  iVar8 = (&DAT_009123ec)[iVar6 * 0x5a] + -0x19 + *(int *)(&DAT_00913c5c + iVar6 * 0x74);
  if (0 < iVar8) {
    iVar9 = 0;
    while( true ) {
      iVar4 = FUN_004ceb80(iVar6,iVar9,iVar8);
      iVar5 = FUN_004cece0(iVar6,iVar9,iVar8 - iVar4);
      iVar8 = (iVar8 - iVar4) - iVar5;
      if ((iVar8 == 0) || (iVar9 == 10)) break;
      iVar9 = iVar9 + 1;
    }
  }
  return;
}

