/* speed.exe 00664010 FUN_00664010; analysis pseudocode, not buildable source.
 * calls 006634b0 FUN_006634b0
 * calls 00452680 FUN_00452680
 * calls 00459ae0 FUN_00459ae0
 * calls 00457670 FUN_00457670
 * calls 00455d70 FUN_00455d70
 * calls 004526e0 FUN_004526e0
 * calls 0065ec00 FUN_0065ec00
 * calls 00454830 FUN_00454830
 * calls 004526c0 FUN_004526c0
 * calls 00663120 FUN_00663120
 * calls 00452880 FUN_00452880
 * calls 0065ec70 FUN_0065ec70
 * calls 00659250 FUN_00659250
 */

int * FUN_00664010(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint unaff_EBP;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  int local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087a33f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00454830(param_1);
  local_2c[0] = iVar2;
  piVar3 = (int *)FUN_0065ec00(local_14,local_2c);
  if (*piVar3 == DAT_009259c4) {
    local_24 = FUN_00454830(param_1);
    local_20 = 0;
    local_1c = param_2;
    local_18 = (int *)param_3;
    piVar3 = (int *)FUN_006634b0(local_14,&local_24);
    *(int *)(*piVar3 + 0x10) = *(int *)(*piVar3 + 0x10) + 1;
    FUN_00452880(0x3c,1);
    local_1c = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x3c,0);
    local_c = (void *)0x0;
    if (local_1c == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      ppuVar8 = &PTR_PTR_008f8328;
      iVar6 = iVar2;
      uVar4 = FUN_00459ae0(iVar2,param_2,param_3,&PTR_PTR_008f8328);
      piVar3 = (int *)FUN_00455d70(uVar4,iVar6,param_2,param_3,ppuVar8);
    }
    local_c = (void *)0xffffffff;
    FUN_00452680(&stack0xffffffd0);
    uVar5 = 0;
    if (unaff_EBP != 0) {
      do {
        cVar1 = FUN_004526c0(uVar5);
        if (cVar1 != '\0') {
          FUN_0065ec00(local_2c,&stack0xffffffcc);
          if (local_2c[0] == DAT_009259c4) {
            FUN_0065ec70(&local_1c,&stack0xffffffcc);
            if (local_1c == DAT_00925af0) {
              ppuVar8 = (undefined **)0x0;
              uVar7 = 0;
              uVar4 = 0;
            }
            else {
              *(int *)(local_1c + 0x10) = *(int *)(local_1c + 0x10) + 1;
              uVar7 = *(undefined4 *)(local_1c + 0x18);
              uVar4 = *(undefined4 *)(local_1c + 0x14);
              ppuVar8 = &PTR_PTR_008f8328;
            }
          }
          else {
            ppuVar8 = &PTR_PTR_008f832c;
            *piVar3 = *piVar3 + 1;
            uVar4 = *(undefined4 *)(local_2c[0] + 0x10);
            uVar7 = 0;
          }
          FUN_004526e0(uVar5,uVar4,uVar7,ppuVar8);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < unaff_EBP);
    }
    FUN_00457670();
    local_1c = iVar2;
    local_18 = piVar3;
    FUN_00663120(local_2c,&local_1c);
    ExceptionList = local_14[0];
    return piVar3;
  }
  ExceptionList = local_c;
  return *(int **)(*piVar3 + 0x10);
}

