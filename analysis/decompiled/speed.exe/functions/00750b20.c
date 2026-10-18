/* speed.exe 00750b20 FUN_00750b20; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 0074d190 FUN_0074d190
 * calls 00738a10 FUN_00738a10
 * calls 00444fe0 FUN_00444fe0
 * calls 00750610 FUN_00750610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00750b20(int param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  FUN_00738a10(param_2);
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0x84) != 0) && (*(int *)(*(int *)(param_2 + 0x84) + 0x150) != 0)) {
      cVar3 = FUN_0074d190();
      iVar4 = (int)cVar3;
      bVar8 = false;
      if (iVar4 == 0) {
        iVar4 = (int)*(char *)(*(int *)(param_1 + 0x1c) + 0x11c);
        bVar8 = iVar4 == 0;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
          bVar8 = iVar4 == 0;
        }
      }
      if (!bVar8) {
        fVar2 = (float)iVar4;
        if (iVar4 < 0) {
          fVar2 = fVar2 + _DAT_00891214;
        }
        *(float *)(param_1 + 0x3b8) =
             (_DAT_00890960 / (fVar2 + fVar2) - _DAT_0089096c) * _DAT_008aae90;
      }
    }
    FUN_00750610(param_1 + 0x90);
    if ((*(int *)(param_1 + 0x3e4) == param_1 + 0x3e4) &&
       (piVar6 = *(int **)(param_2 + 0x1ac), piVar6 != (int *)(param_2 + 0x1ac))) {
      do {
        iVar4 = piVar6[4];
        if (iVar4 == 0) {
          local_20 = piVar6[1];
          local_1c = piVar6[2];
          local_18 = piVar6[3];
          local_50 = 0x3f800000;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0x3f800000;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0x3f800000;
          local_24 = 0;
          local_14 = 0x3f800000;
          piVar5 = (int *)FUN_005d29d0(0x60,0);
          if (piVar5 == (int *)0x0) goto LAB_00750cb4;
          puVar7 = &local_50;
LAB_00750c04:
          FUN_00444fe0(piVar5 + 4,puVar7);
          piVar5[0x14] = 0;
          piVar5[0x15] = 0;
        }
        else {
          piVar5 = (int *)FUN_005d29d0(0x60,0);
          if (piVar5 != (int *)0x0) {
            puVar7 = (undefined4 *)(iVar4 + 0x10);
            goto LAB_00750c04;
          }
LAB_00750cb4:
          piVar5 = (int *)0x0;
        }
        puVar7 = *(undefined4 **)(param_1 + 1000);
        *puVar7 = piVar5;
        *(int **)(param_1 + 1000) = piVar5;
        piVar5[1] = (int)puVar7;
        *piVar5 = param_1 + 0x3e4;
        piVar6 = (int *)*piVar6;
      } while (piVar6 != (int *)(param_2 + 0x1ac));
    }
    if (*(int *)(param_1 + 0x3ec) == param_1 + 0x3ec) {
      for (puVar7 = *(undefined4 **)(param_2 + 0x1a4); puVar7 != (undefined4 *)(param_2 + 0x1a4);
          puVar7 = (undefined4 *)*puVar7) {
        iVar4 = puVar7[4];
        if (iVar4 == 0) {
          local_20 = puVar7[1];
          local_1c = puVar7[2];
          local_18 = puVar7[3];
          local_50 = 0x3f800000;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0x3f800000;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0x3f800000;
          local_24 = 0;
          local_14 = 0x3f800000;
          piVar6 = (int *)FUN_005d29d0(0x60,0);
          if (piVar6 == (int *)0x0) goto LAB_00750dec;
          FUN_00444fe0(piVar6 + 4,&local_50);
          piVar6[0x14] = 0;
          piVar6[0x15] = 0;
        }
        else {
          piVar6 = (int *)FUN_005d29d0(0x60,0);
          if (piVar6 == (int *)0x0) {
LAB_00750dec:
            piVar6 = (int *)0x0;
          }
          else {
            FUN_00444fe0(piVar6 + 4,iVar4 + 0x10);
            piVar6[0x14] = 0;
            piVar6[0x15] = 0;
          }
        }
        puVar1 = *(undefined4 **)(param_1 + 0x3f0);
        *puVar1 = piVar6;
        *(int **)(param_1 + 0x3f0) = piVar6;
        piVar6[1] = (int)puVar1;
        *piVar6 = param_1 + 0x3ec;
      }
    }
  }
  return;
}

