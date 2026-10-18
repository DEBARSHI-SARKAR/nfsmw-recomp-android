/* speed.exe 00522870 FUN_00522870; analysis pseudocode, not buildable source.
 * calls 00513bc0 FUN_00513bc0
 * calls 00598970 FUN_00598970
 * calls 0056bc10 FUN_0056bc10
 * calls 00522760 FUN_00522760
 * calls 0078c790 FUN_0078c790
 * calls 0079bac0 FUN_0079bac0
 * calls 0079bca0 FUN_0079bca0
 * calls 0078bcc0 FUN_0078bcc0
 * calls 0078c730 FUN_0078c730
 * calls 0079a9e0 FUN_0079a9e0
 * calls 0079d830 FUN_0079d830
 * calls 00838360 FUN_00838360
 */

void FUN_00522870(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 local_508 [15];
  int local_4cc;
  undefined1 local_4ac [548];
  undefined1 local_288 [644];
  
  if (((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) && (iVar5 = 0, 0 < DAT_0091c1a8)) {
    do {
      if ((&DAT_0091c22c)[iVar5] != '\0') {
        uVar2 = (&DAT_0091c1ac)[iVar5];
        FUN_0078c730(uVar2);
        uVar2 = FUN_0078c790(uVar2);
        puVar3 = (undefined4 *)FUN_00513bc0(local_288,uVar2);
        puVar6 = local_508;
        for (iVar4 = 0x9f; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar7 = local_4ac;
        FUN_0079bac0(puVar7);
        cVar1 = FUN_0079bca0(puVar7);
        if (cVar1 == '\x01') {
          iVar4 = FUN_0078c730();
          FUN_00838360(*(undefined4 *)(iVar4 + 0xf8),local_4ac,2,0,0);
          (&DAT_0091c22c)[iVar5] = 0;
        }
        else if (local_4cc != 0) {
          FUN_0079bac0();
          iVar4 = FUN_0078bcc0();
          if (iVar4 != 0) {
            iVar4 = FUN_0078c730();
            FUN_00838360(*(undefined4 *)(iVar4 + 0xf8),local_4ac,2,0,0);
            puVar7 = local_4ac;
            FUN_0079a9e0(puVar7);
            FUN_0079d830(puVar7);
            (&DAT_0091c22c)[iVar5] = 0;
            FUN_00522760(local_4ac);
            uVar2 = FUN_0056bc10(0x635cb250,local_4ac);
            FUN_00598970(0,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar2);
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_0091c1a8);
  }
  return;
}

