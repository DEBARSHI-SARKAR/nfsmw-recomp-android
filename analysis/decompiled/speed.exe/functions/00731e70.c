/* speed.exe 00731e70 FUN_00731e70; analysis pseudocode, not buildable source.
 * calls 00730460 FUN_00730460
 * calls 0072df20 FUN_0072df20
 * calls 00728f60 FUN_00728f60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00731e70(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  if (*param_2 != -0x7ffcbeb0) {
    if (*param_2 != 0x34158) {
      return 0;
    }
    puVar8 = (undefined4 *)param_1[0x13];
    piVar6 = param_2 + 2;
    *puVar8 = piVar6;
    param_1[0x13] = piVar6;
    param_2[3] = (int)puVar8;
    *piVar6 = (int)(param_1 + 0x12);
    return 1;
  }
  piVar6 = (int *)(param_2[1] + 8 + (int)param_2);
  param_2 = param_2 + 2;
  do {
    if (piVar6 <= param_2) {
      FUN_00728f60();
      _DAT_009aaab4 = 0xffffffff;
      _DAT_009aab18 = 0xffffffff;
      DAT_009aac80 = 1;
      if (((DAT_009aac81 == '\0') && (DAT_009ab208 != 0)) &&
         (cVar4 = FUN_0072df20(&param_2), cVar4 != '\0')) {
        FUN_00730460(&param_2);
      }
      return 1;
    }
    iVar2 = *param_2;
    if (iVar2 == 0x34152) {
      iVar2 = param_2[1];
      for (piVar5 = param_2 + 2; piVar5 < (int *)(iVar2 + 8 + (int)param_2);
          piVar5 = piVar5 + *(char *)((int)piVar5 + 10) * 2 + 9) {
        iVar7 = (int)(short)piVar5[2] % 100;
        cVar4 = (char)((int)(short)piVar5[2] / 100) + '@';
        if ((((cVar4 < 'A') || ('T' < cVar4)) || (iVar7 < 1)) || (DAT_00903164 <= iVar7)) {
          puVar8 = (undefined4 *)param_1[3];
          *puVar8 = piVar5;
          param_1[3] = piVar5;
          piVar5[1] = (int)puVar8;
          *piVar5 = (int)(param_1 + 2);
        }
        else {
          puVar8 = (undefined4 *)param_1[1];
          *puVar8 = piVar5;
          param_1[1] = piVar5;
          piVar5[1] = (int)puVar8;
          *piVar5 = (int)param_1;
        }
      }
    }
    else if (iVar2 == 0x34153) {
      piVar1 = (int *)(param_2[1] + 8 + (int)param_2);
      piVar5 = param_2 + 2;
      if (piVar5 < piVar1) {
        do {
          puVar3 = (uint *)param_1[5];
          *puVar3 = (uint)piVar5;
          param_1[5] = piVar5;
          piVar5[1] = (int)puVar3;
          *piVar5 = (int)(param_1 + 4);
          for (puVar8 = (undefined4 *)*param_1; puVar8 != param_1; puVar8 = (undefined4 *)*puVar8) {
            if (*(short *)(puVar8 + 2) == (short)piVar5[3]) goto LAB_00731f7c;
          }
          for (puVar8 = (undefined4 *)param_1[2]; puVar8 != param_1 + 2;
              puVar8 = (undefined4 *)*puVar8) {
            if (*(short *)(puVar8 + 2) == (short)piVar5[3]) goto LAB_00731f7c;
          }
          puVar8 = (undefined4 *)0x0;
LAB_00731f7c:
          piVar5[2] = (int)puVar8;
          piVar5 = (int *)((int)piVar5 + *(char *)((int)piVar5 + 0xf) * 2 + 0x14);
        } while (piVar5 < piVar1);
      }
      puVar8 = param_1 + 4;
      for (_DAT_009a3a80 = (undefined4 *)param_1[4]; _DAT_009a3a80 != puVar8;
          _DAT_009a3a80 = (undefined4 *)*_DAT_009a3a80) {
        if (*(short *)(_DAT_009a3a80 + 3) == 0x199) goto LAB_00731fa7;
      }
      _DAT_009a3a80 = (undefined4 *)0x0;
LAB_00731fa7:
      for (_DAT_009a3a84 = (undefined4 *)*puVar8; _DAT_009a3a84 != puVar8;
          _DAT_009a3a84 = (undefined4 *)*_DAT_009a3a84) {
        if (*(short *)(_DAT_009a3a84 + 3) == 0x13a) goto LAB_00732027;
      }
      _DAT_009a3a84 = (undefined4 *)0x0;
    }
    else if (iVar2 == 0x34151) {
      param_1[0x15] = param_2 + 2;
      DAT_00903164 = param_2[2];
    }
    else if ((iVar2 != 0x34154) && (iVar2 == 0x34155)) {
      uVar9 = (uint)param_2[1] / 0x4c;
      piVar5 = param_2 + 2;
      if (uVar9 != 0) {
        do {
          puVar8 = (undefined4 *)param_1[9];
          *puVar8 = piVar5;
          param_1[9] = piVar5;
          piVar5[1] = (int)puVar8;
          *piVar5 = (int)(param_1 + 8);
          piVar5 = piVar5 + 0x13;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
LAB_00732027:
    param_2 = (int *)(param_2[1] + 8 + (int)param_2);
  } while( true );
}

