/* speed.exe 00743400 FUN_00743400; analysis pseudocode, not buildable source.
 * calls 00768200 FUN_00768200
 * calls 00789c90 FUN_00789c90
 * calls 007385e0 FUN_007385e0
 * calls 00743390 FUN_00743390
 */

void __thiscall
FUN_00743400(int param_1,int param_2,float param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar3 = param_4;
  iVar9 = (int)param_3;
  iVar5 = 0;
  if (0 < *param_4) {
    do {
      (&DAT_009ae380)[iVar5] = (undefined4 *)param_2;
      iVar5 = iVar5 + 1;
      param_2 = param_2 + 0x10;
    } while (iVar5 < *param_4);
  }
  iVar5 = *param_4;
  iVar6 = FUN_007385e0(&DAT_009ae380,iVar5,FUN_00738560);
  (&DAT_009ae380)[iVar5] = DAT_009ae380;
  iVar5 = FUN_007385e0(&DAT_009ae380 + iVar6,(iVar5 - iVar6) + 1,&LAB_007385c0);
  iVar8 = 0;
  *param_4 = iVar5 + iVar6;
  if (param_3 != 0.0) {
    *(undefined4 *)(param_1 + 0x7c) = 0x3fa00000;
    puVar7 = &DAT_009b2910;
    if (param_7 == 0) {
      iVar9 = *param_4;
      bVar2 = true;
      param_4 = (int *)0x0;
      iVar5 = (int)param_4;
      if (0 < iVar9) {
        do {
          local_c = (float)(&DAT_009ae380)[iVar8][1];
          local_4 = *(&DAT_009ae380)[iVar8];
          puVar7[1] = local_c;
          local_c = -local_c;
          puVar7[2] = param_5;
          local_8 = param_5;
          *puVar7 = local_4;
          FUN_00789c90(param_3,&local_c,bVar2);
          if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
            fVar10 = (float10)FUN_00768200(&local_c);
            puVar7[2] = (float)fVar10;
          }
          cVar4 = FUN_00743390(puVar7);
          if (cVar4 == '\0') {
            param_4 = (int *)((int)param_4 + 1);
          }
          else {
            puVar7 = puVar7 + 4;
          }
          bVar2 = cVar4 != '\0';
          iVar8 = iVar8 + 1;
          iVar5 = (int)param_4;
        } while (iVar8 < *piVar3);
      }
    }
    else {
      DAT_009b2914 = (float)DAT_009ae380[1];
      DAT_009b2910 = *DAT_009ae380;
      DAT_009b2918 = param_5;
      local_c = -DAT_009b2914;
      param_3 = 0.0;
      local_8 = param_5;
      local_4 = DAT_009b2910;
      FUN_00789c90(iVar9,&local_c,1);
      if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
        fVar10 = (float10)FUN_00768200(&local_c);
        param_3 = (float)fVar10;
      }
      iVar5 = 0;
      iVar9 = 0;
      if (0 < *param_4) {
        do {
          uVar1 = *(&DAT_009ae380)[iVar9];
          puVar7[1] = (&DAT_009ae380)[iVar9][1];
          *puVar7 = uVar1;
          puVar7[2] = param_3;
          cVar4 = FUN_00743390(puVar7);
          if (cVar4 == '\0') {
            iVar5 = iVar5 + 1;
          }
          else {
            puVar7 = puVar7 + 4;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *param_4);
        *param_4 = *param_4 - iVar5;
        return;
      }
    }
    *piVar3 = *piVar3 - iVar5;
  }
  return;
}

