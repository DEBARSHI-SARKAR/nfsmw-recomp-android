/* speed.exe 007ec4d2 FUN_007ec4d2; analysis pseudocode, not buildable source.
 */

void FUN_007ec4d2(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = DAT_009bb0b8;
  if (param_2 == -1) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_2;
    if (param_2 == 0) {
      iVar5 = 1;
    }
  }
  DAT_009bb0b8 = DAT_009bb0b8 + 1;
  param_2 = iVar1;
  iVar3 = 0;
  piVar4 = &DAT_009baf78;
  iVar1 = -1;
  do {
    iVar2 = iVar3;
    if ((((*piVar4 != param_1) && (iVar2 = iVar1, *piVar4 == 0)) && (iVar1 == -1)) &&
       (iVar2 = iVar3, param_2 != 0)) {
      param_2 = param_2 + -1;
      iVar2 = iVar1;
    }
    piVar4 = piVar4 + 5;
    iVar3 = iVar3 + 1;
    iVar1 = iVar2;
  } while ((int)piVar4 < 0x9bb0b8);
  (&DAT_009baf88)[iVar2 * 5] = 0;
  (&DAT_009baf7c)[iVar2 * 5] = param_4;
  param_3 = DAT_009bb134 + param_3;
  DAT_009bb0b8 = DAT_009bb0b8 + -1;
  (&DAT_009baf80)[iVar2 * 5] = iVar5;
  (&DAT_009baf78)[iVar2 * 5] = param_1;
  (&DAT_009baf84)[iVar2 * 5] = param_3;
  return;
}

