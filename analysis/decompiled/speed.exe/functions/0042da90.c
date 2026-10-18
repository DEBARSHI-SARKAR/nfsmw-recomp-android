/* speed.exe 0042da90 FUN_0042da90; analysis pseudocode, not buildable source.
 * calls 00425f20 FUN_00425f20
 */

void FUN_0042da90(undefined4 *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *local_e8;
  float *local_e4;
  float local_e0 [8];
  float local_c0 [8];
  float local_a0 [8];
  float local_80 [8];
  float local_60 [8];
  float local_40 [8];
  float local_20 [8];
  
  pfVar4 = param_2 + (((int)param_3 - (int)param_2 >> 5) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 8;
  FUN_00425f20(param_2,pfVar4,param_3 + -8);
  for (local_e4 = pfVar4;
      ((param_2 < local_e4 && (*local_e4 <= local_e4[-8])) && (local_e4[-8] <= *local_e4));
      local_e4 = local_e4 + -8) {
  }
  do {
    pfVar4 = pfVar4 + 8;
    pfVar3 = pfVar4;
    pfVar2 = local_e4;
    if ((param_3 <= pfVar4) || (*pfVar4 < *local_e4)) break;
  } while (*pfVar4 <= *local_e4);
joined_r0x0042db2c:
  do {
    pfVar6 = local_e4;
    if (param_3 <= pfVar3) {
joined_r0x0042db93:
      for (; param_2 < local_e4; local_e4 = local_e4 + -8) {
        pfVar6 = pfVar6 + -8;
        if (*pfVar2 <= *pfVar6) {
          if (*pfVar2 < *pfVar6) break;
          pfVar2 = pfVar2 + -8;
          pfVar5 = pfVar2;
          pfVar7 = local_40;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar7 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            pfVar7 = pfVar7 + 1;
          }
          pfVar5 = pfVar6;
          pfVar7 = pfVar2;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar7 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            pfVar7 = pfVar7 + 1;
          }
          pfVar5 = local_40;
          pfVar7 = pfVar6;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar7 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            pfVar7 = pfVar7 + 1;
          }
        }
      }
      if (local_e4 == param_2) {
        if (pfVar3 == param_3) {
          *param_1 = pfVar2;
          param_1[1] = pfVar4;
          return;
        }
        if (pfVar4 != pfVar3) {
          pfVar6 = pfVar2;
          pfVar5 = local_e0;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar5 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar5 = pfVar5 + 1;
          }
          pfVar6 = pfVar4;
          pfVar5 = pfVar2;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar5 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar5 = pfVar5 + 1;
          }
          pfVar6 = local_e0;
          pfVar5 = pfVar4;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar5 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar5 = pfVar5 + 1;
          }
        }
        pfVar4 = pfVar4 + 8;
        pfVar6 = pfVar2;
        pfVar5 = local_c0;
        for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar5 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pfVar5 = pfVar5 + 1;
        }
        pfVar6 = pfVar3;
        pfVar5 = pfVar2;
        for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar5 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pfVar5 = pfVar5 + 1;
        }
        pfVar7 = pfVar3 + 8;
        pfVar2 = pfVar2 + 8;
        pfVar6 = local_c0;
        pfVar5 = pfVar3;
        for (iVar1 = 8; pfVar3 = pfVar7, iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar5 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pfVar5 = pfVar5 + 1;
        }
      }
      else {
        local_e4 = local_e4 + -8;
        if (pfVar3 == param_3) {
          pfVar2 = pfVar2 + -8;
          if (local_e4 != pfVar2) {
            pfVar6 = local_e4;
            pfVar5 = local_a0;
            for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
              *pfVar5 = *pfVar6;
              pfVar6 = pfVar6 + 1;
              pfVar5 = pfVar5 + 1;
            }
            pfVar6 = pfVar2;
            pfVar5 = local_e4;
            for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
              *pfVar5 = *pfVar6;
              pfVar6 = pfVar6 + 1;
              pfVar5 = pfVar5 + 1;
            }
            pfVar6 = local_a0;
            pfVar5 = pfVar2;
            for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
              *pfVar5 = *pfVar6;
              pfVar6 = pfVar6 + 1;
              pfVar5 = pfVar5 + 1;
            }
          }
          pfVar4 = pfVar4 + -8;
          pfVar6 = pfVar2;
          pfVar5 = local_60;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar5 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar5 = pfVar5 + 1;
          }
          pfVar6 = pfVar4;
          pfVar5 = pfVar2;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar5 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar5 = pfVar5 + 1;
          }
          pfVar6 = local_60;
          pfVar5 = pfVar4;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar5 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar5 = pfVar5 + 1;
          }
        }
        else {
          pfVar6 = pfVar3;
          pfVar5 = local_20;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar5 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar5 = pfVar5 + 1;
          }
          pfVar6 = local_e4;
          pfVar5 = pfVar3;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar5 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar5 = pfVar5 + 1;
          }
          pfVar3 = pfVar3 + 8;
          pfVar6 = local_20;
          pfVar5 = local_e4;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar5 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar5 = pfVar5 + 1;
          }
        }
      }
      goto joined_r0x0042db2c;
    }
    local_e8 = pfVar4;
    if (*pfVar3 <= *pfVar2) {
      if (*pfVar3 < *pfVar2) goto joined_r0x0042db93;
      local_e8 = pfVar4 + 8;
      pfVar6 = pfVar4;
      pfVar5 = local_80;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar5 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar5 = pfVar5 + 1;
      }
      pfVar6 = pfVar3;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar4 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar4 = pfVar4 + 1;
      }
      pfVar4 = local_80;
      pfVar6 = pfVar3;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar6 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar6 = pfVar6 + 1;
      }
    }
    pfVar3 = pfVar3 + 8;
    pfVar4 = local_e8;
  } while( true );
}

