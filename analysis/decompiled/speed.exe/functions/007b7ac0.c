/* speed.exe 007b7ac0 FUN_007b7ac0; analysis pseudocode, not buildable source.
 * calls 00514fd0 FUN_00514fd0
 * calls 00524cc0 FUN_00524cc0
 * calls 00573140 FUN_00573140
 * calls 007aec00 FUN_007aec00
 * calls 0056f250 FUN_0056f250
 * calls 005816b0 FUN_005816b0
 * calls 00652ad0 _malloc
 * calls 005251a0 FUN_005251a0
 * calls 00573270 FUN_00573270
 * calls 00514d10 FUN_00514d10
 * calls 005157e0 FUN_005157e0
 * calls 00586fa0 FUN_00586fa0
 * calls 007aeca0 FUN_007aeca0
 * calls 007a4df0 FUN_007a4df0
 * calls 00460bf0 FUN_00460bf0
 * calls 0056f100 FUN_0056f100
 * calls 00747ac0 FUN_00747ac0
 * calls 007b3f90 FUN_007b3f90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007b7ac0(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uVar13;
  int local_28;
  int local_24;
  float local_20;
  undefined4 *local_1c;
  int local_18;
  float local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883414;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_28 = param_1;
  if (*(int *)(param_1 + 0x1c4) != 0) {
    ExceptionList = &local_c;
    FUN_00514d10(*(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x10),0x7ab5521a,1);
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  local_20 = *(float *)(param_1 + 0x38);
  if ((local_20 == 0.0) ||
     (piVar11 = (int *)((int)local_20 + 0x58), *(int **)((int)local_20 + 0x58) == piVar11)) {
    ExceptionList = local_c;
    return;
  }
  FUN_007b3f90();
  local_18 = FUN_007aec00(0x84);
  FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
  uVar13 = 0x84;
  uVar6 = FUN_005816b0(0x84);
  local_14 = (float)FUN_0056f250(uVar6,uVar13);
  iVar10 = *piVar11;
  local_24 = 0;
  bVar12 = iVar10 == 0;
  do {
    while( true ) {
      if (bVar12) {
        iVar10 = 0;
      }
      else {
        iVar10 = iVar10 + -4;
      }
      if (local_20 == -NAN) {
        iVar7 = 0;
      }
      else {
        iVar7 = (int)local_20 + 0x54;
      }
      if (iVar10 == iVar7) {
        if (*(int *)(param_1 + 0x1c4) == 0) {
          if (*(int *)(param_1 + 0x1bc) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)(param_1 + 0x1bc) + -4;
          }
          *(int *)(param_1 + 0x1c4) = iVar10;
        }
        FUN_00514fd0(*(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x10),&local_28,&local_14);
        FUN_00514fd0(*(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x10),&local_20,local_10);
        FUN_00524cc0(*(undefined4 *)(param_1 + 0x1c8),local_20 + _DAT_008b7a74,
                     local_14 + _DAT_008b7a78);
        ExceptionList = local_c;
        return;
      }
      local_24 = local_24 + 1;
      puVar8 = _malloc(0x54);
      local_4 = 0;
      local_1c = puVar8;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_00586fa0(0,0,0);
        *puVar8 = &PTR_FUN_008b7578;
        puVar8[0x13] = iVar10;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      local_4 = 0xffffffff;
      uVar13 = FUN_00573140("COLOR_%d",local_24);
      local_1c = (undefined4 *)FUN_005251a0(uVar6,uVar13);
      FUN_00573270(local_1c);
      if (puVar8 == (undefined4 *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = puVar8 + 1;
      }
      puVar1 = *(undefined4 **)(param_1 + 0x1c0);
      *puVar1 = piVar11;
      *(int **)(param_1 + 0x1c0) = piVar11;
      uVar13 = 0;
      piVar11[1] = (int)puVar1;
      *piVar11 = param_1 + 0x1bc;
      uVar6 = FUN_00460bf0(&PTR_DAT_008a15d0,0);
      bVar3 = FUN_00747ac0(uVar6,uVar13);
      uVar13 = 0;
      uVar6 = FUN_00460bf0("GREEN",0);
      bVar4 = FUN_00747ac0(uVar6,uVar13);
      uVar13 = 0;
      uVar6 = FUN_00460bf0(&DAT_008a15c0,0);
      uVar9 = FUN_00747ac0(uVar6,uVar13);
      uVar9 = uVar9 & 0xff | ((bVar3 | 0xffffff00) << 8 | (uint)bVar4) << 8;
      puVar8[0x14] = uVar9;
      FUN_005157e0(local_1c,uVar9);
      fVar2 = local_20;
      if (*(int *)((int)local_20 + 0x60) != 0) break;
      if ((local_18 == 0) ||
         (*(int *)(DAT_009ba080 + 0xc) != *(int *)(*(int *)(local_18 + 0xc) + 0xc))) {
        if (*(float *)(DAT_009ba080 + 0xc) != local_14) goto LAB_007b7d2b;
        cVar5 = FUN_007a4df0(iVar10);
        bVar12 = cVar5 == '\0';
      }
      else {
        iVar7 = FUN_007aeca0(iVar10);
        bVar12 = iVar7 == 0;
      }
      if (bVar12) goto LAB_007b7d2b;
      *(undefined4 **)(local_28 + 0x1c4) = puVar8;
      *(int *)((int)fVar2 + 0x60) = iVar10;
      iVar10 = *(int *)(iVar10 + 4);
      bVar12 = iVar10 == 0;
      param_1 = local_28;
    }
    if (*(int *)((int)local_20 + 0x60) == iVar10) {
      *(undefined4 **)(local_28 + 0x1c4) = puVar8;
    }
LAB_007b7d2b:
    iVar10 = *(int *)(iVar10 + 4);
    bVar12 = iVar10 == 0;
    param_1 = local_28;
  } while( true );
}

