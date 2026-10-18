/* speed.exe 00755450 FUN_00755450; analysis pseudocode, not buildable source.
 * calls 00404db0 FUN_00404db0
 * calls 005d59f0 FUN_005d59f0
 * calls 004647c0 FUN_004647c0
 * calls 0045ded0 FUN_0045ded0
 * calls 007363c0 FUN_007363c0
 * calls 00462520 FUN_00462520
 * calls 00736500 FUN_00736500
 */

void FUN_00755450(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  int *piVar7;
  float *pfVar8;
  float10 fVar9;
  int local_114;
  undefined1 local_100 [48];
  float afStack_d0 [4];
  undefined2 auStack_c0 [2];
  float afStack_bc [3];
  undefined1 local_b0 [172];
  
  if (((DAT_009b0908 != 0) && (DAT_0092cd84 != 0)) &&
     (piVar3 = (int *)*DAT_0092cd7c, piVar3 != (int *)0x0)) {
    piVar7 = (int *)FUN_005d59f0(&LAB_004039c0);
    if (piVar7 != (int *)0x0) {
      FUN_004647c0(local_100,"TRACKS\\HotPosition%s.HOT",DAT_009a3a20 + 0x40);
      FUN_00404db0(local_b0,0x20,5,&LAB_00736590);
      local_114 = FUN_007363c0(local_100,local_b0,5);
      if (5 < DAT_009b0908) {
        DAT_009b0908 = 5;
      }
      iVar5 = DAT_009b0908;
      if (local_114 < DAT_009b0908) {
        local_114 = DAT_009b0908;
      }
      iVar4 = DAT_009b0908 * 8;
      pfVar8 = (float *)(**(code **)(*piVar7 + 0x98))();
      uVar6 = FUN_0045ded0(pfVar8[2],-*pfVar8);
      auStack_c0[iVar5 * 0x10] = uVar6;
      pfVar8 = (float *)(**(code **)(*piVar3 + 0xc))();
      fVar1 = *pfVar8;
      fVar2 = pfVar8[1];
      afStack_d0[iVar4] = pfVar8[2];
      afStack_d0[iVar5 * 8 + 1] = -fVar1;
      afStack_d0[iVar5 * 8 + 2] = fVar2;
      fVar9 = (float10)(**(code **)(*piVar3 + 0x90))();
      afStack_bc[iVar5 * 8] = (float)fVar9;
      FUN_00736500(local_100,local_b0,local_114);
      DAT_009b0908 = 0;
      FUN_00462520();
    }
  }
  return;
}

