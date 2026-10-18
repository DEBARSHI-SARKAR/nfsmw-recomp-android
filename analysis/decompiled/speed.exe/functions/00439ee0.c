/* speed.exe 00439ee0 FUN_00439ee0; analysis pseudocode, not buildable source.
 * calls 0041ba80 FUN_0041ba80
 * calls 005d59f0 FUN_005d59f0
 * calls 004342e0 FUN_004342e0
 * calls 005cc240 FUN_005cc240
 * calls 005eda20 FUN_005eda20
 * calls 004059c0 FUN_004059c0
 * calls 005fbe70 FUN_005fbe70
 * calls 0041c510 FUN_0041c510
 * calls 005edb50 FUN_005edb50
 * calls 005edbc0 FUN_005edbc0
 * calls 005d0370 FUN_005d0370
 * calls 0040fe20 FUN_0040fe20
 * calls 0065faf0 FUN_0065faf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00439ee0(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  int *local_70;
  float fStack_6c;
  int *local_68 [2];
  int local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int *local_4c;
  undefined4 local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868d88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_60 = param_1;
  piVar3 = (int *)FUN_0041ba80();
  local_48 = 0;
  local_4 = 0;
  local_70 = (int *)**(int **)(param_1 + 0x134);
  local_4c = piVar3;
  if (local_70 != *(int **)(param_1 + 0x134)) {
    do {
      piVar9 = (int *)local_70[2];
      local_68[0] = piVar9;
      iVar4 = (**(code **)(*piVar9 + 0x14))();
      if (iVar4 == 0) {
        iVar4 = FUN_0041c510(piVar3,piVar3[1],local_68);
        FUN_004342e0(1);
        piVar3[1] = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
        piVar3 = local_4c;
      }
      cVar1 = (**(code **)(*piVar9 + 0x24))();
      if (((cVar1 == '\0') &&
          (piVar5 = (int *)(**(code **)(*piVar9 + 0x1c))(), piVar5 != (int *)0x0)) &&
         (iVar4 = (**(code **)(*piVar5 + 8))(), iVar4 != 0)) {
        fStack_38 = *(float *)(iVar4 + 0x10);
        fStack_34 = *(float *)(iVar4 + 0x14);
        fStack_30 = *(float *)(iVar4 + 0x18);
        pfVar6 = (float *)(**(code **)(*piVar9 + 0x38))();
        fStack_44 = *pfVar6;
        fStack_40 = pfVar6[1];
        fStack_3c = pfVar6[2];
        pfVar6 = (float *)(**(code **)(*piVar9 + 0x3c))();
        fStack_5c = fStack_44 - fStack_38;
        fStack_2c = *pfVar6;
        fStack_28 = pfVar6[1];
        piStack_24 = (int *)pfVar6[2];
        fStack_58 = fStack_40 - fStack_34;
        fStack_54 = fStack_3c - fStack_30;
        FUN_0040fe20(&fStack_5c,&fStack_5c);
        if (fStack_5c * fStack_2c + fStack_28 * fStack_58 + (float)piStack_24 * fStack_54 <
            _DAT_00890968) {
          (**(code **)(*piVar9 + 0x20))(1);
          (**(code **)(*piVar5 + 0xe8))();
          FUN_005edb50("roadblocks_dodged");
          uVar7 = FUN_005cc240("Dodged");
          FUN_004059c0(local_68);
          piStack_24 = local_68[0];
          uStack_1c = 0x14;
          uStack_18 = 0;
          uStack_14 = 0;
          uStack_20 = uVar7;
          FUN_0065faf0();
          sVar2 = (**(code **)(*piVar9 + 0x48))();
          if (0 < sVar2) {
            fVar10 = (float10)FUN_005edbc0("tire_spikes_dodged");
            if ((float10)_DAT_00890968 <= fVar10) {
              fStack_6c = (float)fVar10;
            }
            else {
              fStack_6c = 0.0;
            }
            if (((DAT_0091e000 == 0) || (*(int *)(DAT_0091e000 + 0x1960) != 1)) ||
               ((*(int *)(DAT_0091e000 + 0x1968) != 0 && (cVar1 = FUN_005fbe70(), cVar1 != '\0'))))
            {
              sVar2 = (**(code **)(*piVar9 + 0x48))();
              local_68[0] = (int *)((float)(int)sVar2 + fStack_6c);
              FUN_005eda20("tire_spikes_dodged",local_68[0]);
            }
            iVar4 = *piVar5;
            sVar2 = (**(code **)(*piVar9 + 0x48))();
            (**(code **)(iVar4 + 0xfc))((int)sVar2);
          }
        }
      }
      local_70 = (int *)*local_70;
      param_1 = local_60;
    } while (local_70 != (int *)*(int *)(local_60 + 0x134));
  }
  piVar9 = (int *)*piVar3;
  if (piVar9 != piVar3) {
    do {
      piVar5 = (int *)piVar9[2];
      (**(code **)(*piVar5 + 0x10))();
      piVar8 = (int *)FUN_005d59f0(&LAB_004028f0);
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 4))();
      }
      (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))(piVar5);
      piVar9 = (int *)*piVar9;
    } while (piVar9 != piVar3);
  }
  piVar9 = (int *)*piVar3;
  *piVar3 = (int)piVar3;
  local_4 = 0xffffffff;
  piVar3[1] = (int)piVar3;
  while (piVar9 != piVar3) {
    piVar5 = (int *)*piVar9;
    FUN_005d0370(piVar9,0xc,0);
    piVar9 = piVar5;
  }
  FUN_005d0370(piVar3,0xc,0);
  ExceptionList = pvStack_c;
  return;
}

