/* speed.exe 00755590 FUN_00755590; analysis pseudocode, not buildable source.
 * calls 00404db0 FUN_00404db0
 * calls 0045dbf0 FUN_0045dbf0
 * calls 004647c0 FUN_004647c0
 * calls 0045db30 FUN_0045db30
 * calls 007363c0 FUN_007363c0
 * calls 006f1170 FUN_006f1170
 * calls 00462520 FUN_00462520
 */

void FUN_00755590(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined1 auStack_128 [4];
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_110 [4];
  undefined1 local_100 [48];
  float afStack_d0 [4];
  undefined2 auStack_c0 [2];
  undefined4 auStack_bc [3];
  undefined1 local_b0 [172];
  
  if (((DAT_009b090c != 0) && (DAT_0092cd84 != 0)) &&
     (piVar1 = (int *)*DAT_0092cd7c, piVar1 != (int *)0x0)) {
    FUN_004647c0(local_100,"TRACKS\\HotPosition%s.HOT",DAT_009a3a20 + 0x40);
    FUN_00404db0(local_b0,0x20,5,&LAB_00736590);
    iVar3 = FUN_007363c0(local_100,local_b0,5);
    iVar2 = DAT_009b090c;
    if (DAT_009b090c <= iVar3) {
      iVar3 = DAT_009b090c * 8;
      fVar4 = (float10)FUN_0045db30(auStack_c0[DAT_009b090c * 0x10]);
      local_124 = (float)fVar4;
      fVar4 = (float10)FUN_0045dbf0(auStack_c0[iVar2 * 0x10]);
      local_118 = afStack_d0[iVar3];
      local_120 = -afStack_d0[iVar2 * 8 + 1];
      local_11c = afStack_d0[iVar2 * 8 + 2];
      local_110[0] = -local_124;
      local_110[2] = (float)fVar4;
      local_110[1] = 0.0;
      (**(code **)(*piVar1 + 0x68))(&local_120,local_110);
      FUN_006f1170(auStack_128,1);
      (**(code **)(*piVar1 + 0x94))(auStack_bc[iVar2 * 8]);
    }
    DAT_009b090c = 0;
    FUN_00462520();
  }
  return;
}

