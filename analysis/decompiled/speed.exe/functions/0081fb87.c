/* speed.exe 0081fb87 FUN_0081fb87; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081fb38 FUN_0081fb38
 * calls 0081e9e7 FUN_0081e9e7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0081fb87(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  
  FUN_0081bccb();
  DAT_009c2284 = FUN_0081e9e7((uint)DAT_009c205f << 8);
  FUN_0081bcd9();
  bVar6 = DAT_009c205f;
  uVar5 = (uint)DAT_009c205f;
  iVar2 = 0;
  iVar3 = DAT_009c2284;
  if (uVar5 != 0) {
    do {
      (&DAT_009c226c)[iVar2] = iVar3;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x100;
    } while (iVar2 < (int)uVar5);
  }
  uVar5 = 0;
  do {
    local_8 = (float)((uVar5 & 0xff) << 8) * _DAT_00894958;
    if (bVar6 == 1) {
      *(undefined1 *)(DAT_009c226c + uVar5) = 0x7f;
    }
    else {
      iVar3 = 0;
      bVar7 = 0;
      if (bVar6 != 0) {
        do {
          *(undefined1 *)(uVar5 + (&DAT_009c226c)[iVar3]) = 0;
          iVar3 = iVar3 + 1;
          bVar7 = DAT_009c205f;
        } while (iVar3 < (int)(uint)DAT_009c205f);
      }
      if (local_8 < DAT_009c1fc4 == (local_8 == DAT_009c1fc4)) {
        if (*(float *)(&DAT_009c1fc0 + (uint)bVar7 * 4) <= local_8) {
          FUN_0081fb38(&local_34,DAT_009c1fc4,
                       (_DAT_00890960 - *(float *)(&DAT_009c1fc0 + (uint)bVar7 * 4)) * _DAT_00890da8
                       ,(_DAT_00890960 - local_8) * _DAT_00890da8);
          local_1c = (int)ROUND(local_34 * _DAT_00899dd8);
          fVar1 = local_30 * _DAT_00899dd8;
          *(undefined1 *)(DAT_009c226c + uVar5) = (undefined1)local_1c;
          local_20 = (int)ROUND(fVar1);
          uVar4 = (undefined1)local_20;
          goto LAB_0081fd12;
        }
        iVar3 = 0;
        if (bVar7 != 0) {
          do {
            if (((&DAT_009c1fc4)[iVar3] <= local_8) &&
               (fVar1 = (float)(&DAT_009c1fc8)[iVar3], local_8 < fVar1 != (local_8 == fVar1))) {
              FUN_0081fb38(&local_34,(&DAT_009c1fc4)[iVar3],(&DAT_009c1fc8)[iVar3],local_8);
              local_28 = (int)ROUND(local_34 * _DAT_00899dd8);
              local_24 = local_30 * _DAT_00899dd8;
              *(undefined1 *)(uVar5 + (&DAT_009c226c)[iVar3]) = (undefined1)local_28;
              local_2c = (int)ROUND(local_24);
              *(undefined1 *)(uVar5 + (&DAT_009c2270)[iVar3]) = (undefined1)local_2c;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(uint)DAT_009c205f);
        }
      }
      else if (bVar7 < 5) {
        FUN_0081fb38(&local_34,DAT_009c1fc4,
                     (_DAT_00890960 - *(float *)(&DAT_009c1fc0 + (uint)bVar7 * 4)) * _DAT_00890da8,
                     local_8);
        local_14 = (int)ROUND(local_34 * _DAT_00899dd8);
        fVar1 = local_30 * _DAT_00899dd8;
        *(undefined1 *)(DAT_009c226c + uVar5) = (undefined1)local_14;
        local_18 = (int)ROUND(fVar1);
        uVar4 = (undefined1)local_18;
LAB_0081fd12:
        *(undefined1 *)(uVar5 + *(int *)(&DAT_009c2268 + (uint)DAT_009c205f * 4)) = uVar4;
      }
      else {
        FUN_0081fb38(&local_34,DAT_009c1fc4,DAT_009c1fc8,local_8);
        local_c = (int)ROUND(local_34 * _DAT_00899dd8);
        fVar1 = local_30 * _DAT_00899dd8;
        *(undefined1 *)(DAT_009c226c + uVar5) = (undefined1)local_c;
        local_10 = (int)ROUND(fVar1);
        *(undefined1 *)(DAT_009c2270 + uVar5) = (undefined1)local_10;
      }
    }
    uVar5 = uVar5 + 1;
    bVar6 = DAT_009c205f;
    if (0xff < (int)uVar5) {
      return;
    }
  } while( true );
}

