/* speed.exe 0074b670 FUN_0074b670; analysis pseudocode, not buildable source.
 * calls 0074b5c0 FUN_0074b5c0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0074b670(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  
  iVar7 = *(int *)(param_1 + 0xc);
  if ((iVar7 == 0) || (puVar8 = *(undefined4 **)(param_1 + 0x1c), puVar8 == (undefined4 *)0x0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  puVar2 = (undefined4 *)FUN_0074b5c0(param_2,param_3);
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar7 = *(int *)(iVar7 + 8);
    if (iVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(iVar7 + 0x1c);
    }
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(undefined4 *)(param_1 + 0x20) = 1;
LAB_0074b6c9:
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
    return;
  }
  iVar7 = 0;
LAB_0074b6d8:
  do {
    iVar1 = *(int *)(param_1 + 0xc);
    if (*(int *)(iVar1 + 8) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(iVar1 + 8) + 0x20);
    }
    if (iVar6 <= iVar7) goto LAB_0074b6c9;
    if (*(int *)(iVar1 + 0xc) == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = *(int *)(*(int *)(iVar1 + 0xc) + iVar7 * 4);
    }
    if ((*(int *)(iVar1 + 0x10) != 0) &&
       (iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + iVar7 * 4), -1 < iVar1)) {
      pfVar9 = (float *)(*(int *)(param_1 + 0x1c) + iVar1);
      if (iVar6 == 0) {
        *pfVar9 = param_4 * *(float *)(iVar1 + (int)puVar2) + (_DAT_0089096c - param_4) * *pfVar9;
      }
      else if (iVar6 == 1) {
        fVar3 = (float)FUN_007c4b80();
        *pfVar9 = fVar3;
        iVar7 = iVar7 + 1;
        goto LAB_0074b6d8;
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

