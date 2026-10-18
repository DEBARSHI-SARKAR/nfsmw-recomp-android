/* speed.exe 0062fa50 FUN_0062fa50; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0062fa50(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 auStack_4c [48];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008780c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a71e4;
  fVar1 = (float)param_1[5];
  fVar2 = (float)param_1[6];
  fVar3 = (float)param_1[7];
  fVar4 = (float)param_1[8];
  local_4 = 0;
  puVar13 = DAT_0092d93c;
  if (DAT_0092d93c != DAT_0092d93c + DAT_0092d944) {
    do {
      piVar5 = (int *)*puVar13;
      iVar12 = (**(code **)(*piVar5 + 0x1c))();
      puVar11 = DAT_00920390;
      if (iVar12 != 0) {
        (**(code **)(*piVar5 + 0x3c))(auStack_4c);
        puVar10 = DAT_00920390;
        puVar11 = DAT_00920390;
        if ((fStack_18 - fVar3) * (fStack_18 - fVar3) +
            (fStack_1c - fVar2) * (fStack_1c - fVar2) + (fStack_14 - fVar4) * (fStack_14 - fVar4) <
            fVar1 * fVar1) {
          puVar11 = DAT_00920390 + 8;
          if (DAT_00920390 != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)(iVar12 + 8);
            uVar7 = param_1[4];
            uVar8 = param_1[3];
            uVar9 = param_1[2];
            puVar11 = DAT_00920390 + 1;
            DAT_00920390 = DAT_00920390 + 8;
            *puVar11 = 0x20;
            *puVar10 = &PTR_FUN_008a7204;
            puVar10[2] = uVar9;
            puVar10[3] = uVar8;
            puVar10[4] = uVar7;
            puVar10[5] = uVar6;
            puVar10[6] = 0;
            puVar11 = DAT_00920390;
          }
        }
      }
      DAT_00920390 = puVar11;
      puVar13 = puVar13 + 1;
    } while (puVar13 != DAT_0092d93c + DAT_0092d944);
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

