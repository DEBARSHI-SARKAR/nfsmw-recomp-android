/* speed.exe 00793be0 FUN_00793be0; analysis pseudocode, not buildable source.
 * calls 007552a0 FUN_007552a0
 * calls 00732f60 FUN_00732f60
 * calls 007921d0 FUN_007921d0
 * calls 0078ea20 FUN_0078ea20
 */

void FUN_00793be0(void)

{
  int iVar1;
  uint uVar2;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  if ((((DAT_009b4218 != 0) && (*(int *)(DAT_009b4218 + 0x88) == 3)) &&
      (uVar2 = FUN_0078ea20(), iVar1 = DAT_00905ddc, -1 < DAT_00905ddc)) &&
     (((5 < DAT_009b41fc && (5 < DAT_009b420c)) &&
      ((uVar2 != 0 && (*(int *)(DAT_00905ddc * 4 + 0x9b0fa8) != 0)))))) {
    local_40c[0] = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 1;
    FUN_00732f60(2,&DAT_009b45a8);
    FUN_00732f60(iVar1,&DAT_009b42d8);
    FUN_00732f60(uVar2 & 0xf,&DAT_009b4440);
    FUN_007552a0(iVar1,local_40c,uVar2);
    FUN_007921d0(2,local_40c,0);
  }
  return;
}

