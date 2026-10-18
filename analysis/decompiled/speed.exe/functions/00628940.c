/* speed.exe 00628940 FUN_00628940; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00628940(float param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  
  iVar3 = (int)param_1;
  fVar1 = _DAT_00890968;
  iVar4 = (&DAT_0091f418)[(int)param_1 * 0xd + param_2 * 3 + 1];
  switch(iVar4) {
  case 1:
    iVar4 = (**(code **)(*DAT_0091f1d8 + 0x1c))
                      ((&DAT_0091f418)[(int)param_1 * 0xd + param_2 * 3 + 2]);
    if (iVar4 != 0) goto LAB_00628990;
    goto LAB_00628a26;
  case 2:
    if ((int *)(&DAT_0091f150)[(&DAT_0091f418)[(int)param_1 * 0xd + param_2 * 3 + 2]] != (int *)0x0)
    {
      iVar4 = (**(code **)(*(int *)(&DAT_0091f150)
                                   [(&DAT_0091f418)[(int)param_1 * 0xd + param_2 * 3 + 2]] + 4))();
      return (float10)*(int *)(iVar4 + 0xc +
                              (&DAT_0091f418)[(int)param_1 * 0xd + param_2 * 3 + 3] * 4) *
             (float10)_DAT_008a7a5c;
    }
    break;
  case 3:
    if ((int *)(&DAT_0091f150)[(&DAT_0091f418)[(int)param_1 * 0xd + param_2 * 3 + 2]] == (int *)0x0)
    break;
    iVar4 = (**(code **)(*(int *)(&DAT_0091f150)
                                 [(&DAT_0091f418)[(int)param_1 * 0xd + param_2 * 3 + 2]] + 4))();
    iVar4 = *(int *)(iVar4 + 0x220);
    switch((&DAT_0091f418)[(int)param_1 * 0xd + param_2 * 3 + 3]) {
    case 0:
      if ((iVar4 == 0x7b0c) || (iVar4 == 0)) goto LAB_00628990;
      bVar5 = iVar4 == 0x1194;
      break;
    case 1:
      if ((iVar4 == 0x1194) || (iVar4 == 9000)) goto LAB_00628990;
      bVar5 = iVar4 == 0x34bc;
      break;
    case 2:
      if ((iVar4 == 0x34bc) || (iVar4 == 18000)) goto LAB_00628990;
      bVar5 = iVar4 == 0x57e4;
      break;
    case 3:
      if ((iVar4 == 0x57e4) || (iVar4 == 27000)) goto LAB_00628990;
      bVar5 = iVar4 == 0x7b0c;
      break;
    default:
      goto switchD_00628970_default;
    }
    if (bVar5) {
LAB_00628990:
      return (float10)_DAT_0089096c;
    }
LAB_00628a26:
    return (float10)_DAT_00890968;
  case 4:
  case 5:
    param_1 = 1.0;
    if (iVar4 == 5) {
      param_1 = -1.0;
    }
    if ((int *)(&DAT_0091f150)[(&DAT_0091f418)[iVar3 * 0xd + param_2 * 3 + 2]] != (int *)0x0) {
      iVar4 = (&DAT_0091f418)[iVar3 * 0xd + param_2 * 3 + 3];
      piVar2 = (int *)(**(code **)(*(int *)(&DAT_0091f150)
                                           [(&DAT_0091f418)[iVar3 * 0xd + param_2 * 3 + 2]] + 4))();
      if (iVar4 == 0) {
        fVar6 = (float10)*piVar2;
      }
      else if (iVar4 == 1) {
        fVar6 = (float10)piVar2[1];
      }
      else {
        fVar6 = (float10)piVar2[2];
      }
      fVar6 = ((float10)_DAT_008a7a58 - fVar6) * (float10)param_1;
      if (fVar6 <= (float10)_DAT_00890968) {
        return (float10)_DAT_00890968 * (float10)_DAT_008957bc;
      }
LAB_00628ba1:
      return fVar6 * (float10)_DAT_008957bc;
    }
    break;
  case 6:
  case 7:
    param_1 = 1.0;
    if (iVar4 == 7) {
      param_1 = -1.0;
    }
    if ((int *)(&DAT_0091f150)[(&DAT_0091f418)[iVar3 * 0xd + param_2 * 3 + 2]] != (int *)0x0) {
      iVar4 = (&DAT_0091f418)[iVar3 * 0xd + param_2 * 3 + 3];
      iVar3 = (**(code **)(*(int *)(&DAT_0091f150)[(&DAT_0091f418)[iVar3 * 0xd + param_2 * 3 + 2]] +
                          4))();
      if (iVar4 == 0) {
        fVar6 = (float10)*(int *)(iVar3 + 0x20c);
      }
      else if (iVar4 == 1) {
        fVar6 = (float10)*(int *)(iVar3 + 0x210);
      }
      else {
        fVar6 = (float10)*(int *)(iVar3 + 0x214);
      }
      fVar6 = ((float10)_DAT_008a7a58 - fVar6) * (float10)param_1;
      if (fVar6 <= (float10)_DAT_00890968) {
        return (float10)_DAT_00890968 * (float10)_DAT_008957bc;
      }
      goto LAB_00628ba1;
    }
    break;
  case 8:
  case 9:
    param_1 = 1.0;
    if (iVar4 == 9) {
      param_1 = -1.0;
    }
    if ((int *)(&DAT_0091f150)[(&DAT_0091f418)[iVar3 * 0xd + param_2 * 3 + 2]] != (int *)0x0) {
      iVar4 = (**(code **)(*(int *)(&DAT_0091f150)[(&DAT_0091f418)[iVar3 * 0xd + param_2 * 3 + 2]] +
                          4))();
      fVar6 = ((float10)_DAT_008a7a58 -
              (float10)*(int *)(iVar4 + 0x218 + (&DAT_0091f418)[iVar3 * 0xd + param_2 * 3 + 3] * 4))
              * (float10)param_1;
      if (fVar6 <= (float10)_DAT_00890968) {
        fVar6 = (float10)_DAT_00890968;
      }
      goto LAB_00628ba1;
    }
  }
switchD_00628970_default:
  return (float10)fVar1;
}

