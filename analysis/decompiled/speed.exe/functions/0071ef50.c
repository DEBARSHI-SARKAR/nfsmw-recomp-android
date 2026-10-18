/* speed.exe 0071ef50 FUN_0071ef50; analysis pseudocode, not buildable source.
 * calls 007153b0 FUN_007153b0
 * calls 00715610 FUN_00715610
 * calls 00708270 FUN_00708270
 * calls 00717ae0 FUN_00717ae0
 * calls 007176d0 FUN_007176d0
 * calls 00713b20 FUN_00713b20
 * calls 0071dac0 FUN_0071dac0
 * calls 0071daa0 FUN_0071daa0
 * calls 0045da70 FUN_0045da70
 * calls 00704e00 FUN_00704e00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071ef50(int param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  undefined1 local_11;
  int local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iVar7 = DAT_00993cc8;
  if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
    piVar5 = (int *)FUN_00715610(1);
    piVar6 = (int *)FUN_00715610(2);
    iVar2 = DAT_00993cc8;
    if ((1 < *(int *)(param_1 + 0x30)) && (piVar6 != (int *)0x0)) {
      fVar8 = (float10)FUN_0045da70(0x3f800000);
      if (fVar8 <= (float10)_DAT_008b0e70) {
        FUN_00717ae0();
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xefffffff;
        return;
      }
      (**(code **)(*piVar6 + 0x174))();
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xefffffff;
      return;
    }
    piVar6 = *(int **)(iVar7 + 0xd8);
    local_10 = piVar6[3];
    uStack_c = (**(code **)(*piVar6 + 0x78))();
    iStack_4 = ((*(char *)(iVar2 + 0x15c) < '\x02') - 1 & 7) + 1;
    uStack_8 = 2;
    FUN_00713b20(0x10,&local_10,&PTR_s_StaticRoadblock_DispRBUpdate_00901cf4,&DAT_009926f4,piVar6);
    cVar3 = (**(code **)(*piVar5 + 0x1a0))();
    if (cVar3 == '\0') {
      (**(code **)(*piVar5 + 0x160))();
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xefffffff;
      return;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x24) & 0x100) != 0) {
      iVar7 = FUN_00704e00();
      if (iVar7 != 0) {
        piVar5 = (int *)FUN_00704e00();
        sVar4 = (**(code **)(*piVar5 + 0x48))();
        if (1 < sVar4) {
          piVar5 = (int *)FUN_00708270();
          if ((piVar5 == (int *)0x0) && (piVar5 = (int *)FUN_00715610(2), piVar5 == (int *)0x0)) {
            FUN_0071daa0();
            *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xefffffff;
            return;
          }
          (**(code **)(*piVar5 + 0x164))();
          *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xefffffff;
          return;
        }
      }
      FUN_0071dac0(*(undefined4 *)(param_1 + 0x28));
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xefffffff;
      return;
    }
    bVar1 = false;
    if ((DAT_00992230 != 0) &&
       (((*(int *)(DAT_00992230 + 0x88) != 0 &&
         (*(int *)(*(int *)(DAT_00992230 + 0x88) + 8) == 0x4d)) ||
        ((DAT_00992230 != 0 &&
         ((*(int *)(DAT_00992230 + 0x88) != 0 &&
          (*(int *)(*(int *)(DAT_00992230 + 0x88) + 8) == 0x4e)))))))) {
      bVar1 = true;
    }
    fVar8 = (float10)FUN_0045da70(0x3f800000);
    if (((float10)_DAT_008b0e70 < fVar8) && (!bVar1)) {
      piVar5 = (int *)FUN_007153b0(1,0);
      if (piVar5 == (int *)0x0) {
        return;
      }
      FUN_007176d0(piVar5,1);
      (**(code **)(*piVar5 + 0x16c))();
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xefffffff;
      return;
    }
    FUN_00713b20(1,&local_11,&PTR_s_ExtraCops_RBWarning_00901fbc,&DAT_009923ac,0);
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xefffffff;
  return;
}

