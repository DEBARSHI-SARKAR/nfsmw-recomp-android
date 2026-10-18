/* speed.exe 005d7fe0 FUN_005d7fe0; analysis pseudocode, not buildable source.
 * calls 005d5bb0 FUN_005d5bb0
 * calls 005d7b70 FUN_005d7b70
 * calls 007c45f0 FUN_007c45f0
 * calls 005d4a90 FUN_005d4a90
 * calls 005d5bf0 FUN_005d5bf0
 * calls 005d5c30 FUN_005d5c30
 * calls 005cd020 FUN_005cd020
 * calls 005cd070 FUN_005cd070
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_005d7fe0(int *param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  bool bVar8;
  float10 fVar9;
  float fStack_220;
  float fStack_21c;
  int local_218;
  int *local_214;
  int local_210;
  float local_20c;
  float local_208 [2];
  float local_200 [128];
  
  FUN_005d7b70();
  local_214 = param_1 + param_1[1] + 2;
  pfVar7 = (float *)(param_1 + 2);
  pfVar6 = local_200;
  if (*param_1 != 0) {
    local_218 = *param_1;
    do {
      iVar2 = *local_214;
      local_214 = (int *)((int)local_214 + 1);
      switch((char)iVar2) {
      case '\x01':
        *pfVar6 = *pfVar7;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
        goto switchD_005d8032_default;
      case '\x02':
        fVar4 = (float)(*param_2)(*pfVar7,0,param_3,param_4);
        goto LAB_005d835b;
      case '\x03':
        pfVar5 = pfVar6 + -2;
        fStack_21c = pfVar6[-1];
        *pfVar5 = pfVar6[-1] + pfVar6[-2];
        break;
      case '\x04':
        pfVar5 = pfVar6 + -2;
        fStack_21c = pfVar6[-1];
        *pfVar5 = pfVar6[-2] - pfVar6[-1];
        break;
      case '\x05':
        pfVar5 = pfVar6 + -2;
        fStack_21c = pfVar6[-1];
        *pfVar5 = pfVar6[-1] * pfVar6[-2];
        break;
      case '\x06':
        pfVar5 = pfVar6 + -2;
        fStack_21c = pfVar6[-1];
        *pfVar5 = pfVar6[-2] / pfVar6[-1];
        break;
      case '\a':
        fStack_21c = pfVar6[-1];
        pfVar5 = pfVar6 + -2;
        fVar9 = (float10)FUN_007c45f0();
        *pfVar5 = (float)fVar9;
        break;
      case '\b':
        pfVar5 = pfVar6 + -1;
        *pfVar5 = -pfVar6[-1];
        break;
      case '\t':
        pfVar5 = pfVar6 + -1;
        if (pfVar6[-1] == _DAT_00890968) {
          *pfVar5 = _DAT_0089096c;
        }
        else {
          *pfVar5 = _DAT_00890968;
        }
        break;
      case '\n':
        pfVar3 = pfVar6 + -1;
        pfVar5 = pfVar6 + -2;
        pfVar6 = pfVar6 + -2;
        fVar4 = (float)FUN_005cd020(*pfVar5,*pfVar3);
        goto LAB_005d835e;
      case '\v':
        pfVar3 = pfVar6 + -1;
        pfVar5 = pfVar6 + -2;
        pfVar6 = pfVar6 + -2;
        fVar4 = (float)FUN_005cd070(*pfVar5,*pfVar3);
        goto LAB_005d835e;
      case '\f':
        fStack_220 = pfVar6[-2];
        fStack_21c = pfVar6[-1];
        goto LAB_005d81b1;
      case '\r':
        fStack_220 = pfVar6[-2];
        fStack_21c = pfVar6[-1];
LAB_005d81b1:
        bVar8 = fStack_220 != fStack_21c;
        goto LAB_005d81c0;
      case '\x0e':
        fStack_21c = pfVar6[-1];
        bVar8 = pfVar6[-1] <= pfVar6[-2];
        goto LAB_005d81c0;
      case '\x0f':
        fStack_21c = pfVar6[-1];
        bVar8 = pfVar6[-2] < fStack_21c == (pfVar6[-2] == fStack_21c);
LAB_005d81c0:
        if (bVar8) {
LAB_005d8286:
          pfVar5 = pfVar6 + -2;
          *pfVar5 = _DAT_00890968;
        }
        else {
LAB_005d81c6:
          pfVar5 = pfVar6 + -2;
          *pfVar5 = _DAT_0089096c;
        }
        break;
      case '\x10':
        pfVar5 = pfVar6 + -2;
        fStack_21c = pfVar6[-1];
        if (pfVar6[-1] < pfVar6[-2]) {
          *pfVar5 = _DAT_0089096c;
          break;
        }
        goto LAB_005d8286;
      case '\x11':
        fStack_21c = pfVar6[-1];
        if (pfVar6[-2] < pfVar6[-1]) goto LAB_005d8286;
        goto LAB_005d81c6;
      case '\x12':
        pfVar5 = pfVar6 + -3;
        fStack_21c = pfVar6[-2];
        local_20c = pfVar6[-1];
        pfVar3 = &fStack_21c;
        if (pfVar6[-3] == _DAT_00890968) {
          pfVar3 = &local_20c;
        }
        *pfVar5 = *pfVar3;
        break;
      case '\x13':
        pfVar3 = pfVar6 + -1;
        pfVar6 = pfVar6 + -1;
        fVar4 = (float)FUN_005d5bb0(*pfVar7,*pfVar3);
        goto LAB_005d835b;
      case '\x14':
        pfVar3 = pfVar6 + -1;
        pfVar5 = pfVar6 + -2;
        pfVar6 = pfVar6 + -2;
        fVar4 = (float)FUN_005d5bf0(*pfVar7,*pfVar5,*pfVar3);
        goto LAB_005d835b;
      case '\x15':
        pfVar3 = pfVar6 + -1;
        pfVar5 = pfVar6 + -2;
        pfVar1 = pfVar6 + -3;
        pfVar6 = pfVar6 + -3;
        fVar4 = (float)FUN_005d5c30(*pfVar7,*pfVar1,*pfVar5,*pfVar3);
        goto LAB_005d835b;
      case '\x16':
        local_208[0] = *pfVar7;
        fVar4 = pfVar6[-4];
        pfVar6 = pfVar6 + -4;
        FUN_005d4a90(&local_210,DAT_0091de2c,DAT_0091de30,local_208,0);
        fVar4 = (float)(**(code **)(local_210 + 4))(fVar4);
LAB_005d835b:
        pfVar7 = pfVar7 + 1;
LAB_005d835e:
        *pfVar6 = fVar4;
        pfVar5 = pfVar6;
        break;
      default:
        goto switchD_005d8032_default;
      }
      pfVar6 = pfVar5 + 1;
switchD_005d8032_default:
      local_218 = local_218 + -1;
    } while (local_218 != 0);
  }
  return *pfVar6;
}

