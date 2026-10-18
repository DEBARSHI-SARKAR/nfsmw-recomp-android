/* speed.exe 00850310 FUN_00850310; analysis pseudocode, not buildable source.
 * calls 0084fd30 FUN_0084fd30
 */

undefined4 FUN_00850310(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBX;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  iVar1 = *(int *)(unaff_EBX + 0xa4);
  iVar2 = *(int *)(unaff_EBX + 0xa0);
  if ((*(int *)(unaff_EBX + 0x9c) + iVar1) % iVar2 == *(int *)(unaff_EBX + 0xa8)) {
    return 2;
  }
  uVar5 = param_1[2];
  if ((0x7f < uVar5) && (uVar5 < 0x100)) {
    uVar4 = uVar5 - *(uint *)(unaff_EBX + 0xb4) & 0x7f;
    if ((*(uint *)(unaff_EBX + 0xb4) < uVar5) || (uVar4 < 0x20)) {
      *(int *)(unaff_EBX + 0x6c) = *(int *)(unaff_EBX + 0x6c) + uVar4;
    }
    iVar3 = param_1[2];
    uVar5 = iVar3 + 1;
    *(uint *)(unaff_EBX + 0xb4) = uVar5;
    if (0xff < uVar5) {
      *(int *)(unaff_EBX + 0xb4) = iVar3 + -0x7f;
    }
    if ((iVar2 - ((iVar2 - *(int *)(unaff_EBX + 0xa8)) + iVar1) % iVar2) /
        *(int *)(unaff_EBX + 0x9c) < 5) {
      return 2;
    }
LAB_008503f2:
    piVar6 = (int *)(*(int *)(unaff_EBX + 0xac) + iVar1);
    uVar5 = *(uint *)(unaff_EBX + 0x9c);
    piVar7 = param_1;
    piVar8 = piVar6;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)piVar8 = (char)*piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
    *(int *)(unaff_EBX + 0xf0) = *(int *)(unaff_EBX + 0xf0) + 1;
    *(int *)(unaff_EBX + 0xa4) =
         (*(int *)(unaff_EBX + 0x9c) + *(int *)(unaff_EBX + 0xa4)) % *(int *)(unaff_EBX + 0xa0);
    if (0xff < (uint)param_1[2]) {
      *(int *)(unaff_EBX + 0xb0) = *(int *)(unaff_EBX + 0xb0) + 1;
      *(int *)(unaff_EBX + 0xbc) = *(int *)(unaff_EBX + 0xbc) + *piVar6;
    }
    *(uint *)(unaff_EBX + 0xf4) = *(uint *)(unaff_EBX + 0xf4) | 1;
    if (*(code **)(unaff_EBX + 0x3c) != (code *)0x0) {
      (**(code **)(unaff_EBX + 0x3c))();
    }
    *(int *)(unaff_EBX + 0xf0) = *(int *)(unaff_EBX + 0xf0) + -1;
    return 1;
  }
  uVar4 = *(uint *)(unaff_EBX + 0xb0);
  if (uVar4 <= uVar5) {
    if (uVar4 < uVar5) {
      *(uint *)(unaff_EBX + 0x6c) = *(int *)(unaff_EBX + 0x6c) + (uVar5 - uVar4);
      param_1[2] = 4;
      param_1[3] = *(int *)(unaff_EBX + 0xb0);
      *param_1 = 0;
      FUN_0084fd30();
      return 0xffffffff;
    }
    if (*param_1 != 0) goto LAB_008503f2;
  }
  return 0;
}

