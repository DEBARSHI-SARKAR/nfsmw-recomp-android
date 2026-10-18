/* speed.exe 004f11e0 FUN_004f11e0; analysis pseudocode, not buildable source.
 * calls 00831667 FUN_00831667
 * calls 0045da30 FUN_0045da30
 * calls 0083198b FUN_0083198b
 * calls 004ae980 FUN_004ae980
 * calls 008311aa FUN_008311aa
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 * calls 00831a8a FUN_00831a8a
 * calls 004d5550 FUN_004d5550
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f11e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d356;
  local_c = ExceptionList;
  if (param_1[10] == 0) {
    iVar2 = *(int *)(param_1[5] + 0x34);
    local_10 = param_1;
    if (*(int *)(iVar2 + 0x1ec) != 0) {
      ExceptionList = &local_c;
      iVar2 = FUN_0045da30(4);
      iVar2 = iVar2 + 2;
      FUN_004ae980("Csis::Tractor air puff SFX");
      piVar3 = (int *)FUN_00831667(0x24);
      local_4 = 0;
      local_10 = piVar3;
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        if (((uint *)param_1[4] == (uint *)0x0) ||
           (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)param_1[4] & 0xffff;
        }
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xf < iVar2) {
          iVar2 = 0xf;
        }
        piVar1 = piVar3 + 1;
        *piVar1 = iVar2;
        piVar3[2] = 0;
        piVar3[3] = 0;
        if ((int)uVar4 < 0) {
          uVar4 = 0;
        }
        else if (0xffff < uVar4) {
          uVar4 = 0xffff;
        }
        piVar3[4] = uVar4;
        piVar3[5] = 25000;
        piVar3[6] = 0;
        piVar3[7] = 0x7fff;
        piVar3[8] = 0;
        iVar2 = FUN_00831a8a(&DAT_00914844,piVar1,piVar3);
        if (iVar2 < 0) {
          FUN_0083198b(&PTR_s_FX_TRUCK_FX_008f02b0);
          FUN_00831a8a(&DAT_00914844,piVar1,piVar3);
        }
      }
      local_4 = 0xffffffff;
      param_1[10] = (int)piVar3;
      if (((piVar3 == (int *)0x0) || (local_10 = (int *)0x0, *piVar3 == 0)) ||
         (FUN_008311aa(&local_10), (int)local_10 < 3)) {
LAB_004f1323:
        piVar3 = (int *)param_1[10];
        if (piVar3 != (int *)0x0) {
          if (*piVar3 != 0) {
            FUN_00831782();
          }
          FUN_00831682(piVar3);
        }
        param_1[10] = 0;
        ExceptionList = local_c;
        return;
      }
      goto LAB_004f14d7;
    }
    if (((*(float *)(iVar2 + 0x80) <= _DAT_008933d4) && (*(float *)(iVar2 + 0xa0) <= _DAT_00890968))
       || ((_DAT_0089096c <=
            SQRT(*(float *)(iVar2 + 0x58) * *(float *)(iVar2 + 0x58) +
                 *(float *)(iVar2 + 0x54) * *(float *)(iVar2 + 0x54) +
                 *(float *)(iVar2 + 0x50) * *(float *)(iVar2 + 0x50)) * _DAT_008967e0 ||
           ((float)param_1[0xb] < _DAT_0089096c)))) goto LAB_004f14d7;
    if ((char)param_1[0xc] == '\0') {
      ExceptionList = &local_c;
      iVar2 = FUN_0045da30(2);
      FUN_004ae980("Csis::Tractor brake SFX");
      piVar3 = (int *)FUN_00831667(0x24);
      local_4 = 1;
      local_10 = piVar3;
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        if (((uint *)param_1[4] == (uint *)0x0) ||
           (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)param_1[4] & 0xffff;
        }
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xf < iVar2) {
          iVar2 = 0xf;
        }
        piVar1 = piVar3 + 1;
        *piVar1 = iVar2;
        piVar3[2] = 0;
        piVar3[3] = 0;
        if ((int)uVar4 < 0) {
          uVar4 = 0;
        }
        else if (0xffff < uVar4) {
          uVar4 = 0xffff;
        }
        piVar3[4] = uVar4;
        piVar3[5] = 25000;
        piVar3[6] = 0;
        piVar3[7] = 0x7fff;
        piVar3[8] = 0;
        iVar2 = FUN_00831a8a(&DAT_00914844,piVar1,piVar3);
        if (iVar2 < 0) {
          FUN_0083198b(&PTR_s_FX_TRUCK_FX_008f02b0);
          FUN_00831a8a(&DAT_00914844,piVar1,piVar3);
        }
      }
      local_4 = 0xffffffff;
      param_1[10] = (int)piVar3;
      if ((piVar3 == (int *)0x0) || (iVar2 = FUN_004d5550(), iVar2 < 3)) goto LAB_004f1323;
      *(undefined1 *)(param_1 + 0xc) = 1;
      goto LAB_004f14d7;
    }
  }
  else {
LAB_004f14d7:
    if ((char)param_1[0xc] == '\0') goto LAB_004f1518;
  }
  iVar2 = *(int *)(param_1[5] + 0x34);
  if ((float)param_1[0xb] <
      SQRT(*(float *)(iVar2 + 0x50) * *(float *)(iVar2 + 0x50) +
           *(float *)(iVar2 + 0x58) * *(float *)(iVar2 + 0x58) +
           *(float *)(iVar2 + 0x54) * *(float *)(iVar2 + 0x54)) * _DAT_008967e0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
LAB_004f1518:
  iVar2 = *(int *)(param_1[5] + 0x34);
  param_1[0xb] = (int)(SQRT(*(float *)(iVar2 + 0x58) * *(float *)(iVar2 + 0x58) +
                            *(float *)(iVar2 + 0x54) * *(float *)(iVar2 + 0x54) +
                            *(float *)(iVar2 + 0x50) * *(float *)(iVar2 + 0x50)) * _DAT_008967e0);
  ExceptionList = local_c;
  return;
}

