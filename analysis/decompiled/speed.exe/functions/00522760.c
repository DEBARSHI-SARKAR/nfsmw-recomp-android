/* speed.exe 00522760 FUN_00522760; analysis pseudocode, not buildable source.
 * calls 00513bc0 FUN_00513bc0
 * calls 00460c70 FUN_00460c70
 * calls 005985c0 FUN_005985c0
 * calls 0078c790 FUN_0078c790
 * calls 00460d20 FUN_00460d20
 * calls 0078c730 FUN_0078c730
 */

void __thiscall FUN_00522760(int param_1,undefined *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined *puVar8;
  undefined4 local_508 [13];
  int local_4d4;
  undefined1 local_288 [644];
  
  bVar7 = param_2 == (undefined *)0x0;
  if (bVar7) {
    param_2 = &DAT_0091c39c;
  }
  puVar8 = param_2;
  FUN_0078c730(param_2);
  uVar2 = FUN_0078c790(puVar8);
  puVar3 = (undefined4 *)FUN_00513bc0(local_288,uVar2);
  puVar6 = local_508;
  for (iVar5 = 0x9f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  if (local_4d4 != 0) {
    FUN_005985c0(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0xa424c082,param_2);
    return;
  }
  bVar1 = false;
  iVar5 = 0;
  do {
    iVar4 = FUN_00460d20((&DAT_0091c1ac)[iVar5],param_2);
    if (iVar4 == 0) {
      if (bVar7) {
        (&DAT_0091c22c)[iVar5] = DAT_0091c37c == 0;
      }
      bVar1 = true;
      break;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  if ((DAT_0091c1a8 < 0x20) && (!bVar1)) {
    puVar3 = &DAT_0091c1ac + DAT_0091c1a8;
    DAT_0091c1a8 = DAT_0091c1a8 + 1;
    FUN_00460c70(*puVar3,param_2);
    (&DAT_0091c22b)[DAT_0091c1a8] = DAT_0091c37c == 0;
  }
  return;
}

