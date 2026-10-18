/* speed.exe 00709a70 FUN_00709a70; analysis pseudocode, not buildable source.
 * calls 004cb3f0 FUN_004cb3f0
 * calls 004ae8b0 FUN_004ae8b0
 * calls 006ff350 FUN_006ff350
 * calls 004cb270 FUN_004cb270
 * calls 004b8880 FUN_004b8880
 * calls 0045a430 FUN_0045a430
 * calls 004b68c0 FUN_004b68c0
 * calls 00704570 FUN_00704570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00709a70(undefined4 param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_18 [24];
  
  _DAT_00992254 = param_1;
  DAT_00992260 = 0;
  if (DAT_00992234 == 1) {
    if ((DAT_0099222c != (int *)0x0) && (DAT_008f8704 != 0)) {
      (**(code **)(*DAT_0099222c + 0x20))();
    }
    if ((DAT_00992230 != (int *)0x0) && (DAT_008f8700 != 0)) {
      cVar2 = FUN_004ae8b0();
      if (cVar2 == '\0') {
        piVar7 = (int *)FUN_006ff350(auStack_18,1);
        _DAT_00992258 = (float)(DAT_00925ae8 - *piVar7) * _DAT_00890984;
      }
      else {
        _DAT_00992258 = 65535.0;
      }
      FUN_00704570();
      if (((DAT_00993c4c != 0) && ((DAT_00993c50 - DAT_00993c4c) / 0x2c != 0)) &&
         (_DAT_009aab5c < _DAT_00901bc4)) {
        piVar7 = &DAT_0099339c;
        iVar6 = DAT_00993c4c;
        iVar3 = DAT_00993c50;
        do {
          piVar5 = (int *)piVar7[-1];
          if (piVar5 != (int *)*piVar7) {
            do {
              uVar1 = *(ushort *)(*piVar5 + 0x3e);
              if ((uVar1 & 1) != 0) {
                *(ushort *)(*piVar5 + 0x3e) = uVar1 & 0xfffe;
              }
              piVar5 = piVar5 + 1;
              iVar6 = DAT_00993c4c;
              iVar3 = DAT_00993c50;
            } while (piVar5 != (int *)*piVar7);
          }
          piVar7 = piVar7 + 5;
        } while ((int)piVar7 < 0x9933ec);
        if ((iVar6 != 0) && (DAT_00993f20 < (uint)((iVar3 - iVar6) / 0x2c))) {
          DAT_00993f20 = FUN_004b68c0();
        }
        (**(code **)(*DAT_00992230 + 0x2c))(0);
      }
      (**(code **)(*DAT_00992230 + 0x20))();
      if ((DAT_00992224 != 0) && (piVar7 = (int *)*DAT_009933e8, piVar7 != DAT_009933e8)) {
        do {
          iVar6 = piVar7[2];
          iVar3 = FUN_004cb3f0(iVar6);
          if (iVar3 != 0) {
            uVar9 = 0;
            uVar8 = 0;
            uVar4 = FUN_004cb270(iVar6);
            FUN_004b8880(uVar4,uVar8,uVar9);
            FUN_0045a430();
          }
          piVar7 = (int *)*piVar7;
        } while (piVar7 != DAT_009933e8);
      }
    }
  }
  else if (((DAT_00992234 == 3) && (DAT_0099222c != (int *)0x0)) && (DAT_008f8704 != 0)) {
    (**(code **)(*DAT_0099222c + 0x20))();
    return;
  }
  return;
}

