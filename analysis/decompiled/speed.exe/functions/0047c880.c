/* speed.exe 0047c880 FUN_0047c880; analysis pseudocode, not buildable source.
 * calls 00723920 FUN_00723920
 * calls 004624d0 FUN_004624d0
 * calls 007238d0 FUN_007238d0
 * calls 004670b0 FUN_004670b0
 */

void FUN_0047c880(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  puVar6 = &DAT_00919624;
  do {
    if ((((puVar6 != (undefined4 *)0x44) && (puVar5 = (undefined4 *)*puVar6, puVar5 != puVar6)) &&
        (puVar5 != (undefined4 *)0x0)) && (puVar5 + -1 != (int *)0x0)) {
      (**(code **)(puVar5[-1] + 8))(param_1);
    }
    puVar6 = puVar6 + 0x1c;
  } while ((int)puVar6 < 0x91a035);
  if (DAT_0091102c == 0) {
    DAT_00911028 = FUN_004624d0("JR2Server");
    DAT_0091102c = 1;
  }
  if ((DAT_00911028 != 0) && (DAT_00919690 != 0)) {
    iVar3 = DAT_008f82f8 - DAT_00911034;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (0x10 < iVar3) {
      DAT_00911034 = DAT_008f82f8;
      FUN_004670b0("SpeedCam");
    }
  }
  if (((DAT_0091e00c == 0) || (*(char *)(DAT_0091e00c + 0x2b4) == '\0')) &&
     ((DAT_0091e000 == 0 || (*(char *)(DAT_0091e000 + 0x19a4) == '\0')))) {
    bVar2 = false;
    iVar3 = 1;
    do {
      if ((&DAT_009195e8)[iVar3 * 0x70] != '\0') {
        puVar5 = (undefined4 *)(&DAT_00919624)[iVar3 * 0x1c];
        puVar6 = &DAT_00919624 + iVar3 * 0x1c;
        if (((puVar5 != puVar6) && (puVar5 != (undefined4 *)0x0)) &&
           (puVar5 != (undefined4 *)&DAT_00000004)) {
          if (!bVar2) {
            bVar2 = true;
            FUN_00723920();
          }
          iVar1 = *(int *)(&DAT_00919620 + iVar3 * 0x70);
          fStack_1c = *(float *)(iVar1 + 0x44);
          fStack_20 = *(float *)(iVar1 + 0x40);
          fStack_18 = *(float *)(iVar1 + 0x48);
          uStack_30 = *(undefined4 *)(iVar1 + 0x200);
          uStack_2c = *(undefined4 *)(iVar1 + 0x204);
          uStack_28 = *(undefined4 *)(iVar1 + 0x208);
          uStack_3c = *(undefined4 *)(iVar1 + 0x54);
          uStack_38 = *(undefined4 *)(iVar1 + 0x58);
          uStack_40 = *(undefined4 *)(iVar1 + 0x50);
          if (DAT_00911024 != 0) {
            if (DAT_009885c8 != (int *)0x0) {
              pfVar4 = (float *)(**(code **)(*DAT_009885c8 + 0x18))();
              fStack_1c = -*pfVar4;
              fStack_18 = pfVar4[1];
              fStack_20 = pfVar4[2];
            }
            uStack_30 = 0;
            uStack_2c = 0;
            uStack_40 = 0;
            uStack_3c = 0;
            uStack_38 = uStack_28;
          }
          puVar5 = (undefined4 *)*puVar6;
          if ((puVar5 == puVar6) || (puVar5 == (undefined4 *)0x0)) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = puVar5 + -1;
          }
          FUN_007238d0(iVar3 == 2,&fStack_20,&uStack_30,&uStack_40,puVar5[3] == 1);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  return;
}

