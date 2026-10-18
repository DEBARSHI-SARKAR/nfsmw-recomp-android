/* speed.exe 008309f0 FUN_008309f0; analysis pseudocode, not buildable source.
 * calls 00830970 FUN_00830970
 * calls 008293c0 FUN_008293c0
 * calls 00830750 FUN_00830750
 * calls 0082f9b0 FUN_0082f9b0
 * calls 00830890 FUN_00830890
 */

int FUN_008309f0(uint *param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int local_8;
  
  puVar6 = param_1;
  if ((int *)param_1[0x4b] == (int *)0x0) {
    if ((DAT_0090d1e4 & 0x100) != 0) {
      FUN_0082f9b0("( %.8s )  PATH_createbankimp not called yet\n",param_1 + 0x3f);
    }
    return -0xe;
  }
  iVar7 = (**(code **)(*(int *)param_1[0x4b] + 0x6c))();
  if (param_2 < iVar7) {
    iVar7 = (**(code **)(*(int *)param_1[0x4b] + 0x74))(param_2);
    if (iVar7 != 0) {
      if ((DAT_0090d1e4 & 0x100) != 0) {
        FUN_0082f9b0("( %.8s )  PATH_loadbank already loaded subbank %d\n",param_1 + 0x3f,param_2);
      }
      return -0xbc;
    }
    iVar7 = FUN_008293c0(*param_1 & 0xff);
    puVar2 = (undefined4 *)(param_2 * 0x10 + 0x14 + iVar7);
    if ((iVar7 == 0) || (bVar5 = true, *(short *)(iVar7 + 6) == 0)) {
      bVar5 = false;
    }
    uVar10 = *(uint *)(iVar7 + 0xc);
    if (((uVar10 == 0) ||
        ((param_1[0x4d] + *(int *)(param_2 * 0x10 + 0x1c + iVar7) <= uVar10 &&
         ((uVar10 == 0 || (puVar2[3] + param_1[0x4e] <= uVar10)))))) &&
       (iVar8 = (**(code **)(*(int *)param_1[0x4b] + 0x78))(), iVar8 != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar5) && (bVar4)) {
      if (*(short *)(iVar7 + 6) == 2) {
        puVar1 = param_1 + 0x4b;
        uVar10 = 0x7fffffff;
        param_1 = (uint *)0x7fffffff;
        local_8 = -1;
        iVar8 = 0;
        iVar7 = (**(code **)(*(int *)*puVar1 + 0x6c))();
        if (0 < iVar7) {
          do {
            iVar7 = (**(code **)(*(int *)puVar6[0x4b] + 0x74))(iVar8);
            if (iVar7 != 0) {
              uVar3 = *(uint *)(iVar7 + 4);
              if ((uVar3 <= uVar10) && ((uVar3 < uVar10 || (*(int *)(iVar7 + 0x24) < (int)param_1)))
                 ) {
                param_1 = *(uint **)(iVar7 + 0x24);
                uVar10 = uVar3;
                local_8 = iVar8;
              }
            }
            iVar8 = iVar8 + 1;
            iVar7 = (**(code **)(*(int *)puVar6[0x4b] + 0x6c))();
          } while (iVar8 < iVar7);
        }
        if (local_8 == param_2) {
          return -0xd;
        }
        FUN_00830890(puVar6,local_8);
      }
      else if (*(short *)(iVar7 + 6) == 1) {
        FUN_00830970(param_1);
      }
    }
    iVar7 = FUN_00830750(puVar6,param_2,(puVar2[3] + puVar2[2]) * 0x400);
    if (iVar7 == 0) {
      puVar6[0x4d] = puVar6[0x4d] + puVar2[2];
      puVar6[0x4e] = puVar6[0x4e] + puVar2[3];
      puVar9 = (undefined4 *)(**(code **)(*(int *)puVar6[0x4b] + 0x74))(param_2);
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar2;
        puVar9[1] = puVar2[1];
        puVar9[2] = puVar2[2];
        puVar9[3] = puVar2[3];
      }
    }
    return iVar7;
  }
  if ((DAT_0090d1e4 & 0x100) != 0) {
    FUN_0082f9b0("( %.8s )  PATH_loadbank no subbank %d\n",param_1 + 0x3f,param_2);
  }
  return -8;
}

