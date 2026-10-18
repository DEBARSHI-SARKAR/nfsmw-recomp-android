/* speed.exe 0063bcc0 FUN_0063bcc0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 0065faf0 FUN_0065faf0
 * calls 00469b90 FUN_00469b90
 * calls 005d59f0 FUN_005d59f0
 * calls 004011c0 FUN_004011c0
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_0063bcc0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [88];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008795a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7670;
  local_4 = 0;
  if (param_1[2] != 0) {
    iVar6 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[2]);
    if ((iVar6 != 0) && (piVar1 = *(int **)(iVar6 + 4), piVar1 != (int *)0x0)) {
      piVar7 = (int *)FUN_005d59f0(&LAB_00404040);
      if (piVar7 != (int *)0x0) {
        cVar5 = (**(code **)(*piVar1 + 0x24))();
        if (cVar5 != '\0') {
          puVar8 = (undefined4 *)(**(code **)(*piVar7 + 0xc))(param_1[3]);
          uStack_74 = *puVar8;
          uStack_70 = puVar8[1];
          uStack_6c = puVar8[2];
          puVar8 = (undefined4 *)FUN_004011c0(auStack_64,&uStack_74,0x3f800000);
          uVar2 = *puVar8;
          uVar3 = puVar8[1];
          uVar4 = puVar8[2];
          uStack_68 = puVar8[3];
          uVar9 = FUN_005cc240("TireBlo");
          iVar6 = FUN_00469b90(uVar2,uVar3,uVar4,uStack_68,DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,
                               DAT_008a2fcc,DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,
                               param_1[2],0);
          *(undefined4 *)(iVar6 + 4) = uVar9;
          FUN_0065faf0();
        }
      }
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

