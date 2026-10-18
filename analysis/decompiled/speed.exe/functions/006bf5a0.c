/* speed.exe 006bf5a0 FUN_006bf5a0; analysis pseudocode, not buildable source.
 * calls 00516e90 FUN_00516e90
 * calls 00503400 FUN_00503400
 * calls 00516e20 FUN_00516e20
 * calls 004647c0 FUN_004647c0
 * calls 00516e10 FUN_00516e10
 * calls 00460bf0 FUN_00460bf0
 */

void FUN_006bf5a0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_70 [16];
  undefined4 auStack_60 [6];
  undefined1 local_48 [68];
  
  DAT_0093e86c = DAT_0093e86c + 1;
  if (5 < DAT_0093e86c) {
    iVar7 = 0;
    do {
      FUN_00516e10((&PTR_DAT_008f9314)[iVar7]);
      uVar3 = FUN_00516e20();
      FUN_00516e10(uVar3);
      uVar3 = FUN_00516e90(uVar3);
      FUN_004647c0(local_48,"%s_%s",uVar3);
      uVar3 = FUN_00460bf0(local_48,1,0);
      piVar4 = (int *)FUN_00503400(uVar3);
      piVar1 = *(int **)(*piVar4 + 0x18);
      iVar2 = *piVar1;
      puVar9 = (undefined4 *)0x0;
      auStack_60[iVar7] = piVar4;
      (**(code **)(iVar2 + 0x4c))(piVar1,0,local_70,0,0);
      (**(code **)(*DAT_00982a64 + 0x4c))(DAT_00982a64,iVar7,0,&stack0xffffff84,0);
      uVar6 = piVar4[0x10];
      puVar8 = (undefined4 *)0x0;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      (**(code **)(**(int **)(*piVar4 + 0x18) + 0x50))(*(int **)(*piVar4 + 0x18),0);
      (**(code **)(*DAT_00982a64 + 0x50))(DAT_00982a64,iVar7,0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 6);
  }
  return;
}

