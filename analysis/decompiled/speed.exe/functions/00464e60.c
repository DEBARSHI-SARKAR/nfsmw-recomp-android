/* speed.exe 00464e60 FUN_00464e60; analysis pseudocode, not buildable source.
 * calls 007c7250 FUN_007c7250
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00464510 FUN_00464510
 * calls EXTERNAL:00000047 QueryPerformanceCounter
 * calls 007c66d0 _malloc
 * calls 007c66a0 __allshr
 * calls 007ec1bd FUN_007ec1bd
 */

int * __thiscall
FUN_00464e60(undefined4 *param_1,uint param_2,int *param_3,int param_4,int param_5,int param_6,
            uint *param_7)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  size_t _Size;
  LARGE_INTEGER local_8;
  
  uVar9 = param_2;
  do {
    FUN_007ec1bd();
    uVar9 = uVar9 + 3 & 0xfffffffc;
    if ((int)uVar9 < 0x10) {
      uVar9 = 0x10;
    }
    param_2 = 0;
    iVar8 = 0x7fffffff;
    if (param_5 == 0) {
      piVar4 = (int *)param_1[2];
      if (piVar4 != param_1 + 1) {
        local_8.s.LowPart = (int)param_3 - 1;
        piVar10 = (int *)0x0;
        do {
          iVar7 = (int)((int)piVar4 + param_4 + (piVar4[2] - uVar9) & local_8.s.LowPart) %
                  (int)param_3;
          iVar3 = (piVar4[2] - iVar7) - uVar9;
          if ((((iVar3 == 0) || (0xf < iVar3)) && (iVar3 < iVar8)) &&
             (iVar8 = iVar3, piVar10 = piVar4, param_2 = iVar7, param_6 == 0)) break;
          piVar4 = (int *)piVar4[1];
        } while (piVar4 != param_1 + 1);
        goto LAB_00464f69;
      }
    }
    else {
      piVar4 = (int *)param_1[1];
      if (piVar4 != param_1 + 1) {
        piVar10 = (int *)0x0;
        do {
          iVar7 = (int)((int)param_3 - (param_4 + (int)piVar4 & (int)param_3 - 1U)) % (int)param_3;
          iVar3 = (piVar4[2] - iVar7) - uVar9;
          if (((iVar3 == 0) || (0xf < iVar3)) &&
             ((iVar3 < iVar8 && (iVar8 = iVar3, piVar10 = piVar4, param_2 = iVar7, param_6 == 0))))
          break;
          piVar4 = (int *)*piVar4;
        } while (piVar4 != param_1 + 1);
LAB_00464f69:
        if (piVar10 != (int *)0x0) {
          uVar9 = uVar9 + param_2;
          if (param_5 == 0) {
            iVar8 = piVar10[2] - uVar9;
            param_3 = (int *)(iVar8 + (int)piVar10);
            piVar10[2] = iVar8;
            if (iVar8 != 0) goto LAB_0046505a;
          }
          else {
            param_3 = piVar10;
            if (piVar10[2] - uVar9 != 0) {
              piVar4 = (int *)((int)piVar10 + uVar9);
              piVar4[2] = piVar10[2] - uVar9;
              piVar4[3] = 0x44443333;
              iVar8 = *piVar10;
              *piVar10 = (int)piVar4;
              *(int **)(iVar8 + 4) = piVar4;
              piVar4[1] = (int)piVar10;
              *piVar4 = iVar8;
            }
          }
          iVar8 = *piVar10;
          piVar4 = (int *)piVar10[1];
          *piVar4 = iVar8;
          *(int **)(iVar8 + 4) = piVar4;
LAB_0046505a:
          if (*(char *)(param_1 + 0x10) != '\0') {
            if (DAT_0090e670 == 0) {
              iVar8 = -0x55555556;
            }
            else {
              QueryPerformanceCounter(&local_8);
              uVar2 = __allshr();
              iVar8 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
            }
            piVar4 = param_3;
            for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *piVar4 = iVar8;
              piVar4 = piVar4 + 1;
            }
            for (uVar6 = uVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(char *)piVar4 = (char)iVar8;
              piVar4 = (int *)((int)piVar4 + 1);
            }
          }
          iVar8 = param_1[0xc] + uVar9;
          param_1[9] = param_1[9] + 1;
          param_1[10] = param_1[10] + 1;
          param_1[0xc] = iVar8;
          if ((int)param_1[0xd] < iVar8) {
            param_1[0xd] = iVar8;
          }
          param_1[0xe] = param_1[0xb] - iVar8;
          param_1[0xf] = param_1[0xb] - param_1[0xd];
          FUN_007ec1c8();
          *param_7 = uVar9;
          return param_3;
        }
      }
    }
    FUN_007ec1c8();
    _Size = (int)param_3 + 0x10 + uVar9;
    if ((int)_Size < (int)DAT_008ed3ac) {
      _Size = DAT_008ed3ac;
    }
    piVar4 = _malloc(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[3] = _Size;
      pvVar5 = _malloc(_Size);
      piVar4[2] = (int)pvVar5;
    }
    iVar8 = piVar4[2];
    if (iVar8 == 0) {
      FUN_007c7250(piVar4[2]);
      FUN_007c7250(piVar4);
      return (int *)0x0;
    }
    iVar3 = piVar4[3];
    param_1[0xb] = param_1[0xb] + iVar3;
    FUN_00464510(iVar8,iVar3,*param_1);
    puVar1 = (undefined4 *)param_1[6];
    *puVar1 = piVar4;
    param_1[6] = piVar4;
    piVar4[1] = (int)puVar1;
    *piVar4 = (int)(param_1 + 5);
  } while( true );
}

