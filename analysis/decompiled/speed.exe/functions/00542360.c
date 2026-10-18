/* speed.exe 00542360 FUN_00542360; analysis pseudocode, not buildable source.
 * calls 00514fd0 FUN_00514fd0
 * calls 00542360 FUN_00542360
 * calls 00524ee0 FUN_00524ee0
 * calls 00515140 FUN_00515140
 */

undefined4 FUN_00542360(float *param_1,float *param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  char cVar5;
  int iVar6;
  float local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar4 = param_2;
  fVar3 = (float)param_1;
  if (param_1 == (float *)0x0) {
switchD_00542387_caseD_8:
    return 0;
  }
  switch(*(undefined4 *)((int)param_1 + 0x18)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    pfVar1 = param_2 + 1;
    FUN_00514fd0(param_1,param_2,pfVar1);
    pfVar2 = pfVar4 + 3;
    param_1 = pfVar4 + 2;
    FUN_00515140(fVar3,param_1,pfVar2);
    *pfVar4 = param_3 + *pfVar4;
    *param_1 = param_3 + *param_1;
    *pfVar1 = param_4 + *pfVar1;
    *pfVar2 = param_4 + *pfVar2;
    break;
  case 5:
    iVar6 = *(int *)((int)param_1 + 100);
    if (iVar6 != 0) {
      do {
        local_10 = 40000.0;
        local_c = 40000.0;
        local_8 = -40000.0;
        local_4 = -40000.0;
        FUN_00524ee0(fVar3,local_18,&local_1c);
        FUN_00524ee0(fVar3,&param_1,local_14);
        cVar5 = FUN_00542360(iVar6,&local_10,(float)param_1 + param_3,local_1c + param_4);
        if (cVar5 != '\0') {
          if (local_10 < *pfVar4) {
            *pfVar4 = local_10;
          }
          if (pfVar4[2] < local_8) {
            pfVar4[2] = local_8;
          }
          if (local_c < pfVar4[1]) {
            pfVar4[1] = local_c;
          }
          if (pfVar4[3] < local_4) {
            pfVar4[3] = local_4;
          }
        }
        iVar6 = *(int *)(iVar6 + 4);
      } while (iVar6 != 0);
      return 1;
    }
    break;
  default:
    goto switchD_00542387_caseD_8;
  }
  return 1;
}

