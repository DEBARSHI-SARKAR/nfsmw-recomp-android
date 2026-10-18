/* speed.exe 0063b320 FUN_0063b320; analysis pseudocode, not buildable source.
 * calls 00620b90 FUN_00620b90
 * calls 006718f0 FUN_006718f0
 * calls 0041cb10 FUN_0041cb10
 * calls 005cab00 FUN_005cab00
 * calls 006f25a0 FUN_006f25a0
 * calls 0062b370 FUN_0062b370
 * calls 005d51f0 FUN_005d51f0
 * calls 004023c0 FUN_004023c0
 * calls 00629c00 FUN_00629c00
 * calls 00401bb0 FUN_00401bb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0063b320(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined ****ppppuVar3;
  int *piVar4;
  undefined *****pppppuVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcStack_178;
  undefined ****ppppuStack_174;
  undefined ****ppppuStack_170;
  undefined ****ppppuStack_16c;
  undefined ****ppppuStack_168;
  undefined *****local_164;
  undefined ***local_150;
  undefined ****local_14c;
  undefined1 *puStack_148;
  undefined ***pppuStack_144;
  undefined4 uStack_140;
  undefined **ppuStack_13c;
  undefined **ppuStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 *local_12c;
  undefined ***pppuStack_128;
  int aiStack_124 [16];
  undefined4 uStack_e4;
  undefined ***apppuStack_cc [16];
  undefined ***apppuStack_8c [16];
  undefined ***apppuStack_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_008794d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a75c0;
  local_164 = (undefined *****)param_1[0xd];
  local_4 = 0;
  if (local_164 == (undefined *****)0x0) goto LAB_0063b631;
  ppppuStack_168 = DAT_00930514 + DAT_0093051c * 2;
  ppppuStack_16c = DAT_00930514;
  ppppuStack_170 = (undefined ****)0x63b376;
  local_12c = param_1;
  iVar2 = FUN_005d51f0();
  if ((iVar2 == 0) || (piVar7 = *(int **)(iVar2 + 4), piVar7 == (int *)0x0)) goto LAB_0063b631;
  local_14c = (undefined ****)0x0;
  if (param_1[10] == 0) {
    local_164 = (undefined *****)(param_1 + 2);
    ppppuStack_168 = (undefined ****)0x63b3a0;
    cVar1 = (**(code **)(*piVar7 + 0x70))();
    if (cVar1 == '\0') goto LAB_0063b631;
  }
  if (param_1[6] == 0) {
    local_164 = (undefined *****)param_1[2];
    local_150 = (undefined ***)&local_164;
    ppppuStack_168 = (undefined ****)0x63b3c0;
    iVar2 = (**(code **)(*piVar7 + 0x4c))();
    if (iVar2 != 0) goto LAB_0063b631;
  }
  local_164 = (undefined *****)param_1[4];
  ppppuStack_168 = (undefined ****)param_1[3];
  local_150 = (undefined ***)&ppppuStack_16c;
  ppppuStack_16c = (undefined ****)param_1[2];
  ppppuStack_170 = (undefined ****)0x63b3f3;
  ppppuVar3 = (undefined ****)(**(code **)(*piVar7 + 0x5c))();
  if (ppppuVar3 == (undefined ****)0x0) goto LAB_0063b631;
  local_164 = (undefined *****)0x63b404;
  iVar2 = (*(code *)(*ppppuVar3)[0x10])();
  if (iVar2 == 0) {
LAB_0063b4b0:
    local_164 = (undefined *****)0x63b4b7;
    (*(code *)(*ppppuVar3)[0x18])();
  }
  else {
    local_164 = (undefined *****)apppuStack_4c;
    ppppuStack_168 = (undefined ****)0x63b41d;
    (**(code **)(*piVar7 + 0x3c))();
    local_164 = (undefined *****)apppuStack_8c;
    ppppuStack_168 = (undefined ****)0x63b42c;
    FUN_00620b90();
    local_164 = (undefined *****)apppuStack_cc;
    ppppuStack_168 = apppuStack_4c;
    ppppuStack_16c = apppuStack_8c;
    ppppuStack_170 = (undefined ****)0x63b449;
    FUN_005cab00();
    if (param_1[0xb] == 0) {
      local_14c = (undefined ****)CONCAT31(local_14c._1_3_,param_1[0xc] != 0);
      local_164 = (undefined *****)local_14c;
      ppppuStack_16c = (undefined ****)0x0;
      ppppuStack_170 = apppuStack_cc;
      ppppuStack_174 = (undefined ****)0x63b478;
      ppppuStack_168 = ppppuVar3;
      piVar4 = (int *)FUN_0062b370();
      ppppuStack_170 = (undefined ****)*piVar4;
      ppppuStack_174 = (undefined ****)&ppppuStack_170;
      ppppuStack_16c = (undefined ****)piVar4[1];
      ppppuStack_168 = (undefined ****)piVar4[2];
      local_150 = (undefined ***)&ppppuStack_174;
      pcStack_178 = "Smackable";
      FUN_004023c0();
      pcStack_178 = (char *)0x63b4a7;
      pppppuVar5 = (undefined *****)FUN_0041cb10();
      if (pppppuVar5 == (undefined *****)0x0) goto LAB_0063b4b0;
    }
    else {
      local_164 = (undefined *****)0x63b4c3;
      uVar6 = (*(code *)(*ppppuVar3)[3])();
      pppuStack_128 = (undefined ***)&PTR_LAB_008a6738;
      ppppuVar3 = apppuStack_cc;
      piVar4 = aiStack_124;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = (int)*ppppuVar3;
        ppppuVar3 = ppppuVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      local_164 = (undefined *****)&pppuStack_128;
      local_150 = (undefined ***)&ppppuStack_168;
      local_4._0_1_ = 1;
      ppppuStack_168 = (undefined ****)0x998c21c0;
      ppppuStack_16c = (undefined ****)0x63b500;
      uStack_e4 = uVar6;
      FUN_006f25a0();
      local_4 = (uint)local_4._1_3_ << 8;
      pppppuVar5 = (undefined *****)local_14c;
    }
    if (param_1[9] != 0) {
      local_164 = (undefined *****)(param_1 + 2);
      ppppuStack_168 = (undefined ****)0x63b521;
      (**(code **)(*piVar7 + 0x68))();
    }
    if (param_1[8] != 0) {
      local_164 = (undefined *****)0x63b52f;
      (**(code **)(*piVar7 + 0x28))();
    }
    if (pppppuVar5 != (undefined *****)0x0) {
      if (_DAT_00890968 < (float)param_1[7]) {
        pppuStack_144 = (undefined ***)param_1[0xe];
        uStack_140 = param_1[0xf];
        ppuStack_13c = (undefined **)param_1[0x10];
        ppuStack_138 = (undefined **)param_1[0x12];
        uStack_134 = param_1[0x13];
        uStack_130 = param_1[0x14];
        local_164 = (undefined *****)param_1[7];
        ppppuStack_168 = &pppuStack_144;
        ppppuStack_16c = (undefined ****)0x63b583;
        FUN_00401bb0();
        ppppuStack_16c = (undefined ****)param_1[7];
        ppppuStack_170 = (undefined ****)&ppuStack_138;
        ppppuStack_174 = (undefined ****)0x63b591;
        FUN_00401bb0();
        local_164 = (undefined *****)0x63b59b;
        piVar4 = (int *)(*(code *)(*pppppuVar5)[0x15])();
        local_164 = (undefined *****)&pppuStack_144;
        ppppuStack_168 = (undefined ****)0x63b5a7;
        (**(code **)(*piVar4 + 0x60))();
        ppppuStack_168 = (undefined ****)0x63b5ae;
        piVar4 = (int *)(*(code *)(*pppppuVar5)[0x15])();
        ppppuStack_168 = (undefined ****)&ppuStack_13c;
        ppppuStack_16c = (undefined ****)0x63b5ba;
        (**(code **)(*piVar4 + 100))();
      }
      local_164 = (undefined *****)0x63b5c1;
      piVar7 = (int *)(**(code **)(*piVar7 + 0x20))();
      if (piVar7 != (int *)0x0) {
        local_164 = (undefined *****)0x63b5ce;
        cVar1 = (**(code **)(*piVar7 + 0x24))();
        if (cVar1 != '\0') goto LAB_0063b631;
      }
      if ((param_1[5] != DAT_0091ddbc) && (piVar7 != (int *)0x0)) {
        local_164 = &local_14c;
        ppppuStack_168 = (undefined ****)0x63b5ed;
        cVar1 = FUN_00629c00();
        if (cVar1 != '\0') {
          local_164 = (undefined *****)&local_150;
          ppppuStack_168 = (undefined ****)0x63b5fd;
          cVar1 = FUN_00629c00();
          if (cVar1 != '\0') {
            local_164 = (undefined *****)0x2;
            ppppuStack_168 = (undefined ****)0x0;
            ppppuStack_16c = (undefined ****)0x0;
            ppppuStack_170 = (undefined ****)param_1[5];
            ppppuStack_174 = local_14c;
            puStack_148 = (undefined1 *)&pcStack_178;
            pcStack_178 = (char *)param_1[5];
            FUN_006718f0(local_150);
          }
        }
      }
    }
  }
LAB_0063b631:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

