/* speed.exe 0084fef0 FUN_0084fef0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 007d6cb0 __security_check_cookie
 * calls 0084b110 FUN_0084b110
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0084fef0(void)

{
  DWORD DVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  int local_244;
  int local_23c;
  int local_238 [4];
  uint auStack_228 [135];
  undefined4 local_c;
  
  iVar5 = *(int *)(unaff_EBX + 0xcc);
  local_c = DAT_00906980;
  iVar6 = 0x800;
  local_244 = 0x800;
  if (iVar5 != *(int *)(unaff_EBX + 0xd0)) {
    do {
      iVar6 = iVar6 - *(int *)(*(int *)(unaff_EBX + 0xd4) + iVar5);
      iVar5 = (*(int *)(unaff_EBX + 0xc0) + iVar5) % *(int *)(unaff_EBX + 0xc4);
    } while (iVar5 != *(int *)(unaff_EBX + 0xd0));
    local_244 = iVar6;
    if (0xff < iVar6) goto joined_r0x0084ff74;
    DVar1 = GetTickCount();
    if (DVar1 - *(int *)(unaff_EBX + 0xe4) < 0xfb) goto joined_r0x0084ff74;
    local_244 = 0x100;
  }
  do {
    iVar5 = 0x218;
    if (local_244 < 0x218) {
      iVar5 = local_244;
    }
    local_23c = 0;
    while ((0 < iVar5 && (iVar6 = *(int *)(unaff_EBX + 0xd0), iVar6 != *(int *)(unaff_EBX + 200))))
    {
      piVar2 = (int *)(*(int *)(unaff_EBX + 0xd4) + iVar6);
      iVar5 = iVar5 + (-1 - *piVar2);
      if ((0 < local_23c) && (iVar5 < 1)) break;
      local_23c = local_23c + 1;
      *(int *)(unaff_EBX + 0xd0) = (*(int *)(unaff_EBX + 0xc0) + iVar6) % *(int *)(unaff_EBX + 0xc4)
      ;
      if ((0xfa < *piVar2) || (7 < local_23c)) break;
    }
    if (local_23c == 0) {
      return;
    }
    iVar5 = ((*(int *)(unaff_EBX + 0xd0) - *(int *)(unaff_EBX + 0xc0)) + *(int *)(unaff_EBX + 0xc4))
            % *(int *)(unaff_EBX + 0xc4);
    uVar3 = *(int *)(*(int *)(unaff_EBX + 0xd4) + iVar5) + 0x10;
    piVar2 = (int *)(*(int *)(unaff_EBX + 0xd4) + iVar5);
    piVar9 = local_238;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar9 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar9 = piVar9 + 1;
    }
    local_23c = local_23c + -1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar9 = (char)*piVar2;
      piVar2 = (int *)((int)piVar2 + 1);
      piVar9 = (int *)((int)piVar9 + 1);
    }
    if (0 < local_23c) {
      do {
        iVar5 = ((*(int *)(unaff_EBX + 0xc4) - *(int *)(unaff_EBX + 0xc0)) + iVar5) %
                *(int *)(unaff_EBX + 0xc4);
        puVar7 = (uint *)(*(int *)(unaff_EBX + 0xd4) + iVar5);
        if (*(code **)(unaff_EBX + 0x38) != (code *)0x0) {
          (**(code **)(unaff_EBX + 0x38))();
        }
        local_238[2] = local_238[2] + 0x10000000;
        uVar4 = *puVar7;
        puVar8 = puVar7 + 4;
        puVar10 = (uint *)((int)auStack_228 + local_238[0]);
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)puVar10 = (char)*puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar10 = (uint *)((int)puVar10 + 1);
        }
        uVar4 = *puVar7;
        *(char *)((int)auStack_228 + local_238[0] + uVar4) = (char)*puVar7;
        local_238[0] = local_238[0] + uVar4 + 1;
        local_23c = local_23c + -1;
      } while (local_23c != 0);
    }
    if (iVar5 == *(int *)(unaff_EBX + 0xcc)) {
LAB_0085019c:
      DAT_0090d3e4 = 0x20000000;
    }
    else {
      do {
        if (DAT_0090d3e4 < (uint)local_238[2]) break;
        iVar5 = ((*(int *)(unaff_EBX + 0xc4) - *(int *)(unaff_EBX + 0xc0)) + iVar5) %
                *(int *)(unaff_EBX + 0xc4);
        puVar7 = (uint *)(*(int *)(unaff_EBX + 0xd4) + iVar5);
        if (0x40 < *(int *)(*(int *)(unaff_EBX + 0xd4) + iVar5) + local_238[0]) break;
        if (*(code **)(unaff_EBX + 0x38) != (code *)0x0) {
          (**(code **)(unaff_EBX + 0x38))();
        }
        local_238[2] = local_238[2] + 0x10000000;
        uVar4 = *puVar7;
        puVar8 = puVar7 + 4;
        puVar10 = (uint *)((int)auStack_228 + local_238[0]);
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)puVar10 = (char)*puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar10 = (uint *)((int)puVar10 + 1);
        }
        uVar4 = *puVar7;
        *(char *)((int)auStack_228 + local_238[0] + uVar4) = (char)*puVar7;
        local_238[0] = local_238[0] + uVar4 + 1;
      } while (iVar5 != *(int *)(unaff_EBX + 0xcc));
      if (iVar5 == *(int *)(unaff_EBX + 0xcc)) goto LAB_0085019c;
      if (DAT_0090d3e4 < 0x80000000) {
        DAT_0090d3e4 = DAT_0090d3e4 * 2;
      }
      else {
        DAT_0090d3e4 = 0xf0000000;
      }
    }
    *(int *)(unaff_EBX + 0xb8) = *(int *)(unaff_EBX + 0xb0);
    local_238[3] = *(int *)(unaff_EBX + 0xb0) + -1;
    iVar6 = local_238[0] + 8;
    iVar5 = FUN_0084b110(*(undefined4 *)(unaff_EBX + 0x80),local_238 + 2,iVar6,0,unaff_EBX + 0x84,
                         0x10);
    if (iVar5 != iVar6) {
      *(int *)(unaff_EBX + 0xe0) = iVar5;
      return;
    }
    DVar1 = GetTickCount();
    *(DWORD *)(unaff_EBX + 0xe4) = DVar1;
    *(int *)(unaff_EBX + 0x5c) = *(int *)(unaff_EBX + 0x5c) + iVar6;
    *(int *)(unaff_EBX + 100) = *(int *)(unaff_EBX + 100) + 1;
    if (0xff < (uint)local_238[2]) {
      *(undefined4 *)(unaff_EBX + 0xbc) = 0;
    }
    if (iVar5 < 0) {
      return;
    }
    local_244 = local_244 - local_238[0];
joined_r0x0084ff74:
    if (local_244 < 1) {
      return;
    }
  } while( true );
}

