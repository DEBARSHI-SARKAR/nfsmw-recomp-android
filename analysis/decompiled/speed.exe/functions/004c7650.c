/* speed.exe 004c7650 FUN_004c7650; analysis pseudocode, not buildable source.
 * calls 004c3e80 FUN_004c3e80
 * calls 0045a430 FUN_0045a430
 * calls 00786940 FUN_00786940
 * calls 004afed0 FUN_004afed0
 * calls 00454810 FUN_00454810
 * calls 004523c0 FUN_004523c0
 * calls 004ba140 FUN_004ba140
 * calls 004ab680 FUN_004ab680
 * calls 006269b0 FUN_006269b0
 * calls 007869c0 FUN_007869c0
 * calls 007c4b80 FUN_007c4b80
 * calls 004b87a0 FUN_004b87a0
 * calls 004afe40 FUN_004afe40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004c7650(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086be16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004b87a0(param_2);
  *param_1 = &PTR_FUN_00897098;
  param_1[0x20] = DAT_00925ae8;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[0x24] = *param_2;
  param_1[0x26] = uVar2;
  param_1[0x25] = uVar1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  param_1[0x2a] = param_2[2];
  param_1[0x28] = uVar1;
  param_1[0x29] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[0x32] = param_2[6];
  param_1[0x30] = uVar1;
  local_4 = 0;
  param_1[0x31] = uVar2;
  param_1[0x34] = 0x7fff;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  FUN_00786940(0);
  iVar7 = param_1[0x14];
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 1;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x41] = iVar7;
  param_1[0x42] = param_1[0x15];
  if (iVar7 != 0) {
    FUN_007869c0(iVar7);
  }
  if ((param_1[0x38] != 0) && (param_1[0x19] != 0)) {
    uVar4 = FUN_004ab680();
    uVar8 = 0;
    if (uVar4 != 0) {
      do {
        iVar5 = FUN_00454810(0x9925106,uVar8);
        if (iVar5 == 0) {
          iVar5 = FUN_006269b0(0x10);
        }
        uVar6 = FUN_004afed0(iVar5);
        uVar8 = uVar8 + 1;
        param_1[0x3b] = param_1[0x3b] | uVar6;
      } while (uVar8 < uVar4);
    }
    cVar3 = FUN_004ba140(iVar7);
    if ((cVar3 != '\0') || (cVar3 = FUN_004ba140(param_1[0x15]), cVar3 != '\0')) {
      param_1[0x3b] = param_1[0x3b] | 1;
    }
    iVar7 = FUN_007c4b80();
    param_1[0x35] = iVar7;
    if ((((param_1[0x3b] & 2) == 0) || ((param_1[0x3b] & 4) == 0)) || (9 < iVar7)) {
      if (param_3 == '\x01') {
        FUN_004523c0(param_1 + 0x18);
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_004c3e80(local_20);
      }
      else {
        FUN_004523c0(param_1 + 0x18);
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_004afe40(local_20);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_0045a430();
    }
  }
  ExceptionList = local_c;
  return param_1;
}

